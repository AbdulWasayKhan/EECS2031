/**
* Syed Shah
* 213927942
* October 6, 2017
* fileInfo.c - This is my solution to the third lab of eecs2031. In this part I
* took an input file name from the user and checked it against the file my code
* was currently reading in the disk. It would go through all the sectors of the
* file and calculate the file size by using the 128th byte of the sector.
**/
#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include <string.h>
#include "dos2sd.h"

static void fileInfo(FILE *fd, struct ATRSSDISK *disk, char *input)
{
	int sector, entry, i, count, start, baseFileNumber, size, exist;
	char name[9], ext[4], inN[9], inE[4];
	
	exist = 1;
	size = 0;
	baseFileNumber = 0;
	for(sector=361;sector<=368;sector++) {
		for(entry=0;entry<ATR_SECTOR_SIZE;entry+=16) {
			if(disk->sector[sector-1][entry] == 0x042) {
				for(i=0;i<8;i++)
					name[i] = disk->sector[sector-1][entry+5+i];
				name[8] = '\0';
				for(i=0;i<3;i++) 
					ext[i] = disk->sector[sector-1][entry+13+i];
				ext[3] = '\0';
				count = disk->sector[sector-1][entry+1]|disk->sector[sector-1][entry+2]<<8;
				start = disk->sector[sector-1][entry+3]|disk->sector[sector-1][entry+4]<<8;
				sscanf(input, "%[^.].%s", inN, inE);
				if(!strcmp(name, inN) && !strcmp(ext, inE)){
					exist = 0;
					printf("%s.%s sector List ", name, ext);
					for(i = start; i <(start + count); i++)
					{         
						printf("%d ", i);
						size = size + disk -> sector[i][127];
					} 
					printf("Total file size %d\n", size);
				}
			}
			baseFileNumber++;
		}
	}
	if(exist)
		printf("The file %s.%s does not exist\n", inN, inE);
}


int main(int argc, char *argv[])
{
	
	struct ATRSSDISK *disk;
	
	if(argc != 3) {
		fprintf(stderr,"usage: %s disk\n", argv[0]);
		exit(1);
	}
	if((disk = readDisk(argv[1])) == (struct ATRSSDISK *)NULL) {
		fprintf(stderr,"Unable to read disk %s\n", argv[1]);
		exit(1);
	}
	fileInfo(stdout, disk, argv[2]);
	freeDisk(disk);
	return 0;
    
}
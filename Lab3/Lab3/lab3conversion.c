/***************************************
* EECS2031 – Lab3 *
* Author: Khan, Abdul Wasay *
* Email: awkhan94@my.yorku.ca *
* EECS_num: awkhan94 *
* York Student #: 214981104 *
***************************************/

#include <stdio.h>


/*declaration of the methods implemented after main*/
float fun_IF (int, char, float);
float fun_II (int, char, int);
float fun_FF (float, char, float);


main(){

 int first; float second;  char operat;
float result1, result2, result3;


 while(1){
   printf("Enter operand1 operator operand2 separated by blanks>" );
   scanf( "%d %c %f",  &first, &operat, &second); // assign value to a b

   if (first == -1 && second==-1)
      break;
            result1 = fun_IF(first, operat, second);
            result2 = fun_II(first, operat, second);
            result3 = fun_FF(first, operat, second);


   printf("Your input '%d %c %f' results in %f (fun_IF) and %f (fun_II) and %f (fun_FF)\n\n",first, operat, second, result1,result2, result3);

 }


}

float fun_IF(int first, char operat, float second)
{
   float result;
   if(operat == '+')
     result = first + second;
   else if (operat == '-')
     result = first - second;
   else if (operat == '*')
     result = first * second;
   else result = first / second;

   return result;
}

float fun_II(int first, char operat, int second)
{
   float result;
   if(operat == '+')
     result = first + second;
   else if (operat == '-')
     result = first - second;
   else if (operat == '*')
     result = first * second;
   else result = first / second;

   return result;
}

float fun_FF(float first, char operat, float second)
{
   float result;
   if(operat == '+')
     result = first + second;
   else if (operat == '-')
     result = first - second;
   else if (operat == '*')
     result = first * second;
   else result = first / second;

   return result;
}

/*
conversion happens in 1) arithmetic expression, 2)assignment,  3)function call, and 4)function return.
for 12 + 22.3024
In calII(), the 2nd actual argument is converted from float to int (case 3). so 12+22=34, then the int result is converted to float 34.0000 (case 2 or 4)
In calIF(), no conversion in argument, then in arithmetic expression 12+22.3024, 12 is promoted to 12.00000 (case 1). so 12.0000+22.3024
In calFF(), in function call, 12 is converted to float (case 3), so 12.00000+22.3024.
*/

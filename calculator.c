//Author: Jorge G Nader
//Date: 6/27/2019
//Info: This program implements a basic calculator

#include <stdio.h>

int main(void)
{
  double num1, num2 = 0.0;    // Operands
  char operator =0;           // Operator - must be +, -, *, /, or % //

  printf("Input your calculation:\n");
  scanf("%lf %c %lf", &num1, &operator, &num2 );  //Input in form of "3+2"
  getchar(); //This prevents immediate closing due to Enter

  switch(operator)
  {
    case '+':
      printf("= %lf \n", num1 + num2);
      break;

    case '-':
      printf("= %lf \n", num1 - num2);
      break;

    case '*':
      printf("= %lf \n", num1 * num2);
      break;

    case '/':
      if(num2 == 0)        // checks for division by zero
        printf("\nError can't devide by zero\n");
      else
        printf("= %lf \n", num1 / num2);
      break;

    case '%':
      if(num2 == 0)        // checks for division by zero
        printf("\nError can't devide by zero\n");
      else
        printf("= %ld \n", (long)num1 % (long)num2); // Must cast type Long for the modulus
      break;

    default:
      printf("\nYou entered an invalid operantor\n");
      break;
  }
  getchar();   //Prevents program to close
  return 0;
}

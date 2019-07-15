//Author: Jorge G Nader
//Date: 7/13/2019
//Info: This program find the roots of a quadratic equation

#include <stdio.h>
#include <math.h>

int main(void)
{
  double a,b,c, discriminant, root1, root2, real, imaginary;

  printf("This program calculates the roots of coefficients a, b and c\n");
  printf("Please enter a: \n");
  scanf("%lf", &a );
  printf("Please enter b: \n");
  scanf("%lf", &b );
  printf("Please enter c: \n");
  scanf("%lf", &c );

  getchar(); //Prevent program to close

  discriminant = b*b-4*a*c;
  //This condition evaluete for real roots that are different
  if (discriminant > 0 )
  {
    root1 = (-b+sqrt(discriminant))/(2*a); // (+)
    root2 = (-b-sqrt(discriminant))/(2*a); // (-)

    printf("Roots are: %.3lf and  %.3lf", root1, root2 );
  }
  //This condition evaluete for real roots that are equal
  else if (discriminant == 0)
  {
    root1 = root2 = -b/(2*a);

    printf("Both roots are the same:  %.3lf", root1 );
  }

  //This condition evaluates for imaginary roots
  else
  {
    real = -b/(2*a);
    imaginary = sqrt(-discriminant)/(2*a);
    printf("Roots are: %.3lf+%.3lfi and  %.3lf-%.3lfi", real , imaginary, real, imaginary);
  }

getchar(); //Prevents program to close
return 0;
}

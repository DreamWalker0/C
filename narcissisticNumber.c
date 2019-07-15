//Author: Jorge G Nader
//Date: 7/14/2019
//Info: This program give all Armstrong numbers from a given interval

#include <stdio.h>
#include <math.h>

int main()
{
  int lowInterval, highInterval, i, temp1, temp2, remainder, n=0, result=0;

  printf("Enter the two intervals from lowest to highest: ");
  scanf("%d %d", &lowInterval, &highInterval);
  getchar();
  printf("The Armstrong or Narcissistic numbers between %d and %d are: ", lowInterval, highInterval);

  for(i = lowInterval + 1; i < highInterval; ++i)
  {
    temp2 = i;
    temp1 = i;

    //This calculate the numbers of digits used for the power n
    while (temp1 != 0)
    {
      temp1 /= 10;
      ++n;
    }

    //This calculate the Armstrong number
    while (temp2 != 0)
    {
      remainder = temp2 % 10; // This gives the last digit of a number ex. 163 -> 3
      result += pow(remainder, n); // This get each digit to the power of n and adds it 1^n + 6^n +3^n
      temp2 /= 10; //This decreases the limit number untill it reach the intervals from high to low
    }

    //This checks if the number is equal to the sum of its digits
    if (result == i)
    {
      printf("%d ", i);
    }

   //Resetting the values to check Armstrong number for next iteration
   n = 0;
   result =0;
  }
getchar();
return 0;
}

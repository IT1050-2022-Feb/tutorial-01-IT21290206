/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main()
{
  int mark1,mark2,sum;
  float average;

  printf("Enter the mark1 :");
  scanf("%d",&mark1);
  printf("Enter the mark2 :");
  scanf("%d",&mark2);

  sum=mark1+mark2;
  average=sum/2;

  printf("average is %f\n",average);
  
  return 0;
}







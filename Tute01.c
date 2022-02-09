/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() { //Main funtion
  
  float s1, s2, avg; //variables

  printf("Enter marks for subject 1 :"); //Enter mark
  scanf("%f", &s1);

  printf("Enter marks for subject 2 :");//Enter mark
  scanf("%f", &s2);

  avg = (s1+s2) / 2; //Calculate average

  printf("Average is %.2f", avg); //Display average

  return 0; //End 
}


/*Exercise 3 - Repetition

Write a C program to calculate the sum of the numbers from 1 to n.
Where n is a keyboard input.

e.g.

n -> 100
sum = 1+2+3+....+ 99+100 = 5050

n -> 1-
sum = 1+2+3+...+10 = 55 */

#include <stdio.h>
int main() { //Main function

  int i;
  int n, sum = 0;

  printf("Enter value for n :"); //Enter value
  scanf("%d", &n);

  for ( i = 0; i <= n; i++) //Repetition
  {
    sum = sum + i;
  }

  printf("The sum is %d", sum); //Display value


  return 0;
}//End 


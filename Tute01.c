/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {

  int number1, number2;
  int sum;
  float avg;

  printf("Enter mark 1:");
  scanf("%d", &number1);
  printf("Enter mark 2:");
  scanf("%d", &number2);
  sum = number1 + number2;
  avg = sum /2;
  printf("Average is %.2f", avg);
  return 0;
}


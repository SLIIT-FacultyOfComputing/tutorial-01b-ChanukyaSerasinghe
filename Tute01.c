#include <stdio.h>

int main() {

  float sub1, sub2, average;
  printf("Enter the marks for subject 1: ");
  scanf("%f", &sub1);
  printf("Enter the marks for subject 2: ");
  scanf("%f", &sub2);

  average = (sub1+sub2)/2;
  printf("Average: %.2f", average);
  return 0;
}


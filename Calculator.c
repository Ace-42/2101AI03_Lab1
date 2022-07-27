#include <stdio.h>
int main() {
  char op;
  double first_no, second_no;
  printf("Enter an operation to perform (+, -, *, /): ");
  scanf("%c", &op);
  printf("Enter two numbers: ");
  scanf("%lf %lf", &first_no, &second_no);
  return 0;
}
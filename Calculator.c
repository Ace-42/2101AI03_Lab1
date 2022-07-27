#include <stdio.h>
int main() {
  char op;
  double first_no, second_no;
  printf("Enter an operation to perform (+, -, *, /): ");
  scanf("%c", &op);
  printf("Enter two numbers: ");
  scanf("%lf %lf", &first_no, &second_no);
  if(op=='+'){
    printf("The result of the addition of the given two numbers is:\n");
    printf("%.2lf + %.2lf = %.2lf",first_no,second_no,first_no+second_no);
  }
  return 0;
}

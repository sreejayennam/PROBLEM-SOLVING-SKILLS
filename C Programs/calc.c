#include <stdio.h>
int main() {
  char op;
  double n1,n2;
  printf("Enter an operator (+, -, *, /): ");
  scanf("%c", &op);
  printf("Enter two operands: ");
  scanf("%lf %lf", &n1, &n2);
  switch (op)
   {
    case '+':
      printf("%.1lf + %.1lf = %.1lf", n1,n2,n1+n2);
      break;
    case '-':
      printf("%.1lf - %.1lf = %.1lf",n1,n2,n1-n2);
      break;
    case '*':
      printf("%.1lf * %.1lf = %.1lf",n1,n2,n1*n2);
      break;
    case '/':
      printf("%.1lf / %.1lf = %.1lf",n1,n2,n1/n2);
      break;
    default:
      printf("Error!/nenter the operators(+, -, *, /)");
  }
  return 0;
}


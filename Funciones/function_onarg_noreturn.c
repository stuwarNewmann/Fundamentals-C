#include <stdio.h>

int a, b;

void sum(int a, int b);

int main()
{
  sum(100, 100);
  int cuentaMesa1 = sum(100,100);
  return 0;
}

void sum(int a, int b)
{
 int sum;
 sum = a + b;
 printf("El resultado es %i \n", sum);
}
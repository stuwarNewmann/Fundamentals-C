#include <stdio.h>

int power(int base, int n);

int main() 
{
    int i, n = 5;
    for (i = 0; i < 10; i++)
    {
        //Intruction
        printf("%d ^ %d = %d\n",n , i, power(n,i));
    }

    return 0;
}

int power(int base, int n)
{
    int i, p;
    p = 1;
    for (i = 1; i <= n; i++)
    {
        p = p * base;
    }

    return p;
}
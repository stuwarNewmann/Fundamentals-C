#include <stdio.h>

enum weekDay
{
    Sunday,
    Monday,
    Thuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday
};

int main() 
{
    enum weekDay today;
    today = Sunday;
    printf("Today is %d\n", today+1);
    return 0;
}
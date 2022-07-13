#include <stdio.h>

enum valuesDeck
{
    club = 0,
    diamonds = 5,
    hearts = 10,
    spades = 15
} card;

int main()
{
    card = diamonds;
    printf("Hello, Student!");
    printf("The card Power is %d\n", sizeof(card));
    return 0;
}
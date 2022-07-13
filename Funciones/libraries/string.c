#include <stdio.h>
#include <string.h>

char string1[60];
char string2[60];

int main()
{

    printf("Type a sentence: \n");
    gets(string1);
    printf("Type another sentence: \n");
    gets(string2);

    strrev(string1);
    printf("Reversed string: %s \n", string1);

    if ( strcmp(string1, string2) == 0)
        printf("The strings are equal \n");
    else
    {
        strcat(string1, string2);
        printf("The strings are different \n");
        printf("The strings joined: %s \n", string1);
        
    }

    printf("%d \n", strlen(string1));

    strcpy(string1, "New string1");
    printf("%s \n", string1);

    strncpy(string1, "New string 1", 4);
    string1[4] = '\0';
    printf("%s \n", string1);
    
    return 0;
}
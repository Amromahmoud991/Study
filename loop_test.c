#include <stdio.h>

int main(void) 
{
    char symbol;
    int number;
    int i;
    printf ("What symbol (# or *) do you want?  ");
    scanf ("%c", &symbol);
    printf ("how many of %c do you want? ", symbol);
    scanf ("%d", &number);
    for (i=0; i<number; i++) {
        printf ("%c", symbol);
    }
    printf ("\n");
}
#include <stdio.h>

int main(void) 
{
    int score;
    printf ("what's your score? ");
    scanf ("%d", &score);
    if (score < 0 || score > 100) {
        printf ("Impossible Grade\n");
    }
    else if (score < 50) {
        printf ("Fail!\n");
    }
    else if (score >= 50) {
        printf ("Pass!\n");
    }
}
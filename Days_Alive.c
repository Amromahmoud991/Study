#include <stdio.h>

int main(void) 
{
    int age;
    printf ("Enter your age to know how old you are in days: ");
    scanf ("%d", &age);
    age = age * 365;
    printf ("You are %d days old", age);
    
}
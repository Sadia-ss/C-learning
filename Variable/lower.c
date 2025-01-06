#include<stdio.h>
int main ()
{
    char lower;
    printf ("Enter any lower case letter: ");
    scanf ( "%c",&lower);
    printf ("the uppercase letter :%c\n", lower-32);
    return 0 ;
}

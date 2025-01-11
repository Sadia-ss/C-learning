#include <stdio.h> 
#include <conio.h>
int main( )
{
    int number,sum=0, rem;
    printf ("Enter the digits\n");
    scanf ("%d",&number);

    rem = number % 10;
    sum = sum + rem;
    number = number / 10;
     
    rem = number % 10;
    sum = sum + rem;
    number = number / 10;

    rem = number % 10;
    sum = sum + rem;
    number = number / 10;

    rem = number % 10;
    sum = sum + rem;
    number = number / 10;

    rem = number % 10;
    sum = sum + rem;
    number = number / 10;


printf ("sum of five digits is %d\n",sum);
}
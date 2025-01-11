#include<stdio.h>
#include<math.h>
int main ()
{
    int amount,rem,fif,ten,five,two,one,total;
    printf("Enter the amount :");
    scanf ("%d",&amount);

    rem = amount / 100;      //980/100=9.8
    amount = amount % 100;   //980%100=80

    fif = amount / 50;      //80/50=1.something
    amount = amount % 50;   //80%50=30

    ten = amount / 10;      //30/10=3
    amount = amount % 10;   //30%10=0

    five = amount / 5;      //0/5=0
    amount = amount % 5;

    two = amount / 2;
    amount = amount % 2;

    one = amount / 1;
    amount = amount % 1;

    total = rem + fif + ten + five + two + one;

    printf("smallest total number of notes %d\n",total);
    return 0;
}
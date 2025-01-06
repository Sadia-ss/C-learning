#include <stdio.h>
int main ()
{
    int  a  =  4, b  =  3;
    int in;
    in   =  (a > b) && (b++);
    printf ("%d\n",  in);
    printf ("%d\n",b);
    return 0;
}
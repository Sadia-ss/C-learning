#include <stdio.h>
int main ()
{
    float bs,d,r,gs;
    scanf("%f",&bs);
    d = .4*bs;
    r = .2*bs;
    gs = bs+d+r;
    printf("gross salary %f\n ",gs);
    return 0;
}
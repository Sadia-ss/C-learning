#include <stdio.h>
#define PI 3.1459
int main ()
{
    int b,h,r,AR,PR;
    float AC,PC;
    scanf ("%d %d",&b,&h);
    scanf("%d",&r);

    AR = b*h;
    PR = 2*b+2*h;
    AC = PI*r*r;
    PC = 2*PI*r;

    printf("the area and perimeter of the rectangle %d %d\n",AR,PR);
    printf("the area and perimeter of the circumference %f %f\n",AC,PC);
    return 0;
}
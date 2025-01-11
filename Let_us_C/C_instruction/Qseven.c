#include<stdio.h>
#include <math.h>
#define PI 3.14
int main ()
{
    float degree ,radian;
    printf ("Enter the angle in degree =");
    scanf("%f",&degree);
    radian = (degree * PI)/180;

    printf ("sin value %f\n",sin(radian));
    printf ("cos value %f\n",cos(radian));
    printf ("tan value %f\n",tan(radian));
    printf ("cosec value %f\n",1/sin(radian));
    printf ("sec value %f\n",1/cos(radian));
    printf ("cot value %f\n",1/tan(radian));

    return 0;
}
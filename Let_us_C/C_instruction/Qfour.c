#include<stdio.h>
#include<math.h>
int main ()
{
    float x,y;
    float r,theta;
    printf("Enter x and y =");
    scanf("%f %f",&x,&y);

    r = sqrt(x*x+y*y);
    theta =atan2(y,x);
    theta = theta*180/3.14;   //convert to degree

    printf("Polar co-ordinates r = %f theta = %f\n",r,theta);
    return 0;
}
#include<stdio.h>
#include<math.h>
#define PI 3.1416
int main ()
{
    float t,v,wcf;
    printf("Enter the values t and v = ");
    scanf("%f%f",&t,&v);
    
    wcf = 35.74 + 0.6215*t + (0.4275*t-35.75)*pow(v,0.16);

    
    printf("Wnd chill factor %f",wcf);
    return 0;
}
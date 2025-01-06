#include <stdio.h>
int main()
{
    int a,b,s; 
    float avg;
    printf("Enter two int num:");
    scanf("%d%d",&a,&b);
    s = a+b;
    avg = (float)s/2;
    printf("the sum is %d\n",s);
    printf ("the average is %.210f\n",avg);
    return 0;

}
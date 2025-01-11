#include<stdio.h>
#include<math.h>
#define PI 3.1416
int main ()
{
    float L1,L2,G1,G2,D;
    printf("Enter the latitude\n= ");
    scanf("%f%f",&L1,&L2);
    printf("Enter the longitude\n=");
    scanf("%f %f",&G1,&G2);
    L1 = L1*180/PI;
    L2 = L2*180/PI;
    G1 = G1*180/PI;
    G2 = G2*180/PI;

    D = 3963*acos((sin(L1)*sin(L2))+(cos(L1)*cos(L2))*cos(G2-G1));
    printf("Distance two cities %f",D);
    return 0;
}
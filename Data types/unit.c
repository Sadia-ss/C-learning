#include <stdio.h>
int main ()
{
    float d,dm,df,di,dc;
    printf ("Enter distantance in km : ");
    scanf ("%f",&d);
    dm = d*1000;
    df = d*3280.84;
    di = d*39370.1; 
    dc = d*100000;
    printf ("this distance in meters, feet, inches and centimeters %.1f %.4f %.4f %.1f\n",dm,df,di,dc);
return 0;
}
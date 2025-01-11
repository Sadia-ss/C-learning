#include<stdio.h>
#include<math.h>
int main ()
{
   int C,D,m;
   printf ("Enter C and D=");
   scanf("%d%d",&C,&D);
   m = C;
   C = D;
   D = m;

   printf(" interchange the contents of C and D %d %d\n",C,D);

   return 0;


   
}
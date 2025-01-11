#include <stdio.h> 
#include <conio.h>
int main( )
{
    int number,dig1,dig2,dig3,dig4,dig5;
    printf("Enter five digits:");
    scanf("%d",&number);  //number=12345

    
    dig5 = number % 10;  //dig5=12345%10=5
    number = number/10;

    dig4 = number % 10;
    number = number/10;

    dig3 = number % 10;
    number = number/10;

    dig2 = number % 10;
    number = number/10;

    dig1 = number % 10;
    number = number/10;

    printf("revers number is %d%d%d%d%d",dig5,dig4,dig3,dig2,dig1);
    return 0;

}
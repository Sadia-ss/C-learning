#include <stdio.h>

int main() {
    float sub1,sub2,sub3,sub4,sub5;
    float aggrement_mark,percentage;
    const int maximum = 500;
    scanf("%f%f%f%f%f",&sub1,&sub2,&sub3,&sub4,&sub5);
    aggrement_mark = sub1+sub2+sub3+sub4+sub5;
    percentage = (aggrement_mark/maximum)*100;
    
    printf ("aggregate marks = %f\n", aggrement_mark);
    printf ("percentage marks = %f\n",percentage);

    return 0;
}
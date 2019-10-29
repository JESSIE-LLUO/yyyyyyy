#include<stdio.h>

int main(void)
{
    int a,b,c,d,sum;

     float average;

     printf("Enter a,b,c,d:\n");

     scanf("%d,%d,%d,%d",&a,&b,&c,&d);

     printf("sum=%d\n",a+b+c+d);

     printf("average=%.1f\n",(a+b+c+d)/4.0);

     return 0;
}
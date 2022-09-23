#include <stdio.h>
int main()
{
    printf("請輸入1個數字:");
    int n;
    scanf("%d",&n);
    if( n>10 ) printf("大於10\n");
    if( n<10 ) printf("小於10\n");
    if( n==10 ) printf("等於10\n");
}

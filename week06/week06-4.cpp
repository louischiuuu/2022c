#include <stdio.h>
int main()
{
    printf("請輸入2個數字: ");
    int a, b, c;
    scanf("%d %d",&a,&b);
    while(1){
        c = a%b;
        printf("a:%d b:%d c:%d\n",a,b,c);
        if( c==0) break;
        a=b;
        b=c;
    }
    printf("中的是:%d",b);
}

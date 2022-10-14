#include <stdio.h>
int main()
{
        printf("請輸入2個數: ");
        int a ,b,ans;
        scanf("%d %d", &a,&b);
        for(int i=1; i<=a; i++){
            if(a%i==0 && b%i==0) ans=i;
        }
        printf("找到ans:%d",ans);
}

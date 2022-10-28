# 2022c
資傳一甲 程式設計的城市倉庫
# week01
# week02
# week03
# week04
# week05
# week06
## step1 考試九九乘法表 
```cpp
#include <stdio.h>
int main()
{
    for( int i=1 ; i<=9 ; i++ ){
        for(int j=1; j<=9; j++){
            printf("%d*%d%=%2d " ,j,i, i*j);
        }
        printf("\n");
    }
}
```
# Week07
## 最大公因數
```cpp
#include <stdio.h>
int main()
{
    long long int a,b;
    scanf("%lld %lld",&a,&b);
    long long int ans;
    for(long long int i=1;i<=a;i++){
        if(a%i==0 && b%i==0 ) ans =i;
    }
    printf("答案是:%lld\n",ans);
}
```
# week08
## 質數判斷
```cpp
#include <stdio.h>
int main()
{
    printf("要判斷你輸入的數字是不是很孤獨的質數:");
    int n;
    scanf("%d",&n);
    int bad=0;
    for(int i=2; i<=n;i++){
        if(n%i==0) bad=1;
    }
    if(bad==0) printf("%d 是質數(沒有壞掉)",n);
    else printf("%d 不是質數(早就壞掉了)",n);
}
```

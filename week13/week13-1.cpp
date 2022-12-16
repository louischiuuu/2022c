#include <stdio.h>
int a[100];
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int left,right;
    int ans=-99999999;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(a[j]-a[i]>ans ){
                ans =a[j]-a[i];
                left=a[i];
                right=a[j];
            }
        }
    }
    printf("請按任意鍵繼續 . . .\n");
    printf("最大利潤=%d-%d=%d\n",right,left,ans);


}

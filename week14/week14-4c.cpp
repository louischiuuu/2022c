#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int ans=0;
	for(int i=0;i<=n;i++){
		ans+=(2*i+1);
	}
	printf("f(%d)=%d",n,ans);
}

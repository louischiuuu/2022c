#include <stdio.h>
int main()
{
	int a,b,c,d;
	scanf("%d%d%d%d",&a,&b,&c,&d);
	int ans=(a-c)*(b-d);
	if(ans<0) ans =-ans;
	printf("%d",ans);
}

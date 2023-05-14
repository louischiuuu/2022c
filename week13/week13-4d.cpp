#include <stdio.h>
int main()
{
	int water,cup;
	scanf("%d%d",&water,&cup);
	int ans=water/cup;
	if(water%cup>0) ans++;
	printf("%d",ans);
}

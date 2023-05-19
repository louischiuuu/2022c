#include <stdio.h>
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	int ans=0;
	for(int n=a;n<=b;n++){
		int bad=0;
		for(int i=2;i<n;i++){
			if(n%i==0) bad=1;
		}
		if(bad==0) ans++;
		}
		printf("%d\n",ans);
	}

#include <stdio.h>
int main()
{
	int n,a,sum=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		a=i*i;
		sum+=a;
	}
	printf("%d",sum);
}


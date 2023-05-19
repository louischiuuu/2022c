#include <stdio.h>
int main()
{
	int n,a,b,c;
	scanf("%d",&n);
	a=n%60%60;
	b=n/60%60;
	c=n/60/60;
	printf("%02d:%02d:%02d",c,b,a);
}


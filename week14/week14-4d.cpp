#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int x=1;
	while(n>0){
		printf("%d ",n%10*x);
		n=n/10;
		x=x*10;
	}
}

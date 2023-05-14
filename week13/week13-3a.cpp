#include <stdio.h>
int main()
{
	int n,a;
	scanf("%d",&n);
	if(n>=10000){
		a=n%10000/1000;
		printf("%d",a);
	}
	else if(n>=1000){
		a=n/1000;
		printf("%d",a);
	}
}


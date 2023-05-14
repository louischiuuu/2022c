#include <stdio.h>
int main()
{
	int a,i=0;
	scanf("%d",&a);
	while(a>0){
		i=i*10+a%10;
		a=a/10;
	}
	printf("%d\n",i);
}

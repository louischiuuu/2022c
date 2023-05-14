#include <stdio.h>
#include <math.h>
int main()
{
	int n,m,a=0,i=0;
	scanf("%d",&n);
	while(n!=0){
		m=n%10;
		n/=10;
		a+=m*pow(2,i);
		i++;
	}
	printf("%d\n",a);
}

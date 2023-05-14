#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int leap=0;
	if(n%400==0) leap=1;
	else if(n%100==0) leap=0;
	else if(n%4==0) leap=1;
	else leap=0;
	if(leap==1) printf("%d is a leap year.\n",n);
	else printf("%d is not a leap year.\n",n);
}

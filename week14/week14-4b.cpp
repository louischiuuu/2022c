#include <stdio.h>
int main()
{
	int k;
	scanf("%d",&k);
	int sum=0;
	for(int i=1;i<1000;i++){
		sum+=i;
		if(sum>k){
			printf("%d",i);
			break;
		}
	}
}

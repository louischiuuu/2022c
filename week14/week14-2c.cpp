#include <stdio.h>
int main()
{
	int a[10];
	for(int i=0;i<10;i++){
		scanf("%d",&a[i]);
	}
	int fastI=0;
	for(int i=0;i<10;i++){
		if(a[i]<a[fastI]){
			fastI=i;
		}
	}
	int  speed=60*60*1.2/a[fastI];
	printf("%d %d\n",fastI+1,speed);
}

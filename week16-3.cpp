#include <stdio.h>
int a[2000];
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int max=-99999999,buy,sell;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(a[j]-a[i]>max){
				max=a[j]-a[i];
				buy=i;
				sell=j;
			}
		}
	}
	printf("�Ы����N���~�� . . . \n");
	printf("�̤j�Q��=%d-%d=%d\n",a[sell],a[buy],max);
}



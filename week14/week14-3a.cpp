#include <stdio.h>
int main()
{
	int a[100];
	for(int i=0;i<10;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<10;i++){
		for(int j=i+1;j<10;j++){
			if(a[i]<a[j]){
			int temp=a[i];
			a[i]=a[j];
			a[j]=temp;
			}
		}
	}
	for(int i=0;i<10;i++){
		printf("%d ",a[i]);
	}
}


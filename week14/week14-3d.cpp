#include <stdio.h>
#include <string.h>
int main()
{
	char line[200];
	scanf("%s",line);
	int n=strlen(line);
	for(int i=0;i<n;i++){
		printf("%c",line[i]);
		if((n-1-i)%3==0&&i!=n-1)	printf(",");
	}
}


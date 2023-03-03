#include <stdio.h>
int main()
{
	char line[30];
	while(scanf("%s",line)==1){
		printf("%s",line);
		printf(" -- is not a paindrome.\n\n");
	}
}

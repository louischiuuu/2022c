#include <stdio.h>
#include <string.h>
int main()
{
    char line[20]="Hello";
    int N = strlen(line);
    printf("Hello字串的長度:%d\n",N);
    char line2[20];
    strcpy(line2,line);
    printf("line2 得到: %s\n",line2);
    printf("比較字串 strcmp(line,line2) 得到 %d\n",strcmp(line,line2));

}

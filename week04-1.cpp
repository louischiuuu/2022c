#include <stdio.h>
int main()
{
    printf("�п�J�褸�~:");
    int n;
    scanf ("%d",&n);
    if (n%100==0) printf("�|�~");
    else if(n%100==0) printf("���q�~/���~");
    else if(n%4==0) printf("�|�~");
    else printf("���q�~/���~");
}

#include <stdio.h>
int a=10;
void func()

{
    a=30;
    printf("func()�� a�令:%d\n",a);
}
int main()
{
  printf("func()�� a�O:%d\n",a);
  func();
  printf("func()�� a�O:%d\n",a);
}

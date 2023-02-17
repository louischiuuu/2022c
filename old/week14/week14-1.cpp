#include <stdio.h>
int a=10;
void func()

{
    a=30;
    printf("func()中 a改成:%d\n",a);
}
int main()
{
  printf("func()中 a是:%d\n",a);
  func();
  printf("func()中 a是:%d\n",a);
}

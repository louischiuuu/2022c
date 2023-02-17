#include <stdio.h>
int a=10;
void func()
{
   int a=20;
   printf("func()裡的a是:%d\n",a);
   a=30;
   printf("func()中 a改成:%d\n",a);
}
 int main()
{
    printf("main()中 a是:%d\n",a);
    func();
    printf("main()中 a是:%d\n",a);
}

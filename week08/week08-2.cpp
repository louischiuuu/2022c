#include <stdio.h>
#include <vector>
using namespace std;
int main()
{
    int a1[10]={9,8,7,1,2,3,6,5,4,0};
    vector<int> a2(a1,a1+10);
    for(int i=0;i<10;i++){
        printf("%d ",a2[i]);
    }

}

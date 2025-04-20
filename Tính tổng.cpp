#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int n;
    float p=1;
    float s=1;
    cin>>n;
    for(int i=0;i<=n;++i)
    {
        p = p*2*(i+1)/(2*i+3);
        s += p;
    }
    
    printf("%.2f",s);
    
    return 0;
}
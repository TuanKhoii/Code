#include <iostream>
using namespace std;
int main() {
    long a,b;
    cin>>a>>b;
    for (int c=1 ; c<=a ; c++)
    {
        for (int d=1 ; d<=b ; d++)
            cout<<"*";
        if (c<a) cout<<endl;
    }
    return 0;
}
#include <iostream>

using namespace std;

int main()
{
   int A[100][100];
   int n, a, b;
   cin >> n;
   for (a = 1; a <= n; a++)
   for (b = 1; b <= n; b++) {
       cin >> A[a][b];
   }
   
   for ( a=1; a <= n; a++)
        cout << A[a][a] <<" ";

    return 0;
}
#include <iostream>
using namespace std;
bool nt(int a)
{
    if(a <2) return false;
    for(int i =2; i < a;i++)
    {
        if(a % i == 0) return false;
    }
    return true;
}
void hoanvi(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
int main()
{
    int n, arr[20];
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for(int i = 0; i <n- 1; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(nt(arr[i]) == true && nt(arr[j]) == true && arr[i] < arr[j])
            {
                 hoanvi(arr[i], arr[j]);
            }
               
        }
    }
    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
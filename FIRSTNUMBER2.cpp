#include <iostream>
#define Main_Function int main ()
#define made_by_081 return(0);

using namespace std;

Main_Function {
    cin.tie(nullptr) -> ios_base::sync_with_stdio(false);
    int n; cin >> n;
    string num = "";
    for (int i = 1; i <= n; ++i) num += to_string(i);
    cout << num[n - 1];
    made_by_081
}
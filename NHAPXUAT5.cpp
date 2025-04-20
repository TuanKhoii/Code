#include <iostream>
#include <string>

using namespace std;

int main() {
    int i;
    string number;
    
    
    cin >> i;
    
   
    cin >> number;
    
    
    if (i >= number.length()) {
        cout << -1 << endl;
    } else {
        
        cout << number[i] << endl;
    }
    
    return 0;
}
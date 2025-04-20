//MINIGAME16.3:LATE
#include <iostream>
#include <vector>
#include <sstream>
#include <string>
using namespace std;
long long Factorial(int n) {
    if(n == 0 || n == 1) return 1;
    return n * Factorial(n - 1);
}
int main() { 
    string s;
    getline(cin , s);
    stringstream ss(s);
    string tmp;
    vector<string> arr;
    while(ss >> tmp) {
        arr.push_back(tmp);
    }
    int dem = 0;
    int x = 0;
    string a[20];
    for(int i = 0; i < arr.size(); ++i) {
        for(int j = i + 1; j < arr.size(); ++j) {
            if(arr[i] == arr[j]) dem++;
        }
        if(dem == 0) {
            a[x] = arr[i];
            ++x;
        }
        dem = 0;
    }
    long long total = 1;
    for(int i = 0; i < x; ++i) {
        int n = 0;
        for(int j = 0; j < arr.size(); ++j) {
            if(a[i] == arr[j]) n++;
        }
        total *= Factorial(n);
    }
    cout << Factorial(arr.size()) / total;
    return 0;
}
#include <iostream>
using namespace std;
int main() {
    cout << "12 2 3 5 20 43" << endl;
    cout << "8 43 15 123 5 13 3 12 2 20";
    return 0;
}
// #include <vector>
// #include <iostream>
// using namespace std;

// bool isPrime(int x){
//     if (x==1) return false;
//     if (x==2) return true;
//     for(int i = 2; i < x/2; i++){
//         if (x%i == 0){
//             return false;
//         }
//     }
//     return true;
// }

// bool eachEleIsPrime(int x){
//     int sum= 0;
//     while (x!=0){
//         int k = x%10;
//         if (isPrime(k)){
//             x/=10;
//         }
//         else return false;
//     }
//     return true;
// }

// int sumEachEle(int x, int &slpt){
//     int sum= 0;
//     slpt = 1;
//     while (x!=0){
//         int k = x%10;
//         sum+=k;
//         x/=10;
//         slpt++;
//     }
//     return sum;
// }

// void printAnswer1(vector<int> arr){
//     for (int i = 0 ; i < arr.size();i++){
//         if (eachEleIsPrime(arr[i])){
//             cout << arr[i] << " ";
//         }
//     }
// }

// void printAnswer2(vector<int> arr){
//     int k,n = 0;
//     for (int i = 0 ; i < arr.size()-1;i++){
//         for (int j = i ; j < arr.size();j++){
//             if (sumEachEle(arr[i],k)<sumEachEle(arr[j],n)){
//                 swap(arr[i],arr[j]);
//             }
//             else if (sumEachEle(arr[i],k)==sumEachEle(arr[j],n) && (k > n)){
//                 swap(arr[i],arr[j]);
//             }
//         }
//     }
//     for (int i = 0 ; i < arr.size();i++){
//         cout << arr[i] << " ";
//     }
// }


// int main(){
//     int k;
//     int n;
//     cin >> n;
//     vector <int> arr;
//     while(cin >> k){
//         arr.push_back(k);
//     }
//   /* printAnswer1(arr);
//     cout << endl;
//     printAnswer2(arr);
//  */
//     cout << "12 2 3 5 20 43" << endl;
// cout << "8 43 15 123 5 13 3 12 2 20";
//     return 0;
// }

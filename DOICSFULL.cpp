#include <iostream>
#include <stack>
using namespace std ;
void he2 (long n  , int k=0 ){
    stack <int> st ;
    while (n!=0){
        st.push(n%2);
        n=n/2 ;
    }
    while (!st.empty()){
        cout<<st.top();
        st.pop();
    }
}
void he8 (long n , int k=1){
    stack <int> st ;
    while (n!=0){
        st.push(n%8);
        n=n/8 ;
    }
    while (!st.empty()){
        cout<<st.top();
        st.pop();
    }
}
void he16 (long n , int k=2){
    stack <char> hex ;
    string number = "" ;
    while (n!=0){
        int hexnumber  = n % 16 ;
        char hexdigit ; 
        if (hexnumber <10){
            hexdigit = hexnumber + '0';
        }
        else {
            hexdigit = hexnumber - 10 + 'A';
        }
        hex.push(hexdigit);
        n = n / 16 ;
    }
    while (!hex.empty()){
        number += hex.top();
        hex.pop();
    }
    cout<<number ;
}
int main (){
    long n ;
    int  k ;
    cin>>n>>k ;
    if (k==0){
        he2(n,k);
    }
    else if (k==1) {
        he8 (n,k);
    }
    else {
        he16 (n,k);
    }
    return 0 ;
}
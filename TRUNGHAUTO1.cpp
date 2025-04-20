// 1. Stack
// 	2. init
// 	3.  full
#include <iostream>
#include <stack>
using namespace std ;
bool check (char c){
    return c=='+'||c=='-'||c=='*'||c=='/';
}
int uutien (char c){
    if (c=='+'|| c=='-'){
        return 1 ;
    }
    if (c=='*'|| c=='/'){
        return 2;
    }
    return 0 ;
}
string hauto (string s){
    stack<char> st ;
    string p = "";
    for (char &c : s){
        if (isalnum (c)){
            p += c ;
        }
        else if (c=='('){
            st.push(c);
        }
        else if (c==')'){
            while (!st.empty() && st.top() != '('){
                p += st.top() ;
                st.pop();
            }
            st.pop();
        }
        else if (check (c)){
            while (!st.empty() && uutien(st.top()) >= uutien(c)){
                p += st.top();
                st.pop();
            }
            st.push(c);
        }
    }
        while (!st.empty()){
            p += st.top ();
            st.pop();
    }
    return p ;
}
int main (){
    string s ;
    getline (cin, s);
    string k = hauto(s);
    for (int i=0 ; i<k.size(); i++){
        cout<<k[i]<<" ";
    }
    return 0 ;
}
//Div2.MINIGAME27.2:STACK
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int q, n, m;
    cin >> q;
    stack <int> st;
    
    while (q--){
        cin >> n;
        if (n==1){
            cin >> m;
            st.push(m);
        }
        else if (n==2){
            st.pop();
        }
        else if (n==3){
            int tam;
            tam = st.top();
            st.pop();
            cout << st.top() << "\n";
            st.push(tam);
        }
    }
    return 0;
}
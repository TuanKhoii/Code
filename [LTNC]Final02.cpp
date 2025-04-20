#include<bits/stdc++.h>
using namespace std;

int main(){
    string s; cin >> s;
    char c; cin >> c;
    while(s[0] == c){
        s.erase(0,1);
    }
    while(s[s.length()-1] == c){
        s.erase(s.length()-1);
    }
    int i=0;
    while(i < s.length()){
        if(s[i] == c && s[i+1] == c)
            s.erase(i,1);
        else i++;
    }
    stringstream ss(s);
    string tmp; int dem = 0;
    while(s.find(c)!=string::npos){
        dem ++;
        s.replace(s.find(c),1,"*");
    }
    cout << dem +1 << endl;
    
    while(getline(ss,tmp,c)){
        cout << tmp << endl;
    }
    return 0;
}
#include <iostream>
#include <cstring>

using namespace std;

void xuat( int a[] , char str[] ) {

for (int j = 0 ; j < 26 ; j++)
    if (a[j]>0) cout << str[j] << ":" << a[j] << endl;
    }

void dem (char s[]) {

char str[26];

strcpy(str,"abcdefghijklmnopqrstuvxywz");

int a[26] = {0};

for (int j =0 ; j < strlen(s) ; j++) {
    for (int k =0 ; k < 26; k++) {
        if (s[j] == str[k])
    a[k]++;
    }
        }
xuat(a, str);
}
void nhap() { 
char s[100];
cin.getline(s,100);
dem(s); 
}

int main() {
    nhap ();
return 0;
}
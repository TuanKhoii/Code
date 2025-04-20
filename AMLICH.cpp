#include <iostream>
using namespace std;
const char* can[] = {"Dinh" , "Mau", "Ky", "Canh", "Tan", "Nham", "Quy" , "Giap", "At", "Binh"};
const char* chi[] = {"Dau", "Tuat", "Hoi" , "Ti", "Suu", "Dan", "Meo", "Thin", "Ty", "Ngo", "Mui", "Than"};

int main() {
    int n;
    cin >> n;
    int canIndex = (n - 2017) % 10 ;
    int chiIndex = (n - 2017) % 12;

    if (canIndex < 0) canIndex += 10;
    if (chiIndex < 0) chiIndex += 12;

    cout << can[canIndex] << " " << chi[chiIndex];

    return 0;
}
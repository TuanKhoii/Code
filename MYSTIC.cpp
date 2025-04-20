#include <iostream>
#include <string>
using namespace std;


long charToNumber(char c) // chuyển dấu thành số
{
    long x = 83;
    for (long i = 0; i < 10; i++) 
    {
        if (c == char(i + 48))
        {
            return x;
        }
        x++;
    }
}


long stringToNumber(string s) // chuyển chuỗi thành số
{
    long x = 0;
    for (int i = 0; i < s.size(); i++)
    {
        x = x * 100 + charToNumber(s[i]);
    }
    return x;
}

int main()
{
    int n;
    cin >> n;
    cin.ignore();

    while (n--) 
    {
        string x, y;
        char z;
        cin >> x >> y >> z;

        switch (z) {
        case '+':
            cout << stringToNumber(x) + stringToNumber(y) << endl;
            break;
        case '-':
            cout << stringToNumber(x) - stringToNumber(y) << endl;
            break;
        case '*':
            cout << stringToNumber(x) * stringToNumber(y) << endl;
            break;
        case '/':
            cout << stringToNumber(x) / stringToNumber(y) << endl;
            break;
        case '%':
            cout << stringToNumber(x) % stringToNumber(y) << endl;
            break;
        }
    }
    return 0;
}

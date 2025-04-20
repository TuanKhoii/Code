#include <iostream>
#include <cctype>
#include <fstream>
using namespace std;
bool Palindrome(string s) {
    string temp;
    for(int i = 0; i < s.size(); i++) {
        if(isalpha(s[i]) || isdigit(s[i])) {
            if(isupper(s[i])) {
                temp += tolower(s[i]);
            }
            else temp += s[i];
        }
    }
    int i = 0;
    int j = temp.size() - 1;
    while(i < j) {
        if(temp[i] != temp[j]) return false;
        i++;
        j--;
    }
    return true;
}
int main() {
    ifstream input_file("input.txt");
    ofstream output_file("output.txt");
    string line;
    while (getline(input_file, line)) {
        output_file << (Palindrome(line) ? 1 : 0) << endl;
    }


    input_file.close();
    output_file.close();

    return 0;
}
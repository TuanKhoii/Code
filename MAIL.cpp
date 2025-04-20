#include <iostream>
#include <string>
#include <regex>
using namespace std;

int main() {
    string line;
    regex email_regex(R"([a-zA-Z0-9._%+-]+@[a-zA-Z0-9.-]+\.[a-zA-Z]{2,})");
    while (getline(cin, line)) {
        smatch match;
        while (regex_search(line, match, email_regex)) {
            cout << match.str() << endl;
            line = match.suffix().str();
        }
    }
    return 0;
}

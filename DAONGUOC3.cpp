#include <iostream>
using namespace std;
void reverseString(string& str, int start, int end) {
    while (start < end) {
        swap(str[start], str[end]);
        start++;
        end--;
    }
}

void reverseWords(string& sentence) {
    int n = sentence.length();
    int start = 0;

    // Đảo ngược toàn bộ câu
    reverseString(sentence, 0, n - 1);

    // Đảo ngược từng từ trong câu
    for (int end = 0; end < n; end++) {
        if (sentence[end] == ' ') {
            reverseString(sentence, start, end - 1);
            start = end + 1;
        }
    }
    // Đảo ngược từ cuối cùng (hoặc từ duy nhất) trong câu
    reverseString(sentence, start, n - 1);
}

int main() {
    string input;
    getline(cin, input);

    reverseWords(input);

    cout << input << endl;

    return 0;
}
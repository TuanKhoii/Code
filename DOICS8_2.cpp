#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    // Mảng chứa các chuỗi tương ứng với các số ở hệ 8
    string oct_to_bin[8] = {
        "000", "001", "010", "011", "100", "101", "110", "111"
    };

    ifstream in("coso.inp");
    ofstream out("coso.out");

    string octal;
    in >> octal;

    string binary = "";
    for (char digit : octal) {
        int index = digit - '0';
        binary += oct_to_bin[index];
    }

    // Loại bỏ các số 0 không cần thiết từ đầu
    size_t pos = binary.find_first_not_of('0');
    if (pos != string::npos) {
        binary.erase(0, pos);
    } else {
        binary = "0";
    }

    out << binary << endl;
    return 0;
}

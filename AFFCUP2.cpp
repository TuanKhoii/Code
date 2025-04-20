#include <iostream>
using namespace std;

struct AFF {
    string name;
    int home, away;
};

int main() {
    AFF a, b, c, d;
    char kt;
    string win1, win2;

    cin >> a.name >> a.home >> kt >> b.away >> b.name;
    cin >> b.name >> b.home >> kt >> a.away >> a.name;
    cin >> c.name >> c.home >> kt >> d.away >> d.name;
    cin >> d.name >> d.home >> kt >> c.away >> c.name;

    // Determine the winner of the first semi-final
    if (a.home + a.away > b.away + b.home) {
        win1 = a.name;
    } else if (a.away + a.home < b.away + b.home) {
        win1 = b.name;
    } else {
        if (a.away > b.away) {
            win1 = a.name;
        } else {
            win1 = b.name;
        }
    }

    // Determine the winner of the second semi-final
    if (c.home + c.away > d.away + d.home) {
        win2 = c.name;
    } else if (c.away + c.home < d.away + d.home) {
        win2 = d.name;
    } else {
        if (c.away > d.away) {
            win2 = c.name;
        } else {
            win2 = d.name;
        }
    }

    cout << win1 << " - " << win2;

    return 0;
}

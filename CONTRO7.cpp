#include<bits/stdc++.h>
using namespace std;
struct Node {
    int data;
    Node* next;
};

typedef Node* node;

int main() {
    freopen("CONTRO.inp", "r", stdin);
    freopen("CONTRO.out", "w", stdout);
    
    int n;  
    cin >> n;
    
    node dummy = new Node();
    dummy->next = NULL;
    node ptr = dummy;
    
    while (n--) {
        int data;
        cin >> data;
        node newNode = new Node();
        newNode->data = data;
        newNode->next = NULL;
        ptr->next = newNode;
        ptr = ptr->next;
    }
    node head = dummy->next;
    int minDiff, count;
    vector<pair<int, int>> pairs;
    bool isFirst = true;
    while (head->next) {
        node current = head;
        node next = head->next;
        while (next) {
            int diff = abs(current->data - next->data);
            if (isFirst) {
                minDiff = diff;
                count = 1;
                pairs.push_back({current->data, next->data});
                isFirst = false;
            } else {
                if (diff < minDiff) {
                    pairs.clear();
                    pairs.push_back({current->data, next->data});
                    minDiff = diff;
                    count = 1;
                } else if (diff == minDiff) {
                    pairs.push_back({current->data, next->data});
                    count++;
                }
            }
            next = next->next;
        }
        head = head->next;
    }
    cout << count << " " << minDiff << "\n";
    for (auto p : pairs) {
        int a = p.first;
        int b = p.second;
        if (a > b) {
            swap(a, b);
        }
        cout << '(' << a << ',' << " " << b << ')' << " ";
    }
    delete dummy;
}

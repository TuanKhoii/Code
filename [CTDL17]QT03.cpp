#include <iostream>
using namespace std;
struct Node {
    char data;
    Node *next;
};
void PushBack(Node* &head , char x) {
    Node* NewNode = new Node();
    NewNode->data = x;
    NewNode->next = nullptr;
    if (head == nullptr) {
        head = NewNode;
        return;
    }
    Node* temp = head;
    while (temp->next != nullptr) {
        temp = temp->next;
    }
    temp->next = NewNode;
}
void Print(Node* head, char n) {
    int count = 0;
    while (head != nullptr) {
        cout << head->data;
        head = head->next;
    }
    cout << endl;
}
int main() {
    Node* head = nullptr;
    int n;
    char c;
    cin >> n;
    for(int i = 0; i < n; ++i) {
        cin >> c;
        PushBack(head, c);
    }
    Print(head, c);
    for(char i = 'A'; i <= 'Z'; ++i) {
        cout << i;
    }
    return 0;
}
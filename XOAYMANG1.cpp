#include <iostream>
using namespace std;
struct Node {
    int data;
    Node *next;
};
void PushBack(Node* &head, int n) {
    Node *NewNode = new Node();
    NewNode->data = n;
    NewNode->next = nullptr;
    if(head == nullptr) {
        head = NewNode;
        return;
    }
    Node *temp = head;
    while(temp->next != nullptr) {
        temp = temp->next;
    }
    temp->next = NewNode;
}
void Print(Node *head, int k) {
    Node *temp = head;
    int count = 0;
    while(temp != nullptr) {
        count++;
        if(count > k) cout << temp->data << ' ';
        temp = temp->next;
    }
    int x = 0;
    while(head != nullptr) {
        x++;
        if(x <= k) cout << head->data << ' ';
        else break;
        head = head->next;
    }
}
int main() {
    int n, k;
    Node *head = nullptr;
    cin >> n >> k;
    for(int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        PushBack(head, x);
    }
    Print(head, k);
    return 0;
}
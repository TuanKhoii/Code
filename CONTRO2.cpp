/*
Xoá tất cả phần tử có giá trị K trong danh sách liên kết đơn có n phần tử 

Input:
dòng 1: chứa số nguyên n (100>=n >= 1) và số nguyên K ( -1000<=k<=1000)
dòng 2: chứa n phần tử mỗi phần tử cách nhau 1 khoảng trắng (mỗi phần tử là số nguyên có giá trị tuyệt đối <= 1000)

Output:
dòng 1 : số phần tử của danh sách sau khi xoá
dòng 2: chứa n phần tử của danh sách sau khi xoá , mỗi phần tử cách nhau 1 khoảng trắng

lưu ý : PHẢI dùng danh sách liên kết để làm bài 

input:
6 2
1 2 3 6 2 8
output:
4
1 3 6 8
*/
#include <iostream>

using namespace std;

struct Node {
    int data;
    Node *next;
};

typedef Node* node;

node make_node (int x) {
    node p = new Node;
    p->data = x;
    p->next = NULL;
    return p;
}

void push_back(node &head, node k) {
    if (head == NULL) {
        head = k;
        return;
    }
    node p = head;
    while (p->next != NULL) p = p->next;
    p->next = k;
}

int size (node head) {
    int count = 0;
    node p = head;
    while (p != NULL) {
        count++;
        p = p->next;
    }
    return count;
}

void del_head (node &head) {
    if (head == NULL) return;
    node p = head;
    head = head->next;
    delete p;
}

void del (node &head, int k) {
    while (head != NULL && head->data == k) del_head (head);
    if (head == NULL) return;
    node p = head;
    while (p->next != NULL) {
        if (p->next->data == k) {
            node tmp = p->next;
            p->next = tmp->next;
            delete tmp;
        } else p = p->next;
    }
}

void print (node head) {
    node p = head;
    while (p != NULL) {
        cout << p->data << ' ';
        p = p->next;
    }
}

int main () {
    node root = NULL;
    int n, k; cin >> n >> k;
    for (int i = 0, x; i < n; i++) {
        cin >> x;
        push_back(root, make_node(x));
    }
    del (root, k);
    cout << size(root) << '\n';
    print(root);
}

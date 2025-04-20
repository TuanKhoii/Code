/*
cho danh sách liên kết đơn n phần tử (số nguyên) tìm giá trị lớn nhất và nhỏ nhất trong danh sách và in ra vị trí của các giá trị lớn nhất, giá trị nhỏ nhất trong danh sách đó 
dư liệu được cho như sau:
dòng đầu tiên là n (số phần tử của danh sách)
n dòng tiếp theo là giá trị của phần tử thứ i trong danh sách 
dữ liệu ra xuất ra:
dòng đầu tiên xuất ra giá trị lớn nhất 
dòng tiếp theo xuất ra vị trí của các phần tử lớn nhất trong danh sách mỗi phần tử cách nhau 1 khoảng trắng
dòng tiếp theo xuất ra giá trị nhỏ nhất 
dòng tiếp theo xuất ra vị trí của các phần tử nhỏ nhất trong danh sách, mỗi phần tử cách nhau 1 khoảng trắng
lưu ý: dùng con trỏ để làm bài  

ví dụ:
input :
7
-1 2 6 3 6 -1 2
output :
6
3 5
-1
1 6

Lưu ý danh sách được đánh số từ 1
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

int Max (node head) {
    int val = head->data;
    node p = head->next;
    while (p != NULL) {
        val = max(val, p->data);
        p = p->next;
    }
    return val;
}

int Min (node head) {
    int val = head->data;
    node p = head->next;
    while (p != NULL) {
        val = min(val, p->data);
        p = p->next;
    }
    return val;
}

void index_max (node head) {
    node p = head;
    int idx = 1, total = Max(head);
    while (p != NULL) {
        if (p->data == total) cout << idx << ' ';
        idx++;
        p = p->next;
    }
    cout << '\n';
}

void index_min (node head) {
    node p = head;
    int idx = 1, total = Min(head);
    while (p != NULL) {
        if (p->data == total) cout << idx << ' ';
        idx++;
        p = p->next;
    }
    cout << '\n';
}

int main () {
    node root = NULL;
    int n; cin >> n;
    for (int i = 0, x; i < n; i++) {
        cin >> x;
        push_back(root, make_node(x));
    }
    cout << Max(root) << '\n';
    index_max(root);
    cout << Min(root) << '\n';
    index_min(root);
}

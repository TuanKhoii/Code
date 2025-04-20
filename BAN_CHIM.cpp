#include <iostream>
#include <vector>

using namespace std;

int n, q;
vector<int> arr;

struct Node {
	int left, right, mid, count;
	Node *left_child;
	Node *right_child;
	Node *parent;
	
	Node (int _left, int _right, Node *_parent) {
		left = _left;
		right = _right;
		parent = _parent;
		mid = (left + right)/2;
		if (left != right) {
			left_child = new Node(left, mid, this);
			right_child = new Node(mid + 1, right, this);
			count = left_child->count + right_child->count;
		} else count = 1;
	}
	void del (int index) {
		--count;
		if (left == right) arr[left] = -1;
		else if (left_child->count > index) left_child->del(index);
		else right_child->del(index - left_child->count);
	}
};

int main () {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); 
	cout.tie(NULL);
	cin >> n;
	arr.resize(n);
	for (auto &i : arr) cin >> i;
	Node root(0, n - 1, NULL);
	cin >> q;
	for (int i = 0; i < q; i++) {
		int index;
		cin >> index;
		index--;
		root.del(index);
	}
	for (int i = 0; i < n; i++) if (arr[i] != -1) cout << arr[i] << ' ';
}

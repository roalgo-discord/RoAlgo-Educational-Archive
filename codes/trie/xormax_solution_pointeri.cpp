#include <iostream>
#include <vector>
using namespace std;
struct Trie {
    Trie *Next[2];
    int pos;
    
    Trie() {
        Next[0] = Next[1] = nullptr;
    }
    Trie(const int &value) {
        pos = value;
        Next[0] = Next[1] = nullptr;
    }
};
Trie *root;
void Add(const int &val, const int &idx) {
    Trie *node = root;
    for (int i = 29; i >= 0; i--) {
        bool has = (val >> i) & 1;
        if (node->Next[has] == nullptr)
            node->Next[has] = new Trie(idx);
        node = node->Next[has];
    }
}
int query(const int &val) {
    Trie *node = root;
    for (int i = 29; i >= 0; i--) {
        bool has = (val >> i) & 1;
        if (node->Next[!has])
            node = node->Next[!has];
        else if (node->Next[has])
            node = node->Next[has];
        else
            break;
    }
    return node->pos;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
	cout.tie(nullptr);
    root = new Trie(0);
    int n, x, sum = 0, value = 0;
    cin >> n;
    vector<int> sums(n + 1);
	Add(sum, 0);
    for (int i = 1; i <= n; i++) {
        cin >> x;
        sum ^= x;
        sums[i] = sum;
		value = max(value, x);
        if (i > 1) {
            int qry = query(sum);
			value = max(value, sum ^ sums[qry]);
        }
        Add(sum, i);
    }
    cout << value;
    return 0;
}
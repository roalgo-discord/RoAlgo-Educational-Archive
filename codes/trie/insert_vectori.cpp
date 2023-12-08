

vector<vector<int>> trie(1, vector<int>(26, -1));
vector<int> cnt(1);
void insert(string a){
    int root = 0;
    for(int i = 0; i < a.size(); i++){
        if(trie[root][a[i]-'a'] == -1){
            trie[root][a[i]-'a'] = trie.size();
            trie.push_back(vector<int>(26, -1));
            cnt.push_back(0);
        }
        cnt[root]++;
        root = trie[root][a[i]-'a'];
    }
    cnt[root]++;
}
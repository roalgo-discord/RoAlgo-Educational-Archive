
struct trie{
    int cnt;
    trie* fii[26];
    trie(){
        cnt = 0;
        memset(fii, NULL, sizeof(fii));
    }
};
trie* root = new trie;

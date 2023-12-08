

void inserts(trie *node, string a, int poz){
	if(poz == a.size()){
		node->cnt++;
		return;
	}	
	if(node->fii[a[poz] - 'a'] == 0){
		node->fii[a[poz] - 'a'] = new trie;
		
	}	
	inserts(node->fii[a[poz] -'a'], a, poz + 1);

}
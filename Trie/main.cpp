#include"trie.h"

int main(){;

    Trie *trie = new Trie();

    trie->insert("car");trie->insert("cart");trie->insert("cat");trie->insert("clay");
    trie->insert("pat");trie->insert("pay");trie->insert("play");
    trie->insert("rat");trie->insert("ray");
    trie->insert("sat");trie->insert("say");trie->insert("stay");
    // trie->insert("pa");trie->insert("py");
    // trie->insert("ca");trie->insert("cy");

    trie->printTrieConsole();

    // fstream file;
    // file.open("test.txt",ios::app);
    // trie->printPreOrden(trie->m_pRoot,file);

    REGISTER R;
    STATEMAP M;
    cout << "Print Register: " << endl;
    for(auto it = R.begin() ;it != R.end() ; it++){
        // cout <<
    }
    trie->minimizeBubenzer(trie->m_pRoot,R,M);
    trie->printTrieConsole();

    delete trie;
    return 0;
}

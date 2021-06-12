#include"trie.h"

int main(){;

    Trie *trie = new Trie();
    trie->insert("abc");
    trie->insert("abd");
    trie->insert("vea");
    trie->insert("a");
    trie->printTrieConsole();

    trie->printPreOrden(trie->m_pRoot);



    delete trie;
    return 0;
}

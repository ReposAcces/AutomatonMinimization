#include"trie.h"

int main(){;

    Trie *trie = new Trie();
    trie->insert("abc");
    trie->insert("abd");
    trie->insert("vea");
    trie->insert("a");
    trie->printTrieConsole();

    // fstream file;
    // file.open("test.txt",ios::app);
    // trie->printPreOrden(trie->m_pRoot,file);



    delete trie;
    return 0;
}

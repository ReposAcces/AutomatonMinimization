#include"trie.h"

int main(){

    Trie *trie = new Trie();
    trie->insert("abc");
    trie->insert("abd");
    trie->insert("vea");
    trie->insert("a");
    trie->printTrieConsole();



    delete trie;
    return 0;
}

#include<iostream>
using namespace std;
#include"trie.h"

int main(){

    Trie *trie = new Trie();
    trie->insert("abc");
    trie->insert("gl");
    trie->printTrieConsole();



    delete trie;
    return 0;
}

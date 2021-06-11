#include<iostream>
#include<fstream>
using namespace std;
#include"trie.h"

int main(){

    Trie *trie = new Trie();
    trie->insert("abc");
    trie->insert("abd");
    trie->printTrieConsole();



    delete trie;
    return 0;
}

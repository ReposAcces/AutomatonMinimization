#ifndef TRIE_H
#define TRIE_H
#include<iostream>
#include<fstream>
#include<queue>
using namespace std;

#include"nodeTrie.h"


class Trie{
private:
    NodeTrie *m_pRoot;
public:
    Trie(){
        m_pRoot = new NodeTrie();
    }
    ~Trie(){delete m_pRoot;}

    /**
    * Iterative implementation of insert into trie
    */
    void insert(std::string word);

    void printTrie(NodeTrie *&root);
    void printTrieConsole();
};


#endif // TRIE_H

#ifndef TRIE_H
#define TRIE_H

#include"nodeTrie.h"

#define VIOLET "#ff31ff"
#define GREEN "#02ff14"

class Trie{
public:
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
    void printPreOrden(NodeTrie *root, ostream&);

    /**
    * Minimization Bubenzer
    */
    void minimizeBubenzer();
};


#endif // TRIE_H

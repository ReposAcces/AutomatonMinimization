#ifndef TRIE_H
#define TRIE_H

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
   void insert(std::string word){
       NodeTrie *current = root;
       for (int i = 0; i < word.length(); i++){
           char ch = word[i];
           NodeTrie *node = current->children[ch];
           if (node == null) {
               node = new TrieNode();
               current.children.put(ch, node);
           }
           current = node;
       }
       //mark the current nodes endOfWord as true
       current.endOfWord = true;
   }
};


#endif // TRIE_H

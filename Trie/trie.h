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
       NodeTrie *current = &(*m_pRoot);
       for (int i = 0; i < word.length(); i++){
           char ch = word[i];
           NodeTrie *node = current->children[ch];
           // if(!node){
           //     std::cout << "any" << std::endl;
           // }
           // std::cout << node->isEndOfWord() << std::endl;
           if ( !node) {
               node = new NodeTrie();
               current->children[ch] = node;
           }
           current = node;
       }
       //mark the current nodes endOfWord as true
       current->endOfWord = true;
   }
   void printTrie(NodeTrie *&root){
       for(auto it = root->children.begin() ; it!= root->children.end(); it++){
           printTrie(it->second);
           cout << it->first << " ";
       }
       cout << endl;
   }
   void printTrieConsole(){
       printTrie(m_pRoot);
   }

};


#endif // TRIE_H

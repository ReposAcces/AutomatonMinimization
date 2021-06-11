#include"trie.h"


/**
* Iterative implementation of insert into trie
*/
void Trie::insert(std::string word){
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


void Trie::printTrie(NodeTrie *&root){
     std::fstream file;
     file.open("AFD.dot", std::ios::out);
     file << "digraph ll {" << std::endl;

     queue< NodeTrie* > *treeQueue = new queue< NodeTrie* >();
     treeQueue->push(root);
     NodeTrie *nodo;
     while( !treeQueue->empty() ){
         nodo = treeQueue->front();treeQueue->pop();git
         // if(nodo->children.empty()){
         //     cout << nodo->isEndOfWord() << endl;
         // }
         for(auto it = nodo->children.begin() ; it != nodo->children.end(); it++){
            cout << it->first << " ";
            treeQueue->push(it->second);
         }
    }
     delete treeQueue;
     file << "}";
     file.close();
}



void Trie::printTrieConsole(){
    printTrie(m_pRoot);
    system("dot -Tpng AFD.dot -o AFD.png");
}

#ifndef NODETRIE_H
#define NODETRIE_H

#include<map>

class NodeTrie{
public:
    std::map<char,NodeTrie*> children;
    bool endOfWord;
public:
    NodeTrie(){
        this->endOfWord = false;
    }
    bool isEndOfWord(){return this->endOfWord;}
    void printNode(){}
    void letters(){}
};



#endif // NODETRIE_H

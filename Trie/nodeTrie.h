#ifndef NODETRIE_H
#define NODETRIE_H

#include<map>

class NodeTrie{
public:
    std::map<char,NodeTrie*> children;
    bool endOfWord;
    int valueState ;
public:
    NodeTrie(){
        this->endOfWord = false;
    }
    bool isEndOfWord(){return this->endOfWord;}
    void printNode(){}
    void letters(){}
    int getValueState(){return valueState;}
    friend ostream &operator<<( ostream &output, const NodeTrie *&node ) {
        output << node->valueState;
        return output;
    }
};



#endif // NODETRIE_H

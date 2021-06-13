#ifndef NODETRIE_H
#define NODETRIE_H

#include<map>

class NodeTrie{
public:
    std::map<char,NodeTrie*> children;
    bool endOfWord;
    string valueState ;
public:
    NodeTrie(){
        this->endOfWord = false;
    }
    bool isEndOfWord(){return this->endOfWord;}
    void setValueState(std::string value){this->valueState =value;}
    string getValueState()const{return valueState;}
    void printNode(){}
    void letters(){}
    int getValueState(){return valueState;}
    friend ostream &operator<<( ostream &output, const NodeTrie *&node ) {
        output << node->valueState;
        return output;
    }
};



#endif // NODETRIE_H

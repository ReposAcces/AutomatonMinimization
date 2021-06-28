#ifndef NODETRIE_H
#define NODETRIE_H

#include<iostream>
#include<fstream>
#include<queue>
#include<map>
using namespace std;

class NodeTrie{
public:
    std::map<char,NodeTrie*> children;
    bool endOfWord;
    string valueState ;
public:
    NodeTrie(){
        this->endOfWord = false;
        this->valueState="R";
    }
    bool isEndOfWord(){return this->endOfWord;}
    bool getEndOfWord(){return this->endOfWord;}
    void setValueState(std::string value){this->valueState =value;}
    string getValueState()const{return valueState;}
    void printNode(){}
    void letters(){}
    friend ostream &operator<<( ostream &output, const NodeTrie *&node ) {
        //output << node->valueState;
        //output <<node->endOfWord;
        output <<"dadd";
        return output;
    }
};



#endif // NODETRIE_H

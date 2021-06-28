#ifndef BUBENZERTOPIC_H
#define BUBENZERTOPIC_H

//#include"nodeTrie.h"
#include<list>

class SignatureState{
private:
    list< pair<char,NodeTrie*> > outgoingTransition;
public:
    SignatureState(NodeTrie *node){
        for(auto it = node->children.begin() ; it!= node->children.end(); it++){
            this->outgoingTransition.push_back(make_pair(it->first,it->second));
        }
        //SI ES ESTADO FINAL ADD E
        if(node->isEndOfWord())this->outgoingTransition.push_back(make_pair('#',nullptr));

    }
    ~SignatureState(){}
    list< pair<char,NodeTrie*> > *getOutTransition(){
        return &outgoingTransition;
    }
    friend bool operator < (const SignatureState &ss1,const SignatureState &ss2){
        return ss1.outgoingTransition < ss2.outgoingTransition;
    }
};


#endif // BUBENZERTOPIC_H

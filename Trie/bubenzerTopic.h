#ifndef BUBENZERTOPIC_H
#define BUBENZERTOPIC_H

#include"nodeTrie.h"
#include<list>

class SignatureState{
private:
    list< pair<char,NodeTrie*> > outgoingTransition;
public:
    SignatureState(){}
    ~SignatureState(){}
};


#endif // BUBENZERTOPIC_H

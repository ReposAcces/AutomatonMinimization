#ifndef NODETRIE_H
#define NODETRIE_H

#include<map>

class NodeTrie{
private:
    std::map<char,NodeTrie> children;
    bool endOfWord;
public:
    NodeTrie(){
        this->endOfWord = false;
    }
    bool isEndOfWord(){return this->endOfWord;}
};



#endif // NODETRIE_H

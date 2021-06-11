#include<iostream>
#include"trie.h"

int main(){

    // NodeTrie nodetrie1;
    // std::cout << nodetrie1.isEndOfWord() << std::endl;

    // std::string main ="main";
    // for(auto e = 0 ; e<main.size(); e++){
    //     char caracter = main[e];
    //     std::cout << caracter << ",";
    //     // std::cout << main[e] <<" ," ;
    // }std::cout << "\n";

    std::map<char,int> first;
    std::map<char,int> second;

    first['x']=8;
    first['y']=16;
    first['z']=32;
    if(!first['d']){
        std::cout << "Dont exist the caracter d\n";
    }
    cout << "Alfabetizacion de los numeros"



    return 0;
}

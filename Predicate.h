#ifndef P1_PREDICATE_H
#define P1_PREDICATE_H
#include "Parameter.h"

class Predicate{
private:
    std::string head;
    vector<Parameter*> params;
public:
    Predicate(std::string h, vector<Parameter*> p){head = h; params = p;}
    void toString(){
        cout << head << "(";
        for (size_t i=0; i < params.size(); i++){
            if(i != 0)
                cout << ",";
            params[i]->toString();
        }
    }
};
#endif //P1_PREDICATE_H

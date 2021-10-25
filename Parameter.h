#ifndef P1_PARAMETER_H
#define P1_PARAMETER_H

class Parameter{
private:
    bool isString;
    std::string desc;
public:
    Parameter(bool s, std::string d){isString = s; desc = d;}
    void toString(){cout << desc;}
};
#endif //P1_PARAMETER_H

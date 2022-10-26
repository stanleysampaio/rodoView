#ifndef RODOVIA_INTERFACE_H
#define RODOVIA_INTERFACE_H
#include <string>

using namespace std;

class Rodovia_Interface {

    int id;
    string name;
    float caixa;

public:
    Rodovia_Interface();

    virtual void setId(int);
    virtual int getId (void );
    virtual void setName(string);
    virtual string getName(void);
    virtual void setCaixa(float);
    virtual float getCaixa(void);

};

#endif // RODOVIA_INTERFACE_H

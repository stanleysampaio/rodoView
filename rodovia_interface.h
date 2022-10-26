#ifndef RODOVIA_INTERFACE_H
#define RODOVIA_INTERFACE_H
#include <string>

using namespace std;

class Rodovia_Interface {
public:
    static int id;
    string name;
    float caixa;


public:
    Rodovia_Interface();

    virtual ~Rodovia_Interface(){};

    virtual int setId(void);
    virtual int getId (void );
    virtual void setName(string);
    virtual string getName(void);
    virtual void setCaixa(float);
    virtual float getCaixa(void);

};

#endif // RODOVIA_INTERFACE_H

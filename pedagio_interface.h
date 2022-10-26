#ifndef PEDAGIO_INTERFACE_H
#define PEDAGIO_INTERFACE_H
#include <string>

using namespace std;

class Pedagio_Interface {
public:
    static int id;
    string name;
    float caixa;
    float preçoCarro;
    float preçoMoto;
    float preçoCaminhão;

public:
    Pedagio_Interface();

    virtual ~Pedagio_Interface(){};

    virtual int setId(void);
    virtual int getId (void );
    virtual void setName(string);
    virtual string getName(void);
    virtual void setCaixa(float);
    virtual float getCaixa(void);

};
#endif // PEDAGIO_INTERFACE_H

#ifndef PEDAGIO_INTERFACE_H
#define PEDAGIO_INTERFACE_H
#include <string>
#include <vector>

using namespace std;

class Pedagio_Interface  {
public:
    static int id;
    string name;
    float caixa;
    float precoCarro;
    float precoMoto;
    float precoCaminhao;
    int fluxo;
    vector<int> types;


public:
    Pedagio_Interface();

    virtual ~Pedagio_Interface(){};

    virtual int setId(void);
    virtual int getId (void );
    virtual void setName(string);
    virtual string getName(void);
    virtual void setCaixa(float);
    virtual float getCaixa(void);
    virtual void setPrecoCarro(float);
    virtual float getPrecoCarro(void);
    virtual void setPrecoMoto(float);
    virtual float getPrecoMoto(void);
    virtual void setPrecoCaminhao(float);
    virtual float getPrecoCaminhao(void);
    virtual void setFluxo(int);
    virtual int getFluxo(void);
    virtual vector<int> getTypes(void);

};
#endif // PEDAGIO_INTERFACE_H

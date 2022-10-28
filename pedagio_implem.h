#ifndef PEDAGIO_IMPLEM_H
#define PEDAGIO_IMPLEM_H
#include "pedagio_interface.h"

class Pedagio_implem : public Pedagio_Interface
{

public:
    Pedagio_implem();

    ~Pedagio_implem(){};

     int setId(void);
     int getId (void );
     void setName(string name);
     string getName(void);
     void setCaixa(float caixa);
     float getCaixa(void);
     void setPrecoCarro(float p);
     float getPrecoCarro(void);
     void setPrecoMoto(float p);
     float getPrecoMoto(void);
     void setPrecoCaminhao(float p);
     float getPrecoCaminhao(void);
     void setFluxo(int f);
     int getFluxo(void);
     vector<int> getTypes(void);
};

#endif // PEDAGIO_IMPLEM_H

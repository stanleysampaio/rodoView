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
     void setName(string);
     string getName(void);
     void setCaixa(float);
     float getCaixa(void);
     void setPrecoCarro(float);
     float getPrecoCarro(void);
     void setPrecoMoto(float);
     float getPrecoMoto(void);
     void setPrecoCaminhao(float);
     float getPrecoCaminhao(void);
     void setFluxo(int);
     int getFluxo(void);
     vector<int> getTypes(void);
};

#endif // PEDAGIO_IMPLEM_H

#ifndef RODOVIA_IMPLEM_H
#define RODOVIA_IMPLEM_H
#include "rodovia_interface.h"

class Rodovia_implem : public Rodovia_Interface {

    int id = 0;
public:
    Rodovia_implem();

     int setId(void);
     int getId (void );
     void setName(string name);
     string getName(void);
     void setCaixa(float cx);
     float getCaixa(void);
};

#endif // RODOVIA_IMPLEM_H

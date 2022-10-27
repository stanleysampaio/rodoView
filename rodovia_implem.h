#ifndef RODOVIA_IMPLEM_H
#define RODOVIA_IMPLEM_H
#include "rodovia_interface.h"
#include "pedagio_interface.h"

class Rodovia_implem : public Rodovia_Interface {

    int id = 0;
    vector<Pedagio_Interface*> pedagios;
public:
    Rodovia_implem();
    Rodovia_implem(const Rodovia_implem &c);

     int setId(void);
     int getId (void ) const;
     void setName(string name);
     string getName(void) const;
     void setCaixa(float cx);
     float getCaixa(void) const;
     vector<Pedagio_Interface*> getPedagios(void) const;
     void add(Pedagio_Interface *p);
     bool remove (Pedagio_Interface *p);
     Rodovia_implem &operator= (const Rodovia_implem&);
     friend std::ostream& operator <<(std::ostream&, const Rodovia_implem&);
     bool operator==(const Rodovia_implem &rhs) const;
};

#endif // RODOVIA_IMPLEM_H

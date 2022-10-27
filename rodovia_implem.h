#ifndef RODOVIA_IMPLEM_H
#define RODOVIA_IMPLEM_H
#include "rodovia_interface.h"
#include "pedagio_implem.h"

class Rodovia_implem : public Rodovia_Interface {

    static int id;
    string name;
    float caixa;
    vector<Pedagio_implem*> pedagios;

public:
    Rodovia_implem();   //Default constructor.
    Rodovia_implem(const Rodovia_implem &c); //Copy constructor.
    Rodovia_implem(string name, float caixa);//Constructor with 2 parameters.
    Rodovia_implem(string name, float caixa, vector<Pedagio_implem*> pedagios);//Constructor with 3 parameters.

    //! Function setId() :
      //! \param Void : the ID is a static var that increments +1 using this function.
      //! \return int : Return the value of the unique object's ID.
     int setId(void);
     //! Function getId() :
       //! \param Void;
       //! \return int : Return the value of the unique object's ID.
     int getId (void ) const;
     //! Function setName() :
       //! \param String name: the name to be setted.
       //! \return void.
     void setName(string name);
     //! Function getName() :
       //! \param Void.
       //! \return String : Return the Name of the object.
     string getName(void) const;
     //! Function setCaixa() :
       //! \param Float cx: set the value of the attribute caixa.
       //! \return Void.
     void setCaixa(float cx);
     //! Function getCaixa() :
       //! \param Void.
       //! \return Float : Return the value of the attribute "caixa".
     float getCaixa(void) const;
     //! Function getPedagios() :
       //! \param Void.
       //! \return vector<Pedagio_interface> : Return the vector of the attribute "pedagios".
     vector<Pedagio_implem*> getPedagios(void) const;
     //! Function add() :
       //! \param Pedagio_implem *p : the pointer to the object Pedagio_implem that will be added to the vector.
       //! \return Void.
     void add(Pedagio_implem *p);
     //! Function remove() :
       //! \param Pedagio_implem *p : the pointer to the object Pedagio_implem that will be deleted from the vector.
       //! \return Void.
     bool remove (Pedagio_implem *p);

     Rodovia_implem &operator= (const Rodovia_implem&);//overloading operator =.
     friend std::ostream& operator <<(std::ostream&, const Rodovia_implem&);//overloading operator <<.
     bool operator==(const Rodovia_implem &rhs) const;//overloading operator ==.
};

#endif // RODOVIA_IMPLEM_H

#ifndef RODOVIA_INTERFACE_H
#define RODOVIA_INTERFACE_H
#include <string>

using namespace std;

class Rodovia_Interface {


public:
    virtual ~Rodovia_Interface(){};//virtual destructor;

    //! Function setId() :
      //! \param Void : the ID is a static var that increments +1 using this function.
      //! \return int : Return the value of the unique object's ID.
    virtual int setId(void) = 0;
    //! Function getId() :
      //! \param Void;
      //! \return int : Return the value of the unique object's ID.
    virtual int getId (void ) const = 0;
    //! Function setName() :
      //! \param String : the name to be setted.
      //! \return void.
    virtual void setName(string) = 0;
    //! Function getName() :
      //! \param Void.
      //! \return String : Return the Name of the object.
    virtual string getName(void) const = 0;
    //! Function setCaixa() :
      //! \param Float : set the value of the attribute caixa.
      //! \return Void.
    virtual void setCaixa(float) = 0;
    //! Function getCaixa() :
      //! \param Void.
      //! \return Float : Return the value of the attribute "caixa".
    virtual float getCaixa(void) const = 0;

};

#endif // RODOVIA_INTERFACE_H

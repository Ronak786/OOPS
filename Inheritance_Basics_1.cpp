#include<iostream>


class Base_Class
{

    private:

    int a;
    int b;

    public:

    void get_base_class();
    void set_base_class();

    protected:

    int private_var;

};

class Derived_Class_1 : public Base_Class
{
    /**
    * 1. Public Member Of Base Class Become Public Here
    * 2. Protected Member become Protected Here
    * 3. Private is not able to access here (As we are already acess public member of the base class)
    **/
};

class Derived_Class_2 : private Base_Class
{

  /**
    * 1. Public Member Of Base Class Become Private Here.
    * 2. Protected Member become Private Here.
    * 3. Private is not able to access here.
    **/


};

class Derived_Class_3 : protected Base_Class
{
    /**
    * 1. Public Member Of Base Class Become Protected Here.
    * 2. Protected Member become Protected Here.
    * 3. Private is not able to access here.
    **/

};

int main()
{



}
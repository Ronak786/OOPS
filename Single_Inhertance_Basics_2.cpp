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

    int private_var_base;

};

class Derived_Class:public Base_Class   //Single level Public Inheritance
{

    private:

    int c;
    int d;

    public:

    void get_derived_class();
    void set_derived_class();

    protected:

    int private_var_derived;
    
};

void Base_Class::get_base_class()
{
    std::cout << "Value of a: " << a << std::endl;
    std::cout << "Value of b: " << b << std::endl;

}

void Base_Class::set_base_class()
{

    std::cout << "Enter value of a" << std::endl;
    std::cin>>a;

    std::cout << "Enter value of b" << std::endl;
    std::cin>>b;

}

void Derived_Class::get_derived_class()
{

    //get_base_class();

    std::cout << "Value of c: " << c << std::endl;
    std::cout << "Value of d: " << d << std::endl;


}

void Derived_Class::set_derived_class()
{

    //set_base_class();

    std::cout << "Enter value of c" << std::endl;
    std::cin>>c;

    std::cout << "Enter value of d" << std::endl;
    std::cin>>d;

}

int main()
{


    Derived_Class Derived_Class_OBJ;

    Derived_Class_OBJ.set_base_class();
    Derived_Class_OBJ.set_derived_class();
    Derived_Class_OBJ.get_base_class();
    Derived_Class_OBJ.get_derived_class();
   
    

}
#include<iostream>


class Returning_Object
{


    int a;
    int b;

    public:

        void get_data();
        void set_data();
        Returning_Object addition(Returning_Object &);

};


void Returning_Object::set_data()
{
        std::cout << "Enter The value of a:" << std::endl;
        std::cin >> a;

        std::cout << "Enter The value of b:" << std::endl;
        std::cin >> b;
}

void Returning_Object::get_data()
{
        std::cout << "The value of a:" << a << std::endl;
        std::cout << "The value of b:" << b << std::endl;
    
}

Returning_Object Returning_Object::addition(Returning_Object &S)
{
    Returning_Object Temp;
    
    Temp.a = this->a + S.a;
    Temp.b = this->b + S.b;

    
    return Returning_Object(Temp);
}





int main()
{

    Returning_Object Returning_Object_Obj1 , Returning_Object_Obj2 , Returning_Object_Obj3;

    Returning_Object_Obj1.set_data();
    Returning_Object_Obj2.set_data();

    Returning_Object_Obj1.get_data();
    Returning_Object_Obj2.get_data();


    Returning_Object_Obj3 = Returning_Object_Obj1.addition(Returning_Object_Obj2);

    Returning_Object_Obj3.get_data();



}
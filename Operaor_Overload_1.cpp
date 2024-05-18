#include<iostream>


class Op_Overload
{

    private:

    int a;

    public:

    void get_data();
    void set_data();


   /**
    * 1. Two types of overloading: 1. Binary 2 Unery
    * 2. Binary Overload: Needs two objects
    * 3. Unery Overload : Needs one objects.
    * 4. In binary overload 1st objects called imlplicite objects and 2nd called explicite object.
    * 5. (Important) Declaration should inside class and defination should outside class.
    *    if its a friend function overload defination and declaration can be inside class.
   */
    void operator == (Op_Overload &Test);

};

class Op_Overload_2
{

    private:

    int b;

    public:

    void get_data_2();
    void set_data_2();


};


void Op_Overload ::set_data()
{
    std::cout << "Enter Data: " << std::endl;
    std::cin >> a;

}

void Op_Overload ::get_data()
{

    std::cout << "Value of a: " << a << std::endl;
    
}

void Op_Overload::operator==(Op_Overload &Test)
{

        std::cout << "We are in Operator Ovrload Function succesfully" << std::endl;

        if( this->a == Test.a )
        {
            std::cout << "Both objects are equal" << std:: endl;
        }
        else
        {
            std::cout << "Both objects are not equal" << std:: endl;
        }

}

void Op_Overload_2 ::get_data_2()
{
    std::cout << "Enter Data: " << std::endl;
    std::cin >> b;

}

void Op_Overload_2 ::set_data_2()
{

    std::cout << "Value of b: " << b << std::endl;
    
}


int main()
{

    Op_Overload Op_Overload_Obj_1 , Op_Overload_Obj_2;
    //Op_Overload_2 Op_Overload_2_Obj;
    
    Op_Overload_Obj_1.set_data();
    Op_Overload_Obj_2.set_data();

    Op_Overload_Obj_1.get_data();
    Op_Overload_Obj_2.get_data();


    Op_Overload_Obj_1 == Op_Overload_Obj_2;
    

}
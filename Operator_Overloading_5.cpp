#include<iostream>

class Op_Overload_2;
//using namespace std;
class Op_Overload
{

    private:

    int a;
    int b;

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
    * 6. Operator overload defination is same as function defination.
    * 7. POSTFIX declaration -->> void operator ++(int);
    * 8. PREFIX declaration   -->> void operator ++(int); 
    */

    void operator == (Op_Overload &Test);
    Op_Overload operator +  (Op_Overload &Test);
    friend void operator > (Op_Overload &Test , Op_Overload_2 &Test2); // not a member of a class dont use object on it.
    void operator ++(int);  //postfix
    void operator --(int);  //postfix
    void operator ++();     //prefix
    void operator --();     //prefix

    /**
     * 1. For insertion operator use friend function as its callsed from class OSTERAM
     *    Which inturn we required two class one is OSTERAM andd other is Explicite class call.
     *    As this is friend function we to pass explicite class. Implicite not allowed, this pointer not allowed.
     * 2. Always use (CLASSNAME)& operator 
    */
    friend std::ostream& operator << (std::ostream &OTest , Op_Overload &Test);
    friend std::istream& operator >> (std::istream &OTest , Op_Overload &Test);

};

class Op_Overload_2
{

    private:

    int b;

    public:

    void get_data_2();
    void set_data_2();
    friend void operator > (Op_Overload &Test , Op_Overload_2 &Test2);


};


void Op_Overload ::set_data()
{
    std::cout << "Enter Data for a: " << std::endl;
    std::cin >> a;
    std::cout << "Enter Data for b: " << std::endl;
    std::cin >> b;

}

void Op_Overload ::get_data()
{

    std::cout << "Value of a: " << a << std::endl;
    std::cout << "Value of b: " << b << std::endl;
    
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

Op_Overload Op_Overload::operator+(Op_Overload &Test)
{
    std::cout << "We are in + Operator Overload" << std::endl;

    Op_Overload Result_Obj;

    Result_Obj.a = this->a + Test.a;

    return Result_Obj;
     

}

void Op_Overload::operator++(int)    //postfix
{
   std::cout << "We are in ++ Unery Operator Overload" << std::endl;

   this->a++;

}
void Op_Overload::operator--(int)   //postfix
{
    std::cout << "We are in -- Unery Operator Overload" << std::endl;
    this->a--;

}

void Op_Overload::operator++()     //prefix
{
   std::cout << "We are in ++ Unery Operator Overload" << std::endl;

    ++b;

}
void Op_Overload::operator--()     //prefix
{
    std::cout << "We are in -- Unery Operator Overload" << std::endl;
    --b;

}

std::ostream& operator << (std::ostream &OTest , Op_Overload &Test)
{
    OTest << "We are in Operator Overload of <<" << std::endl;
    OTest << "The value of a is a = " << Test.a << std::endl;
    return OTest;
}
std::istream& operator >> (std::istream &OTest , Op_Overload &Test)
{
       OTest >> Test.a;          
       return OTest;
}

void Op_Overload_2 ::set_data_2()
{
    std::cout << "Enter Data: " << std::endl;
    std::cin >> b;

}

void Op_Overload_2 ::get_data_2()
{

    std::cout << "Value of b: " << b << std::endl;
    
}
void operator>(Op_Overload & Test, Op_Overload_2 & Test2)
{
     std::cout << "We are in friend > Operator Overload" << std::endl;
 
     
    if( Test.a > Test2.b )
    {
        std::cout << "A is gretaer then B " << std::endl;    
    }
    else
    {
        std::cout << "B is gretaer then A " << std::endl;
    }


}

int main()
{

    Op_Overload  Op_Overload_Obj_1;
    Op_Overload_2 Op_Overload_Obj_2;
    
    Op_Overload_Obj_1.set_data();
   // Op_Overload_Obj_2.set_data_2();

    Op_Overload_Obj_1.get_data();
    //Op_Overload_Obj_2.get_data_2();


    /*
    Op_Overload_Obj_1 == Op_Overload_Obj_2;    
    Op_Overload_Obj_3 = Op_Overload_Obj_1 + Op_Overload_Obj_2; 
    Op_Overload_Obj_3.get_data();                                 //showing result of addition
    Op_Overload_Obj_1 > Op_Overload_Obj_2;   

    Op_Overload_Obj_1++;
    Op_Overload_Obj_1++;
    Op_Overload_Obj_1--;

    Op_Overload_Obj_1.get_data();                                   //showing result of postfix unery operator

    ++Op_Overload_Obj_1;
    ++Op_Overload_Obj_1;
    --Op_Overload_Obj_1; 

    Op_Overload_Obj_1.get_data();                                   //showin result of both postfix and prefix operation
    */

    std::cin >> Op_Overload_Obj_1;
    std::cout << Op_Overload_Obj_1;
   
}



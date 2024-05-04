#include<iostream>


class Pass_Obj_Prameter
{
    
    private:
        int a;
        int b;

    public:
        void get_data();
        void set_data();
        void greater(Pass_Obj_Prameter &);

};

void Pass_Obj_Prameter::get_data()
{
    std ::cout << "The value of a :"<< a << std::endl;
    std ::cout << "The value of b :"<< b << std::endl;
}
void Pass_Obj_Prameter::set_data()
{
    std ::cout << "Enter The value of a :"<< std::endl;
    std ::cin >> a;
    std ::cout << "Enter The value of b :"<< std::endl;
    std ::cin >> b;
}
void Pass_Obj_Prameter::greater(Pass_Obj_Prameter &S)
{
    
      if(this->a > S.a )
      {
        std::cout << "Object1 is greater !!" << std::endl;

      }
      else if (this->a < S.a)
      {
        std::cout << "Object2 is greater !!" << std::endl;
      }
      else
        std::cout << "Objects are equal !!" << std::endl;

}

int main()
{

    Pass_Obj_Prameter Pass_Obj_Prameter_Obj1 , Pass_Obj_Parameter_Obj2;

    std ::cout << "Enter The value of Obj-1 :"<< std::endl;
    Pass_Obj_Prameter_Obj1.set_data();

    std ::cout << "Enter The value of Obj-2 :"<< std::endl;
    Pass_Obj_Parameter_Obj2.set_data();

    std ::cout << "The value of Obj-1 :"<< std::endl;
    Pass_Obj_Prameter_Obj1.get_data();

    std ::cout << "The value of Obj-2 :"<< std::endl;
    Pass_Obj_Parameter_Obj2.get_data();

    Pass_Obj_Prameter_Obj1.greater(Pass_Obj_Parameter_Obj2);
   

}


#include<iostream>

class Static_Variable
{

    private:
        int x;
        int y;
        
    public:

        void get_data();
        void set_data();

        /**
         * 1. Static data member is a class variable not a object data member
         * 2. this-> operator will ot work on a static variable/function
         * 3. To Call static data , use CALSS_NAME::STATIC_VARIABLE_NAME
         * 4. Always define static variable outside class as --->>> VARIABLE_RET_TYPE CLASS_NAME::STATIC_VARIABLE_NAME 
        */
        static int st_Variable;    
};

void Static_Variable::get_data()
{
   std::cout << "Data for x:" << x << std::endl;
   std::cout << "Data for y:" << y << std::endl;
   std::cout << "Data for Static_Mmber:" << st_Variable << std::endl;

}

void Static_Variable::set_data()
{
    
    std::cout << "Enter the Data for x:" << std::endl;
    std::cin>>x;

    std::cout << "Enter the Data for y:" << std::endl;
    std::cin>>y;

    std::cout << "Enter the Data for Static member:" << std::endl;
    std::cin>>st_Variable;


}

int Static_Variable::st_Variable;

int main()
{

    Static_Variable Static_Variable_Obj1, Static_Variable_Obj2;

    Static_Variable_Obj1.set_data();
    Static_Variable_Obj1.get_data();

    Static_Variable_Obj2.get_data();

    std::cout << "Data for Static_Mmeber:" << Static_Variable::st_Variable <<std::endl;



}
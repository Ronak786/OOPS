#include<iostream>


class This_Pointer
{
    private:

        int a;
        float b;

    public:

        void set_data(int a, int b )
        {
           this->a =a;
           this->b= b; 
        }

        void get_data()
        {
            std::cout << "Enter The value of a: " << a << std::endl;
            std::cout << "Enter The value of b: " << b << std::endl;            

        }

};


int main()
{

    int x;
    int y;

    This_Pointer This_Pointer_obj;

    std::cout << "Enter The value of x: " << std::endl;
    std::cin >> x;
    std::cout << "Enter The value of y: " << std::endl;
    std::cin >> y;

    This_Pointer_obj.set_data( x , y );
    This_Pointer_obj.get_data();


}
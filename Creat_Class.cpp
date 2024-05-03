#include<iostream>


class first_class
{

private:
    int a;
    int b;
public:
    void getdata();
    void setdata();

};

void first_class::getdata()
{
    std::cout << "value of a = " << a << std::endl;
    std::cout << "value of b = " << b << std::endl;

}

void first_class::setdata()
{

    std::cout << "Enter value of a = :" << std::endl;
    std::cin >> a;
    std::cout << "Enter value of b = :" << std::endl;
    std::cin >> b;
}

int main()
{
    first_class first_obj; 
    std::cout << "Hello world!!" << std::endl;

    first_obj.setdata();
    first_obj.getdata();    
}


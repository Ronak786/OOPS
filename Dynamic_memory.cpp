#include<iostream>


class dynamic_memory
{



};


int main()
{
    // pointer to store the address returned by the new
    int* ptr;
    // allocating memory for integer
    ptr = new int;

    // assigning value using dereference operator
    *ptr = 10;

    // printing value and address
    std::cout << "Address: " << ptr << std::endl;
    std::cout << "Value: " << *ptr;

    return 0;
}
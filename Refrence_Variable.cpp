#include<iostream>

void swap(int &,int &);

class ref_var
{

};

void swap(int &P, int &Q)
{

   int temp = P;
   P = Q;
   Q = temp;

}

int main()
{

    int a=10;
    int b=20;

   std::cout << "Before swap" << std::endl;
   std::cout << "Value of a = " << a <<std::endl;
   std::cout << "Value of b = " << b <<std::endl;

   swap(a,b);
   std::cout << "After swap" << std::endl; 
   std::cout << "Value of a = " << a <<std::endl;
   std::cout << "Value of b = " << b <<std::endl;
}




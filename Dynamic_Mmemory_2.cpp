#include<iostream>


class Dynamic_Memory_2
{



};


int main()
{

int n=5;
int *p = new int[n];  //new mathod


std::cout << "Address of P is" << p << std::endl;
std::cout << "Please Enter 5 Intiger value :" << std::endl;

for (int i=0; i<n ; i++)
{
  std::cin >> *(p+i);
}

std::cout << std::endl;
std::cout << "5 Intiger values Are :" << std::endl;

for (int i=0; i<n ; i++)
{
  std::cout << *(p+i) ;
  std::cout <<" "; 
}
std::cout << std::endl;
}
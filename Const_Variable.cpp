#include<iostream>


class Constant_Class
{

    private: 
        int x;
        int y;
       const int cons_variable;
    public:

        
        void setdata();
        void getdata();    
        

        /**
         *  Constant member initlizer.
        */
        Constant_Class():cons_variable(67)
        {
             //code here    
        }
        

};


void Constant_Class::getdata()
{
  
    std::cout<< "Value of x: " << x << std::endl;
      
    std::cout<< "Value of y: " << y << std::endl;

    std::cout<< "Value of Constant: " << cons_variable << std::endl;  

}

void Constant_Class::setdata()
{ 
      std::cout<< "Enter For x: " << std::endl;
      std::cin >> x;
      std::cout<< "Enter For y: " << std::endl;
      std::cin >> y;


      //std::cin >> cons_variable;
}

int main()
{

     Constant_Class Constant_Obj;

     Constant_Obj.setdata();
     Constant_Obj.getdata();

}
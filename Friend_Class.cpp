
#include <iostream>

 
class Main_Class {
private:
    int private_variable;
 
protected:
    int protected_variable;
 
public:
    Main_Class()
    {
        private_variable = 10;
        protected_variable = 99;
    }
 
    // friend class declaration
    friend class Friend_Class;
};
 
// Here, class F is declared as a
// friend inside class GFG. Therefore,
// F is a friend of class GFG. Class F
// can access the private members of
// class GFG.
class Friend_Class {
public:
    void display(Main_Class &t)
    {
        std::cout << "The value of Private Variable = "
             << t.private_variable << std::endl;
        std::cout << "The value of Protected Variable = "
             << t.protected_variable << std::endl;
    }
};
 
// Driver code
int main()
{
    Main_Class Main_Class_Obj;
    Friend_Class Friend_Class_Obj;
    Friend_Class_Obj.display(Main_Class_Obj);
    return 0;
} 
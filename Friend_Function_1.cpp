#include<iostream>


class Friend_Function
{


private:

    int x;
    int y;

    void Private_Function()
    {
        std::cout << "Hi I am in Private Function" << std::endl;
    }

public:

    void get_data();
    void set_data();

    /**
     * 1. Declare in Private / Public / Protected.
     * 2. No need to declare name as saame as class.
     * 3. Declaration should inside class with friend keyword.
     * 4. Defination should outside class without using friend keyword/Object name
     * 5. Friend function can defined any number of class.
     * 6. Must be object as arguments -- Important.
     * 7. Friend is just function , non member function,normal function.
     * 8. Invoked by normal function.
     * 9. private/public member access by arguments object name.
     * 10. Reduce Code size by declaring in multiple class and access thier member.
     * 11. As data hiding rules is not followed , its not recommand to use in C++ ,avoid if you can.  
    */

    friend void friend_function_fun(Friend_Function &);

};

void Friend_Function::get_data()
{

    std::cout << "Enter Data" << std::endl;
    std::cin >> x;
    std::cin >> y;
}

void Friend_Function::set_data()
{

    std::cout << "Data Is" << std::endl;

    std::cout << "Data x:" << x << std::endl;
    std::cout << "Data y:" << y << std::endl;

}

void friend_function_fun(Friend_Function &S)
{
     S.Private_Function();

}

int main()
{

    Friend_Function Friend_Function_Obj;

    friend_function_fun(Friend_Function_Obj);

    return 0;

}



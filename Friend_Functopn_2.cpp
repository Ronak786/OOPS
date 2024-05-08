#include<iostream>

class Friend_Function_2;
class Friend_Function_1
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

    friend void friend_function_fun(Friend_Function_1 & , Friend_Function_2 &);

};

class Friend_Function_2
{


private:

    int x;
    int y;

    void Private_Function_2()
    {
        std::cout << "Hi I am in Private Function --2 " << std::endl;

    }

public:

    void get_data_2();
    void set_data_2();

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

    friend void friend_function_fun(Friend_Function_1 & , Friend_Function_2 &);

};


void Friend_Function_1::get_data()
{

    std::cout << "Enter Data" << std::endl;
    std::cin >> x;
    std::cin >> y;
}

void Friend_Function_1::set_data()
{

    std::cout << "Data Is" << std::endl;

    std::cout << "Data x:" << x << std::endl;
    std::cout << "Data y:" << y << std::endl;

}

void Friend_Function_2::get_data_2()
{

    std::cout << "Enter Data" << std::endl;
    std::cin >> x;
    std::cin >> y;
}

void Friend_Function_2::set_data_2()
{

    std::cout << "Data Is" << std::endl;

    std::cout << "Data x:" << x << std::endl;
    std::cout << "Data y:" << y << std::endl;

}

void friend_function_fun(Friend_Function_1 &S1 , Friend_Function_2 &S2)
{

    /*Accessing Private member function through Friend Function*/
    
    S1.Private_Function();
    S2.Private_Function_2();

    if  (S1.x > S2.x)
        std::cout << "S1.X is greater" << S1.x << std::endl;
    else  
        std::cout << "S2.X is greater" << S2.x << std::endl;
}

int main()
{

    Friend_Function_1 Friend_Function_Obj1;
    Friend_Function_2 Friend_Function_Obj2;

    std::cout << "Enter The Data For object 1:" << std::endl;

    Friend_Function_Obj1.get_data();
    Friend_Function_Obj1.set_data();

    std::cout << "Enter The Data For object 1:" << std::endl;
    
    Friend_Function_Obj2.get_data_2();
    Friend_Function_Obj2.set_data_2();

    friend_function_fun(Friend_Function_Obj1 , Friend_Function_Obj2);

    return 0;

}



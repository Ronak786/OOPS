#include<iostream>


class Default_Constructor
{

    public:

        /**
         * Rules of Default Constructor:
         * 1. Has not any return type.
         * 2. Declare only in Public area.
         * 3. Dont have any address.
         * 4. Can't Participate in Inharitance.
         * 5. Name same as Class Name.
         * 6. Special member function used for initialization of Class variable/Data Member.
         * 7. Constructors can be overloaded.
         * 8. It will implicite call when new/delete call.
         * 9. Executed Only one.
        */

        Default_Constructor()
        {
            std::cout << "I am in default constructor" << std::endl;
        }
        

};

int main()
{
    /**
     * 
     * Output:
     * 1.I am in default constructor will print 2 times
     * 2.If we declare as Default_Constructor Default_Constructor_Obj[50] , it will print 50 times.
     * 
     */
    Default_Constructor Default_Constructor_Obj_1;
    Default_Constructor Default_Constructor_Obj_2;





}
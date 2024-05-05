#include<iostream>


class Default_Constructor
{
    int x;
    int y;
    int z;

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

       /*Default_Constructor()
        {
            std::cout << "I am in default constructor" << std::endl;
        }
        1*/
        Default_Constructor(int a, int b , int c) 
        {
            std::cout << "I am in 3-Prameterized constructor" << std::endl;

            this->x = a;
            this->y = b;        
            this->z = c;
        }

        Default_Constructor(Default_Constructor &S)  /*This is a copy constructor declaration*/
        {
            std::cout << "I am in Copy - constructor" << std::endl;

            this->x = S.x;
            this->y = S.y;        
            this->z = S.z;
        }
        

        void show_data()
        {
           std::cout << "The value of x:" << x << std::endl;
           std::cout << "The value of y:" << y << std::endl;
           std::cout << "The value of z:" << z << std::endl;
              
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
     * I am in 3-Prameterized constructor
     * I am in Copy - constructor
     * The value of x:50
     * The value of y:60
     * The value of z:70
     * The value of x:50
     * The value of y:60
     * The value of z:70
     * 
     */

  //   Default_Constructor Default_Constructor_Obj_1;                  /* This is default constructor */
  //   Default_Constructor Default_Constructor_Obj_2(30 , 40) ;        /* This is Prameterized Constructor */

      Default_Constructor Default_Constructor_Obj_3(50 , 60 , 70) ;
      Default_Constructor Default_Constructor_Obj_4(Default_Constructor_Obj_3);  /*This is a copy constructor declaration*/

  //   Default_Constructor_Obj_1.show_data();                          /* will show garbedge value */
       Default_Constructor_Obj_3.show_data();
       Default_Constructor_Obj_4.show_data();


}
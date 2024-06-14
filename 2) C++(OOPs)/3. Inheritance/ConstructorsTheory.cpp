/* 

  1) Whenever the object of a derived class(which inherits base class) is created, without passing any 
     parameter i.e by calling default constructor, then first the default constructor of the base 
     class is called and then the default constructor of the derived class is called.

  2) but when the object of derived class is created by callig parameterized constructor, then 
     first the default constructor of the base class is executed and then the parameterized constructor
     of the derived class.

  3) CALLING BASE CLASS'S PARAMETERIZED CONSTRUCTOR FROM DERIVED CLASS'S CONSTRUCTOR :
     To call the parameterized constructor of the base class when the object of the derived class is 
     created, For that we need to write a special constructor in the derived class as below-
     Eg.
     Derived(int x, int a):Base(int x)
     {
        cout << "Param of Derived" << a;
     }

     Here first the base class's parameterized constructor is called and then the derived class's
     constructor.     

*/    

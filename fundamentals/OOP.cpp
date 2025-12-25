// 1. Classes.
// 2. Objects.
// 3. Abstraction
// 4. Inheritance
// 5. Encapsulation.
// 6. Polymorphism
// 8. Message Passing - its a conceptual part of OOP where objects communicate with each other by sending and receiving information.
            

#include <iostream>
#include <string>


//1.classes -> A blueprint.
class Students{ 
    private: // 5.Encaapsulation: Wrapping data and functions into a single unit(class) -> Protects data and improves security.
        // Data members:
        int Reg_No;
        std::string name;
        double marks;
    public:
           
        //Constructor:
        Students(std::string n,int s){  //Parameterized constructor
            name = n;
            Reg_No = s;
        }
        //Destructor:
        ~Students(){
            std::cout << "Object Destroyed";
        }

        // Member Functions:
        void display(){
            std::cout << Reg_No << "\n" << name << "\n"; 
        }
/*Access Specifiers:
    1.public: -> Accessible anywhere
    2.private: -> Inaccessable outside the class
    3.protected: -> Accesssible in derived class
*/
/*Constructor:  A special function.
    -> Has the same name as the class.
    -> Is called automatically when an object is created.
    -> No return type.
    -> Used to initialize data members.
Types : 
    1. Parameterized 
    2. Default -> constructor with no parameter 
        #-> If you create a constructor C++ doesn't create a default one automatically.
    3. Constructor Overloading -> multiple constructors with different parameters
    4. Copy Constructor -> Used to copy one object into another.
*/

/*Destructor: Used to free resources when object is destroyed.
*/
};

/*3. Abstraction: Hiding complex implementation details and showing only the essential features of the object.
    -> A class becomes a Abstract when it declares or has at least one pure virtual.
    -> Cannot create objects of an Abstract class type.
    -> Any concrete class derived from an Abstract class must provide an implementation for all pure virtual functions of the 
    Abstract class. If it doesn't, then the derived class also becomes an Abstract class.
    -> You can declare pointers and references of an Abstract class type which is a key mechanism for achieving polymorphism in C++. 
*/
class Shape{
    public:
        virtual void draw() = 0; // Pure Virtual Function
/*Pure Virtual Function: A virtual function that is declared with an = 0 in the base class.Meaning that it has
no implementation in the base class and must be (defined)overridden in any derived class.
*/
};

/*6.Polymorphism: The ability of an object to take many forms. It allows a single interface to represent different underlying
    data types or classes.
        ex: A man can be a father, a husband, an employee simultaneously.
    Types:
        1. Compile-time Polymorphism (Static Binding): Achieved through function overloading and operator overloading.
        2. Run-time Polymorphism (Dynamic Binding): Achieved through inheritance and virtual functions.
*/


/* 4. Inheritance: Mechanism by which a new class (derived class) can inherit properties and behaviors (data members and member functions)
    from an existing class (base class).
    Types:
        1. Single Inheritance
        2. Multiple Inheritance
        3. Multilevel Inheritance
        4. Hierarchical Inheritance
        5. Hybrid Inheritance
*/

class cube : public Shape{ // Derived class inheriting from base class Shape
    public:
        void draw() override{ // Overriding the pure virtual function
            std::cout << "Drawing a cube" << std::endl;
        }

        friend void greet(cube &c); // Friend function declaration
/* Friend Function: A function that is not a member of a class but has access to its private and protected members.
    -> Declared using the keyword 'friend' inside the class.
    -> Used to allow external functions to access private data of the class.
*/
};

/* Operator Overloading: A type of compile-time polymorphism that allows you to redefine the way operators work for 
    user-defined types (classes).
    ex: +, -, *, etc. can be overloaded to work with objects of a class.
*/



int main(){
    Students S1("Sanskar",10068); // 2. Object - Its an Instanace of a class
    S1.display();
    return 0;
}


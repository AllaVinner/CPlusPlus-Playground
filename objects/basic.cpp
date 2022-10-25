#include<iostream>
#include<string>

// Class definitions
// Declears what exists
// Methods can be defined but decleraton is enogh.
class MyClass{
    // Members are private as default
    // Public is a so called access apecifier.
    public:
        // A variable belonging to a class 
        // is called an attribute
        int myNum; 
        std::string myString;
        // A function belonging to a class
        // is called a method
        int myFun(int input){
            return input + 123;
        }
        void outFun(int input);
        // Constructor
        // always public, no return type, same name as class.
        MyClass(){
            std::cout << "Class initiate" << std::endl;
        }
        MyClass(int num){
            myNum = num;
        }
// Class definitions ends with a ';'
};

void MyClass::outFun(int input){
    std::cout << "Out from outFun: " << input << std::endl;
}

// Define method outside class


int main(){
    // Declear a class
    // * If MyClass has a parameter-less constructor
    // then this is also a initiation
    MyClass myObj; 

    // Get and set public values
    myObj.myNum = 123;
    myObj.myString = "SOMETHING GOOD";

    // print to terminal
    std::cout << myObj.myNum<< std::endl;
    std::cout << myObj.myString<< std::endl;
    std::cout << "Fun output: " << myObj.myFun(1000)<< std::endl;
    myObj.outFun(100);
    std::cout << "......................"<<std::endl;

    MyClass myObj2(45);
    std::cout << "Constructor set myNum: " << myObj2.myNum<<std::endl;


}






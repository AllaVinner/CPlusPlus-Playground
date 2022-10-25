#include<string>
#include<iostream>


// Base class (parent)
class Vehicle{
    public:
        std::string brand;
        void honk(){
            std::cout<<"Hong"<<std::endl;
        }
};

// Derived class (Child)
// Inheritance works by the ':' operand.
// Can inherite from mutliple, then do
//  : public class1, public class2,...
class Car: public Vehicle{
    public:
        std::string model;
        Car(std::string brand_, std::string model_){
            brand = brand_;
            model = model_;
        }
};

int main(){
    Car car("Honda", "V70");
    std::cout<<"Brand: " << car.brand << std::endl;
    std::cout <<"Model: "<< car.model << std::endl;

}




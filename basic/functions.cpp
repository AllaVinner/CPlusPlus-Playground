#include<iostream>

using namespace std;


// Created function
// return_type name(ags){}
void sayHi(){
    cout << "Say hi " << endl;
}

// Function stub
int adder(int a, int b);


int main()
{
    sayHi();
    cout << "Addition is: " << adder(5,4);
}

int adder(int a, int b){
    return a + b;
}

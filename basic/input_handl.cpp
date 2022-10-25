#include<iostream>
using namespace std;

int main()
{
    int age;
    cout << "Enter your age: ";
    cin >> age;
    cout << "You are " << age << " years old" << endl;
    //Get entire line
    string name;
    cout << "Enter you name: ";
    getline(cin, name);
    cout << "YOur name is " << name << endl;
}
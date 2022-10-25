#include<iostream>


int main(){
    // Arrays are blocks of static memory and hence needs to be known at compile time
    int size = 4;
    int a[size];
    int n;
    std::cin >> n;
    int b[n];
    b[n-1] = 123;
    std::cout << b[n-1] << std::endl;
    return 0;
}
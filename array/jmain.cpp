#include <iostream>

class Jarray{
    public:
        int size;
        Jarray(int shape [], int ndim){
            int size = 1;
            for(int d = 0; d < ndim; d ++){
                size = size*shape[d];
            }
            size = size;
            //float array[size];
        }
};

int main(){
    int shape [] = {3,4,5};
    Jarray ja(shape, 3);
    ja.size = 1234;
    std::cout<<ja.size;

    
}











#include<iostream>
#include<string>


class JMatrix {
   public:
      int m;
      int n;
   private:
      double array[100];
};

int main() {
  JMatrix mat;
  mat.m = 4;
  mat.n = 4;
  std::cout<<mat.m;
  
} 


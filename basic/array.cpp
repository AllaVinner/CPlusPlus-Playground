#include<iostream>

using namespace std;

int main()
{
    // Initiate
    // type name[] = {values,}
    // Set size of
    int nums[] = {5,23,123};
    cout << nums[0];
    
    // Abstract declargion
    int nums2[4];
    nums2[1] = 111;
    cout << nums2[1] << endl;
    // multi dimensional array
    // Only the last dimension can be implicitly 
    // Determined

    // Pointers
    // Pointers contains memmory adresses
    // Var decleration
    int num = 15;
    // Pointer decleaationg
    int* pnum = &num;

    // Variable memory address: &var
    cout << "Num adress: " << &num << " pnum val " << pnum << endl;
    
    // Dereffering a pointer
    // Aka grab the value: *pnum
    // Can't derefference variables.
    cout << "Num adress: " << num << " pnum val " << *pnum << endl;
    
}
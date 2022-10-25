#include<iostream>

using namespace std;

int main()
{
    /* Logic
    && - and (don't check the secound if the first is false)
    || - or
    ! - negation
    > - greater then
    < - lesser then
    == - equal
    <= - lesser or equal to
    */
    bool isBest = true;
    bool isCool = false;
    // If statement
    if(isBest && isCool){
        cout << "Yes you are the best" << endl;
    } else if(!isCool){
        cout << "you are not cool" << endl;
    } else{
        cout << "You are still very good" << endl;
    }

    // Switch statements
    int dayOfWeek = 0;
    string day;
    switch (dayOfWeek)
    {
    case 0:
        day = "Monday";
        break;
    
    case 1:
        day = "Tuesday";
        break;
    
    case 2:
        day = "Wednesday";
        break;
    default:
        day = "Nothing";
        break;
    }
    cout << " THe day is " << day << endl;

}

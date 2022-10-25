#include <iostream>
using namespace std;
int main()
{
    string s = "My string";
    int s_len = s.length();
    char s3 = s[3];
    // Find character or string
    // starting at index 3, and 
    // returning the index where the
    // string is found.
    cout << s.find("ing", 3);
    // Grabs a substring starting at 8
    // and continue for a lengt of 5
    string sub = s.substr(8,5);
    cout << s3; // prints 's'
}
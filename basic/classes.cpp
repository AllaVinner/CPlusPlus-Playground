#include<iostream>

using namespace std;

class Book{

    public:
        string title;
        string author;
        int pages;   
        // Constructor
        // Can make multiple constructors 
        //      but with different input arguments.
        Book(string atitle, string aauthor, int apages)
        {
            title = atitle;
            author = aauthor;
            pages = apages;
        }
};

int main()
{
    Book mio("Mio min mio","Astrid Lindgren", 132);
    mio.pages = 1320;

    cout << mio.title << endl;
}
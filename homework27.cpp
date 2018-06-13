#include <iostream>
#include <string>
using namespace std;

bool search(string & txt, string phrase1, string phrase2)
{
    size_t foundPosition1 = txt.find(phrase1);
    size_t foundPosition2 = txt.find(phrase2);

    if(foundPosition1 != string::npos && foundPosition2 != string::npos)
        return true;
    else
        return false;
}

void printScore(bool found)
{
    if(found)
        cout << "Found" << endl;
    else
        cout << "Not found" << endl;
}

int main()
{
    string txt = "Homework from C++ course (http://cpp0x.pl) - the best C++ course in web!";
    printScore(search(txt, "ome", "course"));
    printScore(search(txt, "ome", "taki"));
    printScore(search(txt, "C++", "cpp0x"));
    printScore(search(txt, "C#", "cpp0x"));
}

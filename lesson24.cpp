#include <iostream>
using namespace std;

void print(int & iValue)
{
    cout << "Wartosc liczby wynosi: " << iValue << endl;
    iValue += 10;
    cout << "Wartosc liczby wynosi: " << iValue << endl;
}

int main()
{
    int iMyValue = 7;
    cout << "Nasza liczba = " << iMyValue << endl;
    print(iMyValue);
    cout << "Nasza liczba = " << iMyValue << endl;
    return 0;
}

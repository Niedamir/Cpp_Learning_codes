#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void inputPerson(string & name, string & surname, int & age)
{
    int isValid;
    bool ageValidation = false;

    cout << "Wprowadz imie: ";
    getline(cin, name);

    cout << "Wprowadz nazwisko: ";
    getline(cin, surname);

    do
    {
        cout << "WprowadŸ wiek: ";
        cin >> isValid;
        if(cin.good() && isValid > 0 && isValid < 101)
        {
            age = isValid;
            ageValidation = true;
        } //if
        else
            cout << "Wprowadzono niepoprawna wartosc. Sprobuj ponownie." << endl;
        cin.clear();
        cin.sync();
    }while(ageValidation == false);
    cout << endl;
}

void printPerson(string & name, string & surname, int & age)
{
    cout << "Imie: " << name << endl;
    cout << "Nazwisko: " << surname << endl;
    cout << "Wiek: " << age << endl << endl;
}

int main ()
{
    string name[2];
    string surname[2];
    int age[2];
    for(int i = 0; i < 2; i++)
         inputPerson(name[i], surname[i], age[i]);

    for( int i = 0; i < 2; i++ )
         printPerson( name[i], surname[i], age[i]);

    return 0;
}

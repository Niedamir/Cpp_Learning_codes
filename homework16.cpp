#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand(time( NULL ));
    int random = (rand() % 1000) + 1;
    int input;
    int attempts = 1;

    cout << "Zgadnij jaka liczba z przedzia³u od 1 do 1000 zostala wylosowana: ";

    do
    {
        cin >> input;
        if(cin.good())
        {
            if(input == random)
            {
                cout << "BRAWO! Wylosowana liczba to " << random << ". Twoja odpowiedz jest poprawna!" << endl;
                cout << "Liczba prob: " << attempts;
            }
            else
            {
                cout << "Nie, to nie jest wylosowana liczba. Probuj dalej" << endl;
                attempts++;
            };
        }
        else
        {
            cout << "Podano nieprawidlowa wartosc. Prosze podac liczbe z przedzialu 1 - 1000" << endl;
        }
        cin.clear();
        cin.sync();

    }while(input != random);

    return 0;
}

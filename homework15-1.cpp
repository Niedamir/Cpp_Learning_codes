#include <iostream>
using namespace std;

int main()
{
    int number; //zmienna przechowujaca wartosc liczbowa
    bool numberCheck; //zmienna okreslajaca, czy wpisano liczbe

    do
    {
        cout << "Podaj liczbe: ";
        cin.clear(); //czyszczenie bufora wejsciowego
        cin.sync();
        cin >> number;

        if(cin.good())  //funkcja if zostanie wykonana, jezeli zmienna otrzyma odpowiednia wartosc - tutaj liczbe
        {
            numberCheck = true;
            cout << "Twoja liczba to: " << number << endl;
        }
        else
        {
            numberCheck = false;
            cout << "BLAD! To nie jest liczba." << endl << endl;
        }
        cin.clear(); //czyszczenie bufora wejsciowego
        cin.sync();

    } while(numberCheck == false); //petla zostanie wykonana ponownie, jezeli zmienna numberCheck nie zawiera true
    // petla do..while wykonuje sie, dopoki warunek w while zwraca wartosc true;
    // zwrocenie wartosci false (tutaj true=false) petla sie zakonczy

    return 0;
}

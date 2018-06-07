#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

float numberInput(float number)
{
    bool numberCheck = false;
    do
    {
        cout << "Podaj liczbe: ";
        cin >> number;
        if(cin.good())
        {
            numberCheck = true;
            cout << "Podana liczba " << number << " zostala zapisana." << endl;
        }
        else
        {
            cout << "BLAD! Podano nieprawidlowa wartosc." << endl;
        };
        cin.clear();
        cin.sync();
    }while(numberCheck != true);
    return number;
}

float add(float x, float y)
{
    return x + y;
}

float subtract(float x, float y)
{
    return x - y;
}

float multiplication(float x, float y)
{
    return x * y;
}

float quotient(float x, float y)
{
    do
    {
        if(y == 0)
        {
            cout << "BLAD! Dzielenie przez 0 nie jest mozliwe." << endl;
            y = numberInput(y);
        }
    }while(y == 0);
    return x / y;
}

void menutext()
{
    cout << "===============================" << endl;
    cout << "||       KALKULATOR 2.0      ||" << endl;
    cout << "===============================" << endl << endl << endl;

    cout << "Wybierz operacje, ktora chcesz wykonac" << endl;
    cout << "[1] Podaj liczby" << endl;
    cout << "[2] Suma" << endl;
    cout << "[3] Roznica" << endl;
    cout << "[4] Iloczyn" << endl;
    cout << "[5] Iloraz" << endl;
    cout << "[0] Zakoncz" << endl;
}

int main()
{
    bool end = false;
    float x = 0;
    float y = 0;
    float wynik = 0;
    int menu;

    do
    {
        menutext();
        cin >> menu;
        switch(menu)
        {
        case 1:
            x = numberInput(x);
            y = numberInput(y);
            cout << "X = " << x << endl;
            cout << "Y = " << y << endl << endl;
            break;
        case 2:
            wynik = add(x, y);
            cout << "Suma podanych liczb wynosi: " << wynik << endl;
            break;
        case 3:
            wynik = subtract(x, y);
            cout << "Roznica podanych liczb wynosi: " << wynik << endl;
            break;
        case 4:
            wynik = multiplication(x, y);
            cout << "Iloczyn podanych liczb wynosi: " << wynik << endl;
            break;
        case 5:
            wynik = quotient(x, y);
            cout << "Iloraz podanych liczb wynosi: " << wynik << endl;
            break;
        case 0:
            end = true;
            break;
        default:
            cout << "BLAD! Podano nieprawidlowy kod operacji." << endl;
            break;
        }
        cin.clear();
        cin.sync();
        cout << endl;
    }while(end != true);

    return 0;
}

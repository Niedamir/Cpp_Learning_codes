#include <iostream>
using namespace std;

int main()
{
    int x = 1;
    int y = 1;
    int menu;
    bool intCheck;
    bool exit = false;

    cout << "====================" << endl;
    cout << "|  KALKULATOR 1.0  |" << endl;
    cout << "====================" << endl << endl;
//WYBOR DZIALANIA

    do
    {
        cout << endl << "x = " << x << "   y = " << y << endl;
        cout << "Wpisz odpowiednia cyfre, aby wybrac dzialanie:" << endl;
        cout << "[0] Zmien dane" << endl << "[1] Suma" << endl << "[2] Roznica" << endl << "[3] Iloczyn" << endl << "[4] Iloraz" << endl << "[5] Zakoncz" << endl;
        cin >> menu;

        if(cin.good() && menu >= 0 && menu < 6)
        {
            switch(menu)
            {
                case 0:
//WPISYWANIE X DO KONSOLI
                    do
                    {
                        cout << "Podaj x: ";
                        cin >> x;
                        if(cin.good())
                        {
                            intCheck = true;
                        }
                        else
                        {
                            intCheck = false;
                            cout << "BLAD! nie podano liczby!" << endl;
                        }
                        cin.clear();
                        cin.sync();
                    } while(intCheck == false);
//WPISYWANIE Y DO KONSOLI
                    do
                    {
                        intCheck = false;
                        cout << "Podaj y rozne od 0: ";
                        cin >> y;
                        if(cin.good() && y != 0)
                        {
                            intCheck = true;
                            cin.clear();
                            cin.sync();
                        }
                        else
                        {
                            intCheck = false;
                            cout << "BLAD! wprowadzono nieprawidlowa wartosc!" << endl;
                        }
                        cin.clear();
                        cin.sync();
                    } while(intCheck == false);
                    break;
                case 1:
                    cout << "x + y = " << x + y << endl;
                    break;
                case 2:
                    cout << "x - y = " << x - y << endl;
                    break;
                case 3:
                    cout << "x * y = " << x * y << endl;
                    break;
                case 4:
                    cout << "x / y = " << x / y << endl;
                    break;
                case 5:
                    exit = true;
                    break;
            }
        }
        else
        {
            cout << "BLAD! Wprowadzono nieznany kod polecenia." << endl;
        }
        cin.clear();
        cin.sync();
    }while(exit == false);

    return 0;
}

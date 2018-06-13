#include <iostream>
#include <string>
using namespace std;

string convert(string & txt)
{
    bool check = false;
    size_t charPosition;

///remove < char
    do
    {
        charPosition = txt.find("<");
        if(charPosition != string::npos)
        {
            txt.erase(charPosition, 1);
            txt.insert(charPosition, "[");
        }
        else
        {
            check = true;
        }
    }while(check != true);

///remove > char
    check = false;
    do
    {
        charPosition = txt.find(">");
        if(charPosition != string::npos)
        {
            txt.erase(charPosition, 1);
            txt.insert(charPosition, "]");
        }
        else
        {
            check = true;
        }
    }while(check != true);

///remove additional spaces
    check = false;
    do
    {
        charPosition = txt.find("  ");
        if(charPosition != string::npos)
        {
            txt.erase(charPosition, 2);
            txt.insert(charPosition, " ");
        }
        else
        {
            check = true;
        }
    }while(check != true);

    return txt;
}

int main()
{
    string txt = "<b>this  is </b>     testing   text          <b> :)";
    cout << convert(txt);
    return 0;
}

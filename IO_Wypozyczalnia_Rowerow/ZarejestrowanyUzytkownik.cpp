#include "ZarejestrowanyUzytkownik.h"
using namespace std;

string login;
string haslo;
string Email;
int NumerTelefonu;
bool flaga = false;
int i = 0;
string BazaLoginow[50];

void Logowanie()
{
    cout << "Podaj login: ";
    cin >> login;
    while (i < 50)
    {
        if (BazaLoginow[i] != login)
        {
            i++;
        }
        else if (BazaLoginow[i] == login)
        {
            cout << "Podany login jest poprawny!" << endl;
            flaga = true;
        }

    }

    if (flaga == false)
    {
        cout << "Podany login jest niepoprawny!" << endl;
        Logowanie();
    }
    cout << endl << "Podaj haslo: ";
    cin >> haslo;

}
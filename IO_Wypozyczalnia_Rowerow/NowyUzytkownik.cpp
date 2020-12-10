#include "NowyUzytkownik.h"


string login;
string haslo;
int i = 0;
string BazaLoginow[50];


void Rejestracja()
{
    cout << "Podaj login: ";
    cin >> login;
    while (i < 50)
    {
        if (BazaLoginow[i] == login)
        {
            cout << "Podany login juz istnieje!" << endl;
            Rejestracja();
        }
        else if (BazaLoginow[i] != login)
            i++;
    }
    BazaLoginow[i + 1] = login;
    cout << endl << "Podaj haslo: ";
    cin >> haslo;
}
};

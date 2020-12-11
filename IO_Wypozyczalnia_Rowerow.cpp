#include <iostream>
#include <stdlib.h>
#include "Administrator.h"
#include "DzialReklamacji.h"
#include "Dzieciecy.h"
#include "Finalizacja.h"
#include "Gorski.h"
#include "Miejski.h"
#include "NowyUzytkownik.h"
#include "Platnosc.h"
#include "Pracownik.h"
#include "Reklamacja.h"
#include "Rezerwacja.h"
#include "Rower.h"
#include "Serwisant.h"
#include "Uzytkownik.h"
#include "ZarejestrowanyUzytkownik.h"
using namespace std;



void main()
{
	int x;
	cout << ">>>>>>>>>>>>>>>>> Wypozyczalnia Rowerow <<<<<<<<<<<<<<<<<<<" << endl << endl << endl;
	cout << "W ofercie mamy: " << endl << "- rower miejski juz od 5.99 zl/h" << endl << "- rower gorski juz od 9.99 zl/h" << endl;
	cout << "- rower dzieciecy juz od 4.49 zl/h" << endl << endl;
	cout << "Zarejestruj sie, aby zobaczyc wiecej -->" << endl << endl << flush;
	system("PAUSE");
	system("cls");
	cout << "Wybierz opcje: " << endl;
	cout << "1 -> Zarejestruj sie " << endl;
	cout << "2 -> Zaloguj sie" << endl;
	cin >> x;
	cout << flush;
	system("PAUSE");
	system("cls");

	if (x == 1)
	{
		NowyUzytkownik nowyUzytkownik1;
		nowyUzytkownik1.Rejestracja();

	}
	else if (x == 2)
	{
		ZarejestrowanyUzytkownik zarejestrowanyUzytkwnik1;
		zarejestrowanyUzytkwnik1.Logowanie();
	}
	else
	{
		cout << "Wybierz 1 lub 2!" << endl;
		return;
	}

}
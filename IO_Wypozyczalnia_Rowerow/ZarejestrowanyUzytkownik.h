#pragma once
#include<iostream>
#include"Uzytkownik.h"
using namespace std;

class ZarejestrowanyUzytkownik : public Uzytkownik
{
    friend class Rezerwacja;
    friend class Finalizacja;

    string login;
    string haslo;
    string Email;
    int NumerTelefonu;
    bool flaga = false;
    int i = 0;
    string BazaLoginow[50];

public:
    void Logowanie();
    void Wypo¿yczenie();
    void Zwrot();
    void Rezerwacja();
};

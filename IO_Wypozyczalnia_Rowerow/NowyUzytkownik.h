#pragma once
#include<iostream>
#include"Uzytkownik.h"
using namespace std;

class NowyUzytkownik : public Uzytkownik
{
public:
    string login;
    string haslo;
    int i = 0;
    string BazaLoginow[50];

    void Rejestracja();
};


#pragma once
#include<iostream>
#include"Pracownik.h"
#include"Reklamacja.h"
using namespace std;

class DzialReklamacji :Pracownik
{
    Reklamacja ListaReklemacji[];
public:
    void Rozpatrywanie();
    void Uznanie();
    void Odrzucenie();
};


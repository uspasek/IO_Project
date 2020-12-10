#pragma once
#include<iostream>
#include"Pracownik.h"
using namespace std;

class Serwisant :Pracownik
{
public:
    void Naprawa();
    void Konserwacja();
    void PrzegladTechniczny();
};


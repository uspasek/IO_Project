#pragma once
#include<iostream>
using namespace std;


class Platnosc  // bez klasy finalizacja nie mo�na u�y� tek klasy
{
    bool status;
    string RodzajPlatnosci;
public:
    void PlatnoscKarta();
    void PlatnoscGotowka();
    void WyborMetodyPlatnosci();
};


#pragma once
#include "Protivnik.h"
class Azdaja : public Protivnik
{
    double S; // Sjajnost krljušti
    double K; // Simetrija krila
    double T; // Temperatura vatre
    double U; // Snaga udarca

public:
    Azdaja(const std::string& ime, double S, double K, double T, double U);

    void izracunajKoeficijente() override;
};


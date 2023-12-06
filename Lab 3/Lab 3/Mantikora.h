#pragma once
#include "Protivnik.h"
class Mantikora : public Protivnik
{
    double I; // Intenzitet crvene boje
    double K; // Simetrija rogova
    double O; // Stepen efikasnosti otrova
    double U; // Efektivna snaga ugriza

public:
    Mantikora(const std::string& ime, double I, double K, double O, double U);

    void izracunajKoeficijente() override ;
};


#pragma once
#include "Protivnik.h"
class BeliZec :
    public Protivnik
{
    double C; // Intenzitet bele boje
    double W; // Nivo znanja koriš?enja wakizashi

public:
    BeliZec(const std::string& ime, double C, double W);

    void izracunajKoeficijente() override;
};


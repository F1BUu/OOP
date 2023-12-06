#pragma once
#include <vector>
#include <iostream>
#include "Protivnik.h"
#include <algorithm>
using namespace std;
class Vitez
{
    vector<Protivnik*> neprijatelji;

public:
    Vitez() {
        // Kreiranje 777 aždaja, 777 mantikora i 777 belih ze?eva
        for (int i = 0; i < 777; ++i) {
            Mantikora new Mantikora("Mantikora_" + to_string(i), 0.6, 0.8, 0.7, 0.9);
            new BeliZec("BeliZec_" + to_string(i), 0.9, 0.5);
            new Azdaja("Aždaj_" + to_string(i), 0.5, 0.7, 0.8, 0.9);
        }
    }

    ~Vitez() {
        for (Protivnik* protivnik : neprijatelji) {
            delete protivnik;
        }
    }

    void sortirajPoB() {
        std::sort(neprijatelji.begin(), neprijatelji.end(),
            [](const Protivnik* a, const Protivnik* b) {
                return a->getB() > b->getB();
            });
    }

    void sortirajPoM() {
        std::sort(neprijatelji.begin(), neprijatelji.end(),
            [](const Protivnik* a, const Protivnik* b) {
                return a->getM() > b->getM();
            });
    }

    void prikaziSortirano() const {
        for (const Protivnik* protivnik : neprijatelji) {
            protivnik->prikaziAtribute();
        }
    }
};


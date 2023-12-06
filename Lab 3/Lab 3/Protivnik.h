#pragma once
#include <iostream>
using namespace std;
class Protivnik
{
protected:
	int B; // Koeficijent borbene sposobnosti
	int M; // Koeficijent magicne privlacnosti
    string ime;
public:
    Protivnik(const string& ime) : ime(ime), B(0.0), M(0.0) {}

    virtual void izracunajKoeficijente() = 0;

    void prikaziAtribute() const {
        std::cout << "Ime: " << ime << ", B: " << B << ", M: " << M << std::endl;
    }

    double getB() const { return B; }
    double getM() const { return M; }
};


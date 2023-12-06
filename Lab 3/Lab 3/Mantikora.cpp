#include "Mantikora.h"

Mantikora :: Mantikora(const std::string& ime, double I, double K, double O, double U)
    : Protivnik(ime), I(I), K(K), O(O), U(U) {
    izracunajKoeficijente();
}

void Mantikora ::izracunajKoeficijente(){
    B = 0.5 * (U + O) * K;
    M = I * (K + O + U) / 3;
}
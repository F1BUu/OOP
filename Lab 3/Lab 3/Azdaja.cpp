#include "Azdaja.h"

Azdaja ::Azdaja(const std::string& ime, double S, double K, double T, double U)
    : Protivnik(ime), S(S), K(K), T(T), U(U) {
    izracunajKoeficijente();
}

void Azdaja::izracunajKoeficijente() {

    B = T * (1 + K) * U;
    M = S * K;
}

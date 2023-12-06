#include "BeliZec.h"

BeliZec :: BeliZec (const std::string& ime, double C, double W)
        : Protivnik(ime), C(C), W(W) {
        izracunajKoeficijente();
}
void BeliZec ::izracunajKoeficijente(){
    B = W;
    M = C;
}
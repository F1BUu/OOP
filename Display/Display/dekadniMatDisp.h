#pragma once
#include "Display.h";
class DekadniMatDisp : public Display {
private:
    int matrica[4][7];  // Primer matrice, možete prilagoditi veli?inu prema potrebi

public:
    void ucitajIzFajla(const char* filename);

    void set(int value);

    void increment();

    void show();

private:
    void ucitajMatricuZaCifru();
};
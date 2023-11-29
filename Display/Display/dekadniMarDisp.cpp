#include "dekadniMatDisp.h"
#include <iostream>
#include <fstream>
void DekadniMatDisp::ucitajIzFajla(const char* filename) {
    ifstream fajl (filename);

    if (fajl.is_open()) {
        for (int i = 0; i < 4; ++i) {
            for (int j = 0; j < 7; ++j) {
                fajl >> matrica[i][j];
            }
        }

        fajl.close();
    }
    else {
        cout << "Greska prilikom otvaranja fajla." << endl;
    }
}

void DekadniMatDisp::set(int value) {
    if (value >= 0 && value < 10) {
        cifra = value;
        ucitajMatricuZaCifru();
    }
    else {
        cout << "Nevalidna vrednost za postavljanje cifre." << endl;
    }
}

void DekadniMatDisp:: increment(){
    cifra = (cifra + 1) % 10;
    ucitajMatricuZaCifru();
}

void DekadniMatDisp:: show(){
    Display::show();  // Poziv metode show iz osnovne klase

    cout << "Matrica piksela:" << endl;
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 7; ++j) {
            cout << matrica[i][j] << " ";
        }
        cout << endl;
    }
}

void DekadniMatDisp:: ucitajMatricuZaCifru() {
    // Implementacija prema zahtevima zadatka
    // Možete prilagoditi logiku prema stvarnim slikama cifara
    // U ovom primeru se koristi jednostavna matrica kao primer
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 7; ++j) {
            matrica[i][j] = (i + j) % 2;  // Primer postavljanja vrednosti u matricu
        }
    }
}
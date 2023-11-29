#include "Display.h"
#include <iostream>
using namespace std;

void Display :: set(int value) {
    if (value >= 0 && value < 16) {
        cifra = value;
    }
    else {
        cout << "Nevalidna vrednost za postavljanje cifre." << endl;
    }
}

void Display:: reset() {
    cifra = 0;
}

void Display::increment() {
    cifra = (cifra + 1) % 16;
}

void  Display::show() {
    cout << "Hex cifra na displeju: " << cifra << endl;
}
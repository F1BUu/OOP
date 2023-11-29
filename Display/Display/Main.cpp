#include "Display.h"
#include"dekadniMatDisp.h"
int main() {
    Display displej;
    DekadniMatDisp dekadniMatricniDisplej;

    // Sekvenca akcija za objekat displej
    displej.set(9);
    const int k = 50001;
    for (int i = 0; i < k; ++i) {
        displej.increment();
    }
    displej.reset();
    for (int i = 0; i < k; ++i) {
        displej.increment();
        if ((i + 1) % 2018 == 0) {
            displej.show();
        }
    }

    // Sekvenca akcija za objekat dekadniMatricniDisplej
    dekadniMatricniDisplej.set(9);
    for (int i = 0; i < k; ++i) {
        dekadniMatricniDisplej.increment();
    }
    dekadniMatricniDisplej.reset();
    for (int i = 0; i < k; ++i) {
        dekadniMatricniDisplej.increment();
        if ((i + 1) % 2018 == 0) {
            dekadniMatricniDisplej.show();
        }
    }

    return 0;
}
#include "Vitez.h"
#include "Protivnik.h"

int main() {
    Vitez vitez;

    std::cout << "Sortirano po B:" << std::endl;
    vitez.sortirajPoB();
    vitez.prikaziSortirano();

    std::cout << "\nSortirano po M:" << std::endl;
    vitez.sortirajPoM();
    vitez.prikaziSortirano();

    return 0;
}
#include "Picture.h";
#include "Kolekcija.h";
#include <iostream>
using namespace std;


Kolekcija :: Kolekcija(int maxSize) : maxImages(maxSize), currentSize(0) {
    images = new Picture[maxImages];
}
// Destruktor
Kolekcija :: ~Kolekcija() {
    delete[] images;
}

// Funkcija za dodavanje slike u kolekciju
void Kolekcija::AddPicture(const Picture& picture) {
    if (currentSize < maxImages) {
        images[currentSize] = picture;
        currentSize++;
    }
    else {
        cout << "Kolekcija je puna. Nemoguce dodati sliku." << endl;
    }
}

// Operator za prikazivanje elemenata kolekcije
ostream& operator<<(ostream& os, const Kolekcija& collection) {
    for (int i = 0; i < collection.currentSize; i++) {
        os << "Slika " << i + 1 << ":" << endl;
        os << collection.images[i] << endl;
    }
    return os;
}


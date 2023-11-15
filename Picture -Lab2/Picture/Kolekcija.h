#pragma once
#include "Picture.h";
class Kolekcija {
private:
    int maxImages;
    int currentSize;
    Picture* images;

public:
    // Konstruktor
    Kolekcija(int maxSize);

    // Destruktor
    ~Kolekcija();

    // Funkcija za dodavanje slike u kolekciju
    void AddPicture(const Picture& picture);

    // Operator za prikazivanje elemenata kolekcije
    friend std::ostream& operator<<(std::ostream& os, const Kolekcija& collection);
};
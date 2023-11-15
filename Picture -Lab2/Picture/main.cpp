#include "Picture.h";
#include "Kolekcija.h";
int main() {

	Picture a(2, 2);
	Picture b(2, 2);
	Kolekcija kolekcija(5);
	cout << "Uneti elemente matrice"<< endl;
	cin >> a;

	cout << "Uneti elemente matrice" << endl;
	cin >> b;
	cout << "Matrica: " << endl;


	cout << a<<endl<<endl;
	a.Brightnes(5);
	cout << a << endl<< endl;
	cout << "Dimenzija je: " << a.Dim() << endl;
	cout << "flipovana verzija: " << endl;
	a.flip();
	cout << endl;
	a.Resize(20, 20);
	cout << " a ima :" << a.Boje()<< " boja" << endl;
	cout << a << endl << endl;
	kolekcija.AddPicture(a);
	kolekcija.AddPicture(b);
	a.Preklop(b);
	cout << "posle preklopa" << endl << a << endl;

	Picture c = a;
	cout << "sadrzaj Kolekcije:" << endl << kolekcija;

}

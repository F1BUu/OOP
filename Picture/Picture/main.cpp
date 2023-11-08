#include "Picture.h";
int main() {

	Picture a(2, 2);
	cout << "Uneti elemente matrice"<< endl;
	cin >> a;
	cout << "Matrica: " << endl;

	cout << a<<endl<<endl;
	a.Brightnes(5);
	cout << a << endl<< endl;
	cout << "Dimenzija je: " << a.Dim() << endl;
	cout << "flipovana verzija: " << endl;
	a.flip();
	cout << endl;
	a.Resize(20, 20);
	cout << a << endl << endl;



}

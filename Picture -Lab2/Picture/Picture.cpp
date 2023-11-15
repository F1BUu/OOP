#include "Picture.h"
#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

Picture::Picture() {
	m = n = 0;
		a = 0;

}

Picture::Picture(int brVrsta, int brKolona)
	: n(brVrsta), m(brKolona)
{
	a = new int* [n];

	for (int i = 0; i < n; i++)
		a[i] = new int[m];
}

Picture::~Picture()
{
	if (a != 0)
	{
		for (int i = 0; i < n; i++)
			delete[] a[i];

		delete[] a;
	}
}
Picture::Picture(const Picture& mat)
	: n(mat.n), m(mat.m)
{
	a = new int* [n];

	for (int i = 0; i < n; i++)
		a[i] = new int[m];

	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			a[i][j] = mat.a[i][j];
}

void Picture::Brightnes(int s) {
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			a[i][j] += s;
			if (a[i][j] < 0) a[i][j] = 0;
			else if (a[i][j] > 512) a[i][j] = 512;
		}
	}
}

istream& operator>>(istream& ulaz, Picture& v)
{
	for (int i = 0; i < v.n; i++)
		for (int j = 0; j < v.m; j++)
			ulaz >> v.a[i][j];

	return ulaz;
}

ostream& operator<<(ostream& izlaz, const Picture& v)
{
	for (int i = 0; i < v.n; i++)
	{
		for (int j = 0; j < v.m; j++)
			izlaz << v.a[i][j] << " ";

		izlaz << endl;
	}
	return izlaz;
}
void Picture :: Resize(int nWidth, int nHeight) {
	double nXFactor = (double)n / (double)nWidth;
	double nYFactor = (double)m / (double)nHeight;

	int** newMatrix = new int* [nHeight];
	for (int i = 0; i < nHeight; i++) {
		newMatrix[i] = new int[nWidth];
	}

	for (int y = 0; y < nHeight; y++) {
		for (int x = 0; x < nWidth; x++) {
			int srcX = (int)(floor(x * nXFactor));
			int srcY = (int)(floor(y * nYFactor));
			newMatrix[y][x] = a[srcY][srcX];
		}
	}

	// Osloba?amo prethodnu matricu i postavljamo novu
	for (int i = 0; i < m; i++) {
		delete[] a[i];
	}
	delete[] a;

	a = newMatrix;
	n = nWidth;
	m = nHeight;
}
void Picture::flip() {

	for (int i = 0; i < n; i++)
	{
		for (int j = m-1; j >= 0; j--)
			cout << a[i][j] << " ";

		cout << endl;
	}
}
void Picture::Preklop(const Picture& mat)
{
	int lowN, lowM;
	(n > mat.n) ? lowN = mat.n : lowN = n;
	(m > mat.m) ? lowM = mat.m : lowM = m;
	for (int i = 0; i < lowN; i++)
		for (int j = 0; j < lowM; j++)
			a[i][j] = (a[i][j] + mat.a[i][j])/2 ;
}

// ????
int Picture::Boje() {
	int jedinstven[512];
	jedinstven[0] = this->a[0][0];
	int br=1;
	int k;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++) {
			k = 0;
			while (jedinstven[k] != a[i][j] && k<br)
			{
				k++;
			}
			if (k==br)
			{
				jedinstven[br++] = a[i][j];
			}
		
		}		
	}
	delete[] jedinstven;
	return br;
}

// idk
// Operator za dodelu jednog objekta klase Picture drugom
Picture& Picture :: operator=(const Picture& other) {
	if (this != &other) { // Samododela ne treba da se obavi
		// Osloba?amo resurse trenutnog objekta
		for (int i = 0; i < n; i++) {
			delete[] a[i];
		}
		delete[] a;

		// Kopiramo dimenzije
		m = other.m;
		n = other.n;

		// Alociramo novu matricu i kopiramo sadržaj
		a = new int* [n];
		for (int i = 0; i < n; i++) {
			a[i] = new int[m];
			for (int j = 0; j < m; j++) {
				a[i][j] = other.a[i][j];
			}
		}
	}
	return *this;
}


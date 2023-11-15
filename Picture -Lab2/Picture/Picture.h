#pragma once
#include <iostream>;
using namespace std;
class Picture
{
	int** a;
	int m;	// broj kolona
	int n;	//broj vrsta
public:
	Picture();
	Picture(int brVrsta, int brKolona);
	Picture(const Picture& mat);
	void Brightnes(int s);
	virtual ~Picture();
	void Resize(int nWidth, int nHeight);
	void flip();
	void Preklop(const Picture& mat);
	int Boje();
	
	inline int Dim() { return m, n; }
	
	friend istream& operator>>(istream& ulaz, Picture& v);
	friend ostream& operator<<(ostream& ulaz, const Picture& v);
	Picture& operator=(const Picture& other);

};
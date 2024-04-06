#include <iostream>
using namespace std;

int main() {
	int panjang,lebar,tinggi,vb,lpb,kb;
	
	cout <<"================" << endl;
	cout <<"Menghitung Balok" << endl;
	cout <<"================" << endl;
	
	cout <<"Masukan panjang:";
	cin>>panjang;
	cout <<"Masukan lebar  :";
	cin>>lebar;
	cout <<"Masukan tinggi :";
	cin>>tinggi;
	
	vb = panjang*lebar*tinggi;
	lpb = 2*(panjang*lebar+panjang*tinggi+lebar*tinggi);
	kb = 4*(panjang+lebar+tinggi);
	
	cout <<"Volume balok adalah  : " << vb << endl;
	cout <<"Luas permukaan balok : " << lpb << endl;
	cout <<"Keliling balok       : " << kb << endl;
}

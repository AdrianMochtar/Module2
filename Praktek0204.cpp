#include <iostream>
using namespace std;

int main(){
	double luasrumah = 42;
	double lantaiP = 193*1215;
	double luas1box = lantaiP*8/1000000;
	double jumlahboxparket,biayaparket,biayapemasangan,totalbiaya;
	jumlahboxparket = luasrumah/luas1box;
	biayaparket = jumlahboxparket * 500;
	biayapemasangan = luasrumah * 20;
	totalbiaya = biayaparket+biayapemasangan;
	cout << "Luas Rumah 		: "<<luasrumah<<" m2"<<endl;
	cout << "Luas 1 box parket	: "<<luas1box<<" m2"<<endl;
	cout << "Jumlah box parket 	: "<<jumlahboxparket<<endl;
	cout << "Biaya Parket(Rp)	: "<< biayaparket<<endl;
	cout << "Biaya Pasang(Rp) 	: "<< biayapemasangan<<endl;
	cout << "Total Biaya(Rp)		: "<< totalbiaya<<endl;
	
	
	

}

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

}

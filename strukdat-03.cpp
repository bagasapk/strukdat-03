/*Nama :Anugerah Prima Bagaskara
NPM : 140810180006
Tanggal Buat : 13/03/2019
Deskripsi : Membuat segi empat menggunakan pointer
*/
#include <iostream>
#include <math.h>
using namespace std;

typedef struct{
	float panjang;
	float lebar;
}segiempat;

void input(segiempat *s){
	cout<<"Input panjang : ";cin>>s->panjang;
	cout<<"Input lebar : ";cin>>s->lebar;
}
float keliling(segiempat s){
	return 2*(s.lebar)+2*(s.panjang);
}
float luas(segiempat s){
	return s.lebar*s.panjang;
}

float diagonal(segiempat s){
	return sqrt(pow(s.lebar,2)+pow(s.panjang,2));
}
void print(segiempat s){
	cout<<"Panjang : "<<s.panjang<<endl;
	cout<<"Lebar : "<<s.lebar<<endl;
	cout<<"Keliling : "<<keliling(s)<<endl;
	cout<<"Luas : "<<luas(s)<<endl;
	cout<<"diagonal : "<<diagonal(s)<<endl;
}

int main(){
	segiempat *sg;
	sg= new segiempat;
	input(sg);
	print(*sg);
}

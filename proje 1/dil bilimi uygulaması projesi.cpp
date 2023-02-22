#include <iostream>
#include <string.h>
#include <cstdlib>
#include <cstring>
using namespace std;
int palindrom();

int palindrom(){               //palindrom kelime olup olmad���n� bulan kod dizisi.
	int uzunluk,sayac;
	char *kelime;
	kelime=(char*)malloc(20*sizeof(char)); //dizi tan�mlamas� yap�ld�.
	cout<<"hesaplanacak kelimeyi yaziniz: ";
	cin>>kelime;
	uzunluk=strlen(kelime);  //kullan�c�dan al�nankelimenin uzunlu�u hesaplan�p de�i�kene at�ld�.
	for(int i=0;i<uzunluk;i++) {  //kelimenin uzunlu�u kadar d�nen d�ng� olu�turuldu.
		if(kelime[i] != kelime [uzunluk-i-1]){  // kelimenin harfleri bir ba�tan bir  sondan olmak �zere kar��la�t�r�l�yor farkl� olan harf varsa palindrom de�ildiir.
			sayac=1;    //harf farkl�l���n� anlamak i�in saya� artt�r�l�yor.
			break;
		}
	}
	if(sayac==1)
	cout<<"palindrom kelime de�il"; //saya� artt�r�lm��sa palindrom de�il uyar�s� veriyor.
	else
	cout<<"palindrom kelime";
}


int terscevir(){          //girilen kelimeyi tersten yazan kod dizisi.
char *kelime;
int uzunluk;
cout<<"ters cevrilicek kelimeyi giriniz: ";
cin>>kelime;
uzunluk=strlen(kelime);  //kullan�c�dan al�nan kelimenin uzunlu�u al�n�r.
for(int i=uzunluk-1; i>=0; i--){ //uzunluktan bir eksik say�dan d�ng� ba�lat�l�r. bunun nedeni diziler 0. indisten ba�lams�d�r.
	cout<<kelime[i];  //d�ng�deki say� dizinin indisini belirtir ve bu ekrana yazd�rt�l�r.
}
}


int sesliharf(){            //sesli ve sessiz harfleri bulan kod dizisi.
char sesli[20],sessiz[20];     //dinamik bir dizi de�il.
char sesliharfler[5]={'a','e','i','o','u'}; //ingliz alfabesinde sesli olan 5 harfi girdim.
char kelime[20];
int uzunluk,sayac,sayacsesli=0,sayacsessiz=0;
cout<<"ayrilacak olan kelimeyi giriniz: ";
cin>>kelime;
uzunluk=strlen(kelime);
for(int i=0;i<uzunluk;i++){
	sayac=0;
	for(int j=0;j<5;j++){
		if(kelime[i]==sesliharfler[j]){  //kullan�c�dan al�ann kelime s�rayla test edillir. sesli harfler dizisinden herhangi bir elemana e�itse
			sesli[sayacsesli]=kelime[i]; //e�it olan harf sesli harfler i�in olu�turulan diziye atan�r.
			sayac++;  //sesli harf oldu�unu anlamam�z i�in saya� artt�r�l�r.
			sayacsesli++;  //buradaki saya� ise sesli harf dizisinin eleman say�s�n� belirlemk i�indir.
		}
	}
	if(sayac==0){  //e�er sesli harf dizisiyle e�lenen harf yoksa saya� artm��t�r yani harf sessiz harftir.
		sessiz[sayacsessiz]=kelime[i];  //dizideki o anki harf al�n�p sessiz harfler i�in olu�turulan diziye eklenir.
		sayacsessiz++;  //sessiz harfler i�in olu�turulan dizinin eleman�n� belirlemek i�in bu saya� kullan�l�r.
	}
}
cout<<"\nsesli harfler: ";
cout<<sesli;

cout<<"\nsessiz harfler: ";
cout<<sessiz;
	
}


int buyukkucuk(){     //girilen kelimenin harflerini bir  b�y�k bir k���k �eklinde ��kt� veren kod dizisi.
int uzunluk;
char kelime[20];
cout<<"kelimeyi giriniz: ";
cin>>kelime;
uzunluk=strlen(kelime);
int i=0;

for(i=0;i<uzunluk;i++){
	if(i%2==0){  //d�ng�deki de�i�ken o ad�mda ka��nc�  harfte oldu�unu anlamak i�in ikiye b�l�n�r. kalan 0'a e�it ise �ift s�rada oldu�unu anlar�z.
		kelime[i]=kelime[i] -32;  //harfi b�y�k hale getirip yeniden yazar�z..
	}
}
cout<<kelime;
}


int main(){
	int secim,uzunluk=0,sayac;
	while(secim!=0){
		cout<<"\n\n";
		cout<<"***dil bilimi uygulamasi***\n";
		cout<<"1-palindrome hesapla\n";
		cout<<"2-kelimeyi ters cevir\n";
		cout<<"3-sesli sessiz harf\n";
		cout<<"4-buyuk kucuk harf\n";
		cout<<"0-cikis\n";
		cout<<"secim: ";
		cin>>secim;
		switch(secim){
			case 1:
				palindrom();
				break;
				case 2:
					terscevir();
					break;
					case 3:
						sesliharf();
						break;
						case 4:
							buyukkucuk();
							break;
							case 0:
								break;
								
							
					
		}
	}
}











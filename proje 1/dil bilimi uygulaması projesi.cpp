#include <iostream>
#include <string.h>
#include <cstdlib>
#include <cstring>
using namespace std;
int palindrom();

int palindrom(){               //palindrom kelime olup olmadýðýný bulan kod dizisi.
	int uzunluk,sayac;
	char *kelime;
	kelime=(char*)malloc(20*sizeof(char)); //dizi tanýmlamasý yapýldý.
	cout<<"hesaplanacak kelimeyi yaziniz: ";
	cin>>kelime;
	uzunluk=strlen(kelime);  //kullanýcýdan alýnankelimenin uzunluðu hesaplanýp deðiþkene atýldý.
	for(int i=0;i<uzunluk;i++) {  //kelimenin uzunluðu kadar dönen döngü oluþturuldu.
		if(kelime[i] != kelime [uzunluk-i-1]){  // kelimenin harfleri bir baþtan bir  sondan olmak üzere karþýlaþtýrýlýyor farklý olan harf varsa palindrom deðildiir.
			sayac=1;    //harf farklýlýðýný anlamak için sayaç arttýrýlýyor.
			break;
		}
	}
	if(sayac==1)
	cout<<"palindrom kelime deðil"; //sayaç arttýrýlmýþsa palindrom deðil uyarýsý veriyor.
	else
	cout<<"palindrom kelime";
}


int terscevir(){          //girilen kelimeyi tersten yazan kod dizisi.
char *kelime;
int uzunluk;
cout<<"ters cevrilicek kelimeyi giriniz: ";
cin>>kelime;
uzunluk=strlen(kelime);  //kullanýcýdan alýnan kelimenin uzunluðu alýnýr.
for(int i=uzunluk-1; i>=0; i--){ //uzunluktan bir eksik sayýdan döngü baþlatýlýr. bunun nedeni diziler 0. indisten baþlamsýdýr.
	cout<<kelime[i];  //döngüdeki sayý dizinin indisini belirtir ve bu ekrana yazdýrtýlýr.
}
}


int sesliharf(){            //sesli ve sessiz harfleri bulan kod dizisi.
char sesli[20],sessiz[20];     //dinamik bir dizi deðil.
char sesliharfler[5]={'a','e','i','o','u'}; //ingliz alfabesinde sesli olan 5 harfi girdim.
char kelime[20];
int uzunluk,sayac,sayacsesli=0,sayacsessiz=0;
cout<<"ayrilacak olan kelimeyi giriniz: ";
cin>>kelime;
uzunluk=strlen(kelime);
for(int i=0;i<uzunluk;i++){
	sayac=0;
	for(int j=0;j<5;j++){
		if(kelime[i]==sesliharfler[j]){  //kullanýcýdan alýann kelime sýrayla test edillir. sesli harfler dizisinden herhangi bir elemana eþitse
			sesli[sayacsesli]=kelime[i]; //eþit olan harf sesli harfler için oluþturulan diziye atanýr.
			sayac++;  //sesli harf olduðunu anlamamýz için sayaç arttýrýlýr.
			sayacsesli++;  //buradaki sayaç ise sesli harf dizisinin eleman sayýsýný belirlemk içindir.
		}
	}
	if(sayac==0){  //eðer sesli harf dizisiyle eþlenen harf yoksa sayaç artmýþtýr yani harf sessiz harftir.
		sessiz[sayacsessiz]=kelime[i];  //dizideki o anki harf alýnýp sessiz harfler için oluþturulan diziye eklenir.
		sayacsessiz++;  //sessiz harfler için oluþturulan dizinin elemanýný belirlemek için bu sayaç kullanýlýr.
	}
}
cout<<"\nsesli harfler: ";
cout<<sesli;

cout<<"\nsessiz harfler: ";
cout<<sessiz;
	
}


int buyukkucuk(){     //girilen kelimenin harflerini bir  büyük bir küçük þeklinde çýktý veren kod dizisi.
int uzunluk;
char kelime[20];
cout<<"kelimeyi giriniz: ";
cin>>kelime;
uzunluk=strlen(kelime);
int i=0;

for(i=0;i<uzunluk;i++){
	if(i%2==0){  //döngüdeki deðiþken o adýmda kaçýncý  harfte olduðunu anlamak için ikiye bölünür. kalan 0'a eþit ise çift sýrada olduðunu anlarýz.
		kelime[i]=kelime[i] -32;  //harfi büyük hale getirip yeniden yazarýz..
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











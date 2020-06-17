#include <iostream>
#include <math.h>//matematik iþlemleri için gerekli kütüphanemiz

using namespace std;

double hesapla(int a, int b, string c){
    double sonuc = 0;
    int sayac = 0;
    if (c == "t"){
        while(a<=b){
            sonuc=sonuc+a;
            a++;
        }
    }
    else if (c == "o"){
        while(a<=b){
            sayac++;
            sonuc=sonuc+a;
            a++;
        }
        sonuc = sonuc/sayac;
    }
    else if (c == "u"){
        while(a<=b){
                if ((a%3==0 && a%2==1)|| a == 1){
                    sonuc = sonuc + (a*a);
                }
                a++;
        }
    }
    else if (c == "k"){
        while(a<=b){
                if (a%2==0){
                    sonuc = sonuc + sqrt(a);
                }
                a++;
        }
    }
    return sonuc;
}

int main()
{
    int baslangic, bitis;
    string islem;

    cout << "t girilirse iki sayi arasindaki sayilar toplanacak" << endl;
    cout << "o girilirse iki sayi arasindaki sayilarin ortalamasi bulunacak" << endl;
    cout << "u girilirse iki sayi arasindaki 3 ile tam bolunen tek sayilarin kareleri toplami bulunacak" << endl;
    cout << "k girilirse iki sayi arasindaki cift sayilarin karekoklerinin toplami hesaplanir\n" << endl;

    cout << "Islem yapmak istediginiz sayi araligini ve islem tercihinizi giriniz :" << endl;
    cin >> baslangic;
    cin >> bitis;
    cin.ignore();
	getline(cin, islem);

	double sonuc = hesapla(baslangic, bitis, islem);

	cout << "Islem sonucu = " << sonuc << endl;

    return 0;
}


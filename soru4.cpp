#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Turkish"); // türkçe karakter uyumu için
    string isim[5];
    string soyisim[5];
    int vize[5];
    int finale[5];
    double ortalama[5]; //herkesin bireysel ortalamasý için
    double sinifOrt;
    string durum[5];
// öðrenci bilgilerini aldik
    for(int i = 0; i < 5; i++) {
        cout << i+1 <<" . siradaki ogrenci bilgilerini giriniz: \n";
        cout << "Isim: ";
        cin>> isim[i];
        cout << "Soyisim: ";
        cin>> soyisim[i];
        cout << "Vize Notu: ";
        cin >> vize[i];
        cout << "Final Notu: ";
        cin >> finale[i];
        cout << "\n";
    }
//herkesin bireysel ortalamasi icin hesaplama
    for(int i=0 ; i < 5; i++){
            ortalama[i] = (vize[i]*0.4)+(finale[i]*0.6);
    }
//sinif ortalamasi icin hesaplama
    double toplam = 0;
    for(int i=0 ; i < 5; i++){
            toplam = toplam + ortalama[i];
    }
    sinifOrt = toplam / 5;
// gecti kaldi durumu
    for(int i=0 ; i < 5; i++){
            if(finale[i] >= 50 && ortalama[i]>sinifOrt){
                durum[i] = "GECTI";
            }
            else{
                durum[i] = "KALDI";
            }
    }

    cout << "Sinif ortalamasi = ";
	cout << sinifOrt << ", buna gore herbir ogrencinin gecti-kaldi durumu asagida verilmektedir. \n";

	for(int i=0 ; i < 5; i++){
        	cout << isim[i] << " "<< soyisim[i]  << " : Ortalamasi= " << ortalama[i]<< ", DURUMU = " << durum[i]<<endl;
    }
    return 0;
}

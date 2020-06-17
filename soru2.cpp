#include <iostream>
#include <stdlib.h> //rand fonksiyonu için
#include <time.h> //srand fonksiyonu için

using namespace std;

int main()
{

int sayi, tahmin, sayac = 1;

cout << "Tahmin ettiginiz sayiyi giriniz : ";
cin >> sayi;

srand(time(0));
tahmin = rand() % 100 + 1;

while(sayi != tahmin){
    if(sayi > tahmin){
        cout << "Daha kucuk bir sayi giriniz.\n" << endl;
        sayac ++;
        cout << "Tahmin ettiginiz sayiyi giriniz : ";
        cin >> sayi;
    }
    else if(sayi < tahmin){
        cout << "Daha buyuk bir sayi giriniz.\n" << endl;
        sayac ++;
        cout << "Tahmin ettiginiz sayiyi giriniz : ";
        cin >> sayi;
    }
}

cout << "Tebrikler!!!" << endl;
cout << "Bilgisayarin urettigi " << tahmin << " sayisini " << sayac << " adimda buldunuz.";

return 0;
}

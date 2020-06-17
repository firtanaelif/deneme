#include <iostream>
#include <math.h>

using namespace std;

int seriyiHesapla(int x){
    int sonuc = 0;

    for(int i = 0; i <= x; i++){
        sonuc = sonuc + (pow(i,2) * pow(i+1,2));
    }
    return sonuc;
}

int main()
{
    int n;
    cout << "Islem yapilacak sayilarin ust sinirini giriniz: ";
    cin >> n; // n -> ust sinir

    cout << "Sonuc = " << seriyiHesapla(n);

    return 0;
}

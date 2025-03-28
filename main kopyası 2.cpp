//
//  main.cpp
//  Veri Tipleri ve Aritmetik Operatörler
//
//  Created by DAĞLI on 7.03.2025.
//

#include <iostream>
#include <cmath> // fmod functionu için gerekli

using namespace std;

int main() {
    int tamSayi;
    double ondalikSayi;

    // Kullanıcıdan giriş alıyoruz
    cout << "Bir tam sayı giriniz: ";
    cin >> tamSayi;
    cout << "Bir ondalıklı sayı giriniz: ";
    cin >> ondalikSayi;

    // İşlemleri gerçekleştiriyoruz
    double toplam = tamSayi + ondalikSayi;
    double cikarma = tamSayi - ondalikSayi;
    double carpma = tamSayi * ondalikSayi;
    double bolme = tamSayi / ondalikSayi;
    double modAlma = fmod(tamSayi, ondalikSayi);

    // Sonuçları ekrana yazdırıyoruz
    cout << "Toplama: " << toplam << endl;
    cout << "Çıkarma: " << cikarma << endl;
    cout << "Çarpma: " << carpma << endl;
    cout << "Bölme: " << bolme << endl;
    cout << "Mod alma: " << modAlma << endl;

    return 0;
}

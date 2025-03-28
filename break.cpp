//
//  main.cpp
//  break2
//
//  Created by DAĞLI on 27.03.2025.

// Kullanıcıdan sürekli sayi isteyen ve alınan sayıların toplamı 100'e ulaştığı zaman döngüyü kıran c++ kodu?

#include <iostream>
using namespace std;

int main() {
    int toplam = 0;
    int sayi;

    while (true) {
        cout << "Bir sayi giriniz: ";
        cin >> sayi;

        toplam += sayi;

        if (toplam >= 100) {
            cout << "Girdiğiniz sayıların toplamı 100'e ulaştı,döngü kırılıyor.." << endl;
            break;
        }
    }

    cout << "Toplam: " << toplam << "\n";

    return 0;
}

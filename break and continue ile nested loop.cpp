//
//  main.cpp
//  Break and Continue ile Nested Loop
//
//  Created by DAĞLI on 21.03.2025.
//

#include <iostream>
using namespace std;

int main() {
    int ustSinir, asalSayilar = 0;

    cout << "Bir üst sınır değeri giriniz: ";
    cin >> ustSinir;
    cout << "Asal sayılar: ";
    for (int i = 2; i <= ustSinir; i++) {
        bool asal = true;

        for (int j = 2; j < i; j++) {
            if (i % j == 0) {
                asal = false;
                break;
            }
        }
        if (asal) {
            cout << i << " ";
            asalSayilar++;
        }
    }
    cout << "\n" << "Toplam asal sayı: " << asalSayilar << "\n";
}

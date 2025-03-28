//
//  main.cpp
//  the foreach loop
//
//  Created by DAĞLI on 21.03.2025.
//

#include <iostream>
using namespace std;

int main() {
    int sayilar[5];
    int ciftSayilar = 0, tekSayilar = 0;

    cout << "5 tamsayı giriniz: " << "\n";

    for (int i = 0; i < 5; i++) {
        cin >> sayilar[i];
    }
    for (int sayi : sayilar) {
        if (sayi % 2 == 0) {
            ciftSayilar++;
        } else {
            tekSayilar++;
        }
    }
    cout << "Dizideki Çift sayıların adedi: " << ciftSayilar << "\n";
    cout << "Dizideki Tek sayıların adedi: " << tekSayilar << "\n";
}

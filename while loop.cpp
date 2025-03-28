//
//  main.cpp
//  while loop
//
//  Created by DAĞLI on 21.03.2025.
//

#include <iostream>
using namespace std;

int main() {
    int sayi, sonuc = 0, a, kalan;

    cout << "Bir sayı giriniz: ";
    cin >> sayi;

    a = sayi;

    while (a > 0) {
        kalan = a%10;
        sonuc += kalan * kalan * kalan;
        a /= 10;
    }
    cout << (sonuc == sayi ? "Armstrong sayısıdır." : "Armstrong sayısı değildir.") << endl;
}


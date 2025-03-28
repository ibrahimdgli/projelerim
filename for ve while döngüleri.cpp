//
//  main.cpp
//  for ve while döngüleri
//
//  Created by DAĞLI on 21.03.2025.
//

#include <iostream>
using namespace std;

int main() {
    int sayi;

    cout << "Bir sayı giriniz: ";
    cin >> sayi;
    
    int faktoriyelFor = 1;
    for (int i = 1; i <= sayi; i++) {
        faktoriyelFor *= i;
    }
    int faktoriyelWhile = 1, j = 1;
    while (j <= sayi) {
        faktoriyelWhile *= j;
        j++;
    }
    cout << "For döngüsü ile faktöriyel: " << faktoriyelFor << endl;
    cout << "While döngüsü ile faktöriyel: " << faktoriyelWhile << endl;

    if (faktoriyelFor == faktoriyelWhile) {
        cout << "Sonuçlar eşit mi? Evet" << "\n";
    } else {
        cout << "Sonuçlar eşit mi? Değil " << "\n";
    }
}


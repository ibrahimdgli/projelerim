//
//  main.cpp
//  break and continue
//
//  Created by DAĞLI on 21.03.2025.
//

#include <iostream>
using namespace std;

int main() {
    int toplam = 0;

    for (int i = 1; i <= 100; i++) {
        if (i % 3 == 0 || i % 5 == 0) {
            continue;
        }
        toplam += i;
    }

    cout << "3'e ve 5'e tam bölünmeyen sayıların toplamı: " << toplam << "\n";
}


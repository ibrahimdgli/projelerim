//
//  main.cpp
//  tekboyutludiziler
//
//  Created by DAĞLI on 27.03.2025.

// Tek boyutlu bir dizideki sayıların ortalamasını nasıl hesaplarız?

#include <iostream>
using namespace std;

int main() {
    int sayilar[3] = {10, 20, 30};
    int a = 0;

    for (int i = 0; i < 3; i++) {
        a += sayilar[i];
    }

    cout << "Ortalama: " << a / 3 << "\n";

    return 0;
}

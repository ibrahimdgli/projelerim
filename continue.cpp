//
//  main.cpp
//  continue
//
//  Created by DAĞLI on 27.03.2025.

// Sıfırı atlayarak diğer sayıları nasıl toplarız?

#include <iostream>
using namespace std;

int main() {
    int sayilar[4] = {9, 0, 4, 5};
    int toplam = 0;

    for (int i = 0; i < 4; i++) {
        if (sayilar[i] == 0) continue;
        toplam += sayilar[i];
    }

    cout << "toplam: " << toplam << endl;

    return 0;
}

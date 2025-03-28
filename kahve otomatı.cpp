//
//  main.cpp
//  kahve otomatı
//
//  Created by DAĞLI on 10.03.2025.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    int sayi;
    using namespace std;
    cout << "1-Espresso, 2-Latte, 3-Mocha, 4-Türk Kahvesi. Seçiminiz nedir? Numara ile belirtiniz" << endl;
    cin >> sayi;
    
    switch (sayi) {
        case 1:
            cout << "Espressonun 30 saniyeye hazır olacaktır ücret 85 TL dir.\n";
            break;
        case 2:
            cout << "Latteniz 3 dakikaya hazır olacaktır ücret 70 TL dir.\n";
            break;
        case 3:
            cout << "Mochanız 5 dakikaya hazır olacaktır ücret 75 TL dir.\n";
            break;
        case 4:
            cout << "Türk kahveniz 5 dakikaya hazır olacaktır ücret 65 TL dir.\n";
            break;
        default:
            cout << "Geçersiz seçim.\n";
    }
}

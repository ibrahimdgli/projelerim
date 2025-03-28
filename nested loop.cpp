//
//  main.cpp
//  nested loop
//
//  Created by DAĞLI on 21.03.2025.
//

#include <iostream>
using namespace std;

int main() {
    int a, sayi = 1;

    cout << "Floyd Üçgeni için satır sayısı giriniz: ";
    cin >> a;

    for (int i = 1; i <= a; i++) {
        for (int j = 1; j <= i; j++) {
            cout << sayi << " ";
            sayi++;
        }
        cout << "\n";
    }
}


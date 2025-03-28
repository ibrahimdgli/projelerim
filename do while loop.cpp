//
//  main.cpp
//  do while loop
//
//  Created by DAĞLI on 21.03.2025.
//

#include <iostream>
using namespace std;

int main() {
            int sayi, adet = 0;
           double toplam = 0;

           cout << "Sayı giriniz (Çıkış için negatif bir sayı girin) " << "\n";
 
           while (true) {
             cin >> sayi;
             if (sayi < 0) break;

           toplam += sayi;
            adet++;
        }

         if (adet == 0) {
             cout << "Hiç pozitif sayı girilmedi." << "\n";
         } else {
             cout << "Girilen pozitif sayıların ortalaması: " << toplam / adet << "\n";
        }
}

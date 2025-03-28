//
//  main.cpp
//  tekrar
//
//  Created by DAĞLI on 28.03.2025.
//

#include <iostream>
#include <ctime>

using namespace std;

int main(){
  int rastgeleSayi = 0, girilenSayi = 0, denemeSayisi = 0;

  srand((unsigned int) time(NULL));

  rastgeleSayi = rand() % 1000;
    cout << "rastgele sayimiz şudur: " << rastgeleSayi;
  do {
    cout << "Sayi giriniz (0-99): ";
    cin >> girilenSayi;

   
    denemeSayisi++;
      if (denemeSayisi==10 && girilenSayi!=rastgeleSayi) {
          cout << "Deneme hakkınız doldu başaramadınız, rezilsiniz!!!";
          break;
      }
      else {
          if (rastgeleSayi < girilenSayi) {
            cout << "Daha kucuk deger girin." << endl; }
          else if(rastgeleSayi > girilenSayi) {
            cout << "Daha BUYUK deger girin." << endl;
          }
      }
  } while(rastgeleSayi != girilenSayi);

    if (rastgeleSayi==girilenSayi) {
        cout << rastgeleSayi << " sayisi " << denemeSayisi << " denemede bulundu.";
    }

  return 0;
}

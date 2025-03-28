//
//  main.cpp
//  string işlemleri ve getline
//
//  Created by DAĞLI on 7.03.2025.
//

#include <iostream>
#include <string>

using namespace std;

int main() {
    string ad, soyad, meslek;
    
    // Kullanıcıdan bilgileri çek
    cout << "Adınızı giriniz: ";
    getline(cin, ad);
    cout << "Soyadınızı giriniz: ";
    getline(cin, soyad);
    cout << "Mesleğinizi giriniz: ";
    getline(cin, meslek);
    
    // Tanıtım cümlesi
    string tanitim = "Merhaba, benim adım " + ad + " " + soyad + " ve ben bir " + meslek + "im.";
    
    // Ad ve soyadın toplam uzunluğu
    int toplamUzunluk = ad.length() + soyad.length();
    
    // Çerçeve
    int cerceveGenislik = tanitim.length() + 4;
    string cerceve = string(cerceveGenislik, '*');
    
    // Özet
    cout << cerceve << endl;
    cout << "* " << tanitim << " *" << endl;
    cout << "* Ad ve Soyadın Toplam Uzunluğu: " << toplamUzunluk << " *" << endl;
    cout << cerceve << endl;
    
    return 0;
}

//
//  main.cpp
//  deneme
//
//  Created by DAĞLI on 13.03.2025.
//

#include <iostream>
using namespace std;

bool kontrol_et(string metin){
    for(int i=0; i < metin.size(); i++){
        if(isdigit(metin[i]) == false) return false;
    }
    return true;
}

int main() {
    string giris;
    cout << "Bir tamsayı giriniz: ";
    cin >> giris;
   
    while(giris != "0"){
        if(kontrol_et(giris)){
            cout << "Girilen sayi:" << giris << endl;
        }else{
            cout << "Lütfen bir tamsayı giriniz." << endl;
        }
       
        cout << "Sayi: ";
        cin >> giris;
    }
   
    return 0;
}

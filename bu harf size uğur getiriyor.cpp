//
//  main.cpp
//  bu harf size uğur getiriyor
//
//  Created by DAĞLI on 10.03.2025.
//

#include <iostream>
#include <string>
using namespace std;
int main(int argc, const char * argv[]) {
     string cümle;
     char harf;
     int a = 0;
     int b = 0;
     cout << "Lütfen bir cümle giriniz:\n";
     getline(cin, cümle);
     cout << "Lütfen bir harf giriniz:";
     cin >> harf;
     do {
         if (cümle[b] == harf) {
             a++;
         }
         b++;
     } while (b < cümle.length());
     cout << "Cümlede " << harf << " harfi " << a << " tane var, bu harf size uğur getiriyor!\n";
}


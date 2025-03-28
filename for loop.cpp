//
//  main.cpp
//  for loop
//
//  Created by DAĞLI on 21.03.2025.
//

#include <iostream>
using namespace std;

int main() {
    int a = 0, b = 1, sınır;
    
    cout << "Bir sınır değeri giriniz: ";
    cin >> sınır;
    
    cout << "Fibonacci sayıları: " << a << " " << b << " ";
    
    while (a + b <= sınır) {
        int next = a + b;
        cout << next << " " << "\n";
        a = b;
        b = next;
    }
}

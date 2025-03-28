//
//  main.cpp
//  kıyafet önerisi
//
//  Created by DAĞLI on 10.03.2025.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    using namespace std;
    int sıcaklık;
    cout << "Bir sıcaklık değeri giriniz:\n";
    cin >> sıcaklık;
    if (sıcaklık < 0) {
        cout << "Kalın mont giyin!\n";
    } else if (sıcaklık <= 15) {
        cout << "Hırka yeterli olabilir.\n";
    } else if (sıcaklık <= 25) {
        cout << "Hafif bir ceket iyi olur.\n";
    } else {
        cout << "Tişört zamanı!\n";
    }
}

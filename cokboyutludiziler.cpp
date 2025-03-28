//
//  main.cpp
//  cokboyutludiziler
//
//  Created by DAĞLI on 27.03.2025.

// İki boyutlu bir diziyi kullanarak matrisin devriğini nasıl oluştururuz?

#include <iostream>
using namespace std;

int main() {
    int matrix[2][2] = {{1, 2}, {3, 4}};
    int devrik[2][2];

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            devrik[j][i] = matrix[i][j];
        }
    }

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << devrik[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}

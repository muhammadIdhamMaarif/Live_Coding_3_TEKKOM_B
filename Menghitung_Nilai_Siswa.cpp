#include <iostream>
#include <string>
#include <vector>
using namespace std;

/*

    Muhammad Idham Ma'arif
    Teknik Komputer
    245150300111024

*/

int main() {
    int panjangArray;
    cin >> panjangArray;
    vector<vector<int>> angka(panjangArray, vector<int>(panjangArray));
    for (int i = 0; i < panjangArray; i++) {
        for (int j = 0; j < panjangArray; j++) {
            cin >> angka[i][j];
        }
    }

    int totalPenjumlahan = 0;
    for (int i = 0; i < panjangArray; i++) {
        totalPenjumlahan += angka[i][i];
    }
    cout << totalPenjumlahan << '\n';
    return 0;
}

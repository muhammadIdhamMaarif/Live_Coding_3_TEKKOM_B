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
    int panjang, lebar;
    cin >> panjang >> lebar;
    if (panjang != lebar) {
        cout << "ERROR" << '\n';
        return 0;
    }
    vector<vector<int>> angka(panjang, vector<int>(lebar));

    for (int i = 0; i < panjang; i++) {
        for (int j = 0; j < lebar; j++) {
            cin >> angka[i][j];
        }
    }

    int cekSama = angka[0][0];
    bool adaYangSalah = false;
    for (int i = 0; i < panjang; i++) {
        if (cekSama != angka[i][i]) {
            adaYangSalah = true;
        }
    }
    string jawaban = adaYangSalah ? "TIDAK SAMA" : "SAMA";
    cout << jawaban << endl;
    return 0;
}

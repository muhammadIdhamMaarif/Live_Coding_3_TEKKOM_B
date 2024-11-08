#include <iostream>
#include <string>
using namespace std;

/*

    Muhammad Idham Ma'arif
    Teknik Komputer
    245150300111024

*/

void cetakNama(string elemen, int jumlahUlang);

int main() {
    string elemen;
    int jumlahUlang;
    getline(cin, elemen);
    cin >> jumlahUlang;
    cetakNama(elemen, jumlahUlang);
    return 0;
}

void cetakNama(string elemen, int jumlahUlang) {
    for (int i = 0; i < jumlahUlang; i++) {
        cout << elemen << '\n';
    }
}

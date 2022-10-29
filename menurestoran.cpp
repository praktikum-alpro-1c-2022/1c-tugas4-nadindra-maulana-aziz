#include <iostream>
using namespace std;

int main () {
    char pilihan;

    cout << "\n           Menu restoran MC'Yahud !        " << endl;
    cout << "=============================================" << endl;
    cout << "1. Nasi Goreng Informatika     Rp. 5.000,-" << endl;
    cout << "2. Nasi Soto Ayam Internet     Rp. 7.000,-" << endl;
    cout << "3. Gado-gado Diskrit           Rp. 4.500,-" << endl;
    cout << "4. Bubur Ayam LAN              Rp. 4.000,-" << endl;
    cout << "=============================================" << endl;

    cout << "\nMasukkan pilihan anda : " << endl;
    cin >> pilihan;

    switch (pilihan)
    {
        case '1':
            cout << "pilihan No 1. Nasi Goreng Informatika Rp. 5.000";
            break;
        case '2':
            cout << "pilihan No 2. Nasi Soto Ayam Internet Rp. 7.000";
            break;
        case '3':
            cout << "pilihan No 3. Gado-gado Diskrit Rp. 4.500";
            break;
        case '4':
            cout << "pilihan No 4. Bubur Ayam LAN Rp. 4.000";
            break;
        default:
            cout << "Anda harus memesan !!";
    }

    return 0;
}

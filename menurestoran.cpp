#include <iostream>
using namespace std;

int main () {
    char pilihan;

    cout << "Selamat datang di restoran MC'Yahud !" << endl;
    cout << "\nBerikut adalah menu yang ada :" << endl;
    cout << "1. Nasi Goreng Informatika Rp. 5.000" << endl;
    cout << "2. Nasi Soto Ayam Internet Rp. 7.000" << endl;
    cout << "3. Gado-gado Diskrit Rp. 4.500" << endl;
    cout << "4. Bubur Ayam LAN Rp. 4.000" << endl;

    cout << "\nMasukkan pilihan anda : " << endl;
    cin >> pilihan;

    switch (pilihan)
    {
        case '1':
            cout << "\npilihan No 1. Nasi Goreng Informatika Rp. 5.000";
            break;
        case '2':
            cout << "\npilihan No 2. Nasi Soto Ayam Internet Rp. 7.000";
            break;
        case '3':
            cout << "\npilihan No 3. Gado-gado Diskrit Rp. 4.500";
            break;
        case '4':
            cout << "\npilihan No 4. Bubur Ayam LAN Rp. 4.000";
            break;
        default:
            cout << "\nAnda harus memesan !!";
    }

    return 0;
}

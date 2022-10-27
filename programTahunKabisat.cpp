#include <iostream>
using namespace std;

int main() {
    int tahunLahir;

    cout << "Selamat datang di program pengecekan tahun kabisat !" << endl;
    cout << "Untuk mengecek apakah tahun lahirmu kabisat atau bukan kita perlu tahun lahirmu !" << endl;

    cout << "\nMasukkan tahun lahirmu : " << endl;
    cin >> tahunLahir;

    if (tahunLahir%4 == 0) {
        cout << "\nAnda termasuk orang yang lahir di tahun kabisat !";
    } else {
        cout << "\nTahun lahir anda tidak termasuk tahun kabisat !";
    }

    return 0;
}

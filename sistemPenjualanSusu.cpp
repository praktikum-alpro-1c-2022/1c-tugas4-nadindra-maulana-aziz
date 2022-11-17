#include <iostream>
using namespace std;

int main(){
    int kodeSusu, jumlahBeli;
    char Uk;
    int jumHarga = 0;

    cout << "Selamat datang di penjualan susu !" << endl;
    cout << "Berikut adalah susu dan ukuran yang tersedia : " << endl;
    cout << "1. Dancow (B/S/K) \n2. Indomilk (B/S/K) \n3. Sustacal (B/S/K)" << endl;

    cout << "\nMasukkan pilihan anda (1/2/3) : " << endl;
    cin >> kodeSusu;
    cout << "Masukkan ukuran yang anda inginkan (B/S/K) :" << endl;
    cin >> Uk;
    cout << "Masukkan jumlah yang ingin anda beli : " << endl;
    cin >> jumlahBeli;

    if (kodeSusu == 1) {
        if (Uk == 'B') {
            jumHarga += 10000;
        } else if (Uk == 'S'){
            jumHarga += 4250;
        } else {
            jumHarga += 2100;
        }
    } else if (kodeSusu == 2) {
        if (Uk == 'B') {
            jumHarga += 8500;
        } else if (Uk == 'S'){
            jumHarga += 4000;
        } else {
            jumHarga += 2025;
        }
    } else {
        if (Uk == 'B') {
            jumHarga += 17000;
        } else if (Uk == 'S'){
            jumHarga += 14500;
        } else {
            jumHarga += 8300;
        }
    }

    float hargafinal = jumHarga * jumlahBeli;

    cout << "\nAnda membeli kode susu " << kodeSusu << " dengan ukuran " << Uk << " jumlah beli " << jumlahBeli << ", jumlah harga yang harus anda bayar adalah Rp. " << hargafinal << endl;

    return 0;
}

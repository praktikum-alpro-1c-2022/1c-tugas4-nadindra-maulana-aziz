#include <iostream>
using namespace std;

int main () {
    string username, password;

    // Input username & pass
    cout << "Anda akan login ke akun anda \n" << endl;
    cout << "Silakan masukkan username anda :" << endl;
    cin >> username;
    cout << "Sekarang masukkan password anda :" << endl;
    cin >> password;

    if (username == "Nadindra" || password == "nadindra2004") {
        if (password != "nadindra2004") {
            cout << "Username sesuai, password tidak sesuai !";
        } else if (username != "Nadindra") {
            cout << "Password sesuai, username tidak sesuai !";
        } else {
            cout << "Username dan password sesuai, login berhasil";
        }
    } else {
        cout << "Username dan password tidak sesuai !";
    }

    return 0;
}

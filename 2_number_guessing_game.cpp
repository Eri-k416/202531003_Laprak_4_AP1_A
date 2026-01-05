#include <cstdlib> // for rand(), srand(), RAND_MAX
#include <ctime> // for time()
#include <iostream>
using namespace std;

int generateNumber() {
    return (rand() % 10);
}

int main() {
    srand(time(0));

    int random_number = generateNumber();
    int guess;
    int attempts = 1;

    cout << "TEBAK ANGKA SUPAYA PINTU DUNGEON TERBUKA HAHAHA\n\n";

    while (guess != random_number && attempts <= 3) {
        cout << "Percobaan " << attempts << "/3 - Tebak : ";
        cin >> guess;

        if (guess != random_number) {
            cout << "KAU SALAH! ULANGI!!!!\n";
        }

        attempts += 1;
    }

    if (guess == random_number) {
        cout << "\nSELAMAT, ANDA DAPAT MEMASUKI DUNGEON AVARTHAX.\n";
    } else {
        cout << "\nSAYANG SEKALI, COBA DI HARI KEMUDIAN WAHAI PENGEMBARA. (Tebakan yang benar adalah " << random_number << ")\n";
    }
    
    return 0;
}
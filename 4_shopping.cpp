#include <iostream>
using namespace std;

int main() {
    int final_price = 0;
    int item_count = 0;
    int latest= 0;
    int discount = 0;
    
    cout << "Masukkan deretan harga barang (masukkan harga 0 untuk exit) : \n";

    do {
        cout << "Harga : ";
        cin >> latest;

        final_price += latest;
        if (latest > 0) {
            item_count++;
        }
    } while (latest > 0);

    cout << "Jumlah barang : " << item_count << endl;
    cout << "Total barang bersih : " << final_price << endl;
    if (final_price >= 100000) {
        discount = final_price / 10;
    }
    cout << "Diskon : " << discount << endl;
    cout << "Total barang setelah diskon : " << (final_price-discount) << endl;
    
    return 0;
}
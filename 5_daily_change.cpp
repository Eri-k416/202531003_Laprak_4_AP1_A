#include <iostream>
using namespace std;

int main() {
    int days;
    int change;
    int final_change_amount = 0;

    cout << "Masukkan jumlah hari: " << endl;
    cin >> days;

    for (int i = 1; i <= days; i++) {
        do {
            cout << "Uang saku di hari ke-" << i << " : ";
            cin >> change;

            if (change < 0) {
                cout << "Masukkan tidak valid, ulangi.\n";
            }
        } while (change < 0);
        final_change_amount += change;
    }

    cout << "Total : " << final_change_amount << endl;

    return 0;
};

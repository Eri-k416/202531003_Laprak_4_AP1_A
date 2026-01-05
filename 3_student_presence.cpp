#include <iostream>
using namespace std;

int main() {
    int student_amount;
    float present = 0;
    float absent = 0;

    cout << "Masukkan jumlah mahasiswa: ";
    cin >> student_amount;

    for (int i = 1; i <= student_amount; i++) {
        int choice = -1;
        while (choice != 1 && choice != 0) {
            cout << "Mahasiswa " << i << " (1=hadir, 0=tidak) : ";
            cin >> choice;

            switch (choice) {
                case 1:
                    present += 1;
                    break;
                case 0:
                    absent += 1;
                    break;
                default:
                    cout << "Input salah, ulangi." << endl;
                    break;
            }
        }
    }

    cout << "Hadir : " << present << endl;
    cout << "Tidak hadir : " << absent << endl;
    if (present == student_amount) {
        cout << "Hadir semua." << endl;
    } else if (absent == student_amount) {
        cout << "Tidak Hadir semua." << endl;
    } else {
        cout << "Rasio hadir/tidak hadir : " << (present/student_amount * 100) << "%"<< endl;
    }
    
    return 0;
    
}
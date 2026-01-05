#include <iostream>
using namespace std;

void printFibbonaciSequence(int n) {
    if (n == 0) {
        cout << "0";
        return;
    }
    if (n == 1) {
        cout << "0 1";
        return;
    }

    // dynamic programming (i think this is bottom up approach idk)
    int dp0 = 0;
    int dp1 = 1;
    cout << "0 ";
    cout << "1 ";

    for (int i = 2; i <= n; i++) {
        int next = dp0 + dp1;
        cout << (next) << " ";
        dp0 = dp1;
        dp1 = next;
    }
}

void printFibbonaciSequenceTill(int m) {
    if (m == 0) {
        cout << "0";
        return;
    }
    if (m == 1) {
        cout << "0 1 1";
        return;
    }

    // dynamic programming approach
    int dp0 = 1;
    int dp1 = 1;
    int next = 2;
    cout << "0 1 1 ";

    while (next <= m) {
        next = dp0 + dp1;
        if (next <= m) {
            cout << (next) << " ";
        }
        dp0 = dp1;
        dp1 = next;
    }

}

bool inputCheck(int input) {
    return input >= 0;
}

int main() {
    string choice;
    int input;
    cout << "=== FIBBONACI GENERATOR ===" << endl;
    cout << "1) n suku\n";
    cout << "2) sampai nilai m\n";
    cout << "3) exit\n";
    while (true) {
        cout << "Pilih: ";
        cin >> choice;

        if (choice == "1") {
            cout << "Masukkan n: ";
            cin >> input;
            if (!inputCheck(input)) {
                cout << "Masukkan tidak valid! Ulangi lagi.\n";
                continue;
            }
            
            cout << "Hasil ("<< input << " suku): \n";
            printFibbonaciSequence(input);
            cout << endl;

        } else if (choice == "2") {
            cout << "Masukkan M: ";
            cin >> input;
            if (!inputCheck(input)) {
                cout << "Masukkan tidak valid! Ulangi lagi.\n";
                continue;
            }

            cout << "Hasil (nilai-nilai yang kurang dari atau sama dengan "<< input << "): \n";
            printFibbonaciSequenceTill(input);
            cout << endl;

        } else if (choice == "3") {
            return 0;
        } else {
            cout << "Ulangi, input tidak benar!\n\n";
        }
    }
}
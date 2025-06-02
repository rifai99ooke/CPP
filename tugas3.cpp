
#include <iostream>
using namespace std;

int main() {
    int soal1 = 10 % 2 + 5 * 4;
    int soal2 = 20 - 6 % 3 / 5;
    bool soal3 = (1 && 0) || (1 || 1);
    bool soal4 = (0 || 1) && (0 && 1);
    bool soal5 = (10 % 3) <= (10 / 5);
    bool soal6 = (20 * 3) != (60 % 100);

    // Output
    cout << "Hasil Tugas Praktikum di Rumah:\n";
    cout << "1. 10 % 2 + 5 * 4 = " << soal1 << endl;
    cout << "2. 20 - 6 % 3 / 5 = " << soal2 << endl;
    cout << "3. (1 && 0) || (1 || 1) = " << soal3 << endl;
    cout << "4. (0 || 1) && (0 && 1) = " << soal4 << endl;
    cout << "5. (10 % 3) <= (10 / 5) = " << soal5 << endl;
    cout << "6. (20 * 3) != (60 % 100) = " << soal6 << endl;

    return 0;
}
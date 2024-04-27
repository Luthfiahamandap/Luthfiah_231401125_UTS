#include <iostream>
using namespace std;

int main() {
    int jum, count = 0;
    int nilai;

    cout << "masukkan beberapa nilai" <<endl;
    cout << "input -1 untuk menghitung rata-rata" << endl;

    do {
        cout << ": ";
        cin >> nilai;
        
        if (nilai >= 0) {
            jum += nilai;
            count++;
        } else if (nilai != -1) {
            cout << "error! nilai harus positif" <<endl;
        }
    } while (nilai != -1);

    if (count > 0) {
        double average = static_cast<double>(jum) / count;
        cout << "nilai rata-rata Anda: " << average <<endl;
    } else {
        cout << "Tidak ada nilai yang dimasukkan." << endl;
    }
    return 0;
}
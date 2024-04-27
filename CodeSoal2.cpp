#include <iostream>
using namespace std;
int main()
{
    int baris,loop1,loop2,baris2;

    cout << "masukkan berapa baris segitiga : ";
    cin >> baris;

    if (baris == -1) 
    { cout << "tidak ada nilai yang dimasukkan"<< endl;
    return 0; }
    if (baris < 3 || baris > 9) 
    { cout << "Inputan Tidak Memenuhi Batas" << endl; }
    
    else {
    for (loop1 = 1; loop1 <= baris; ++loop1) 
    {
        for (loop2 = 1; loop2 <= loop1; ++loop2) 
        {
            cout << 'x' << " ";
        }
        cout << endl;
    }
        for (loop1 = 1; loop1 <= baris; loop1++) 
        {
            for (loop2 = 1; loop2 <= loop1+baris-1; loop2++) 
            {
                cout << "  ";
            }
        for (baris2 = baris; baris2>= loop1; baris2--) 
        {
            cout << "x ";
        }
        cout << endl;
        }
        return 0;
        }
    }
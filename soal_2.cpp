#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    string Nama, NIM, Shift;
    int x1, x2, x3, x4, x5, n;
    float rataan, ragam, simpangan_baku;
    Nama = "Nur Fina";
    NIM = "2310432016";
    Shift = "4";
    cout << "Nama : " << Nama << endl;
    cout << "NIM : " << NIM << endl;
    cout << "Shift : " << Shift << endl;
    cout << "====================" << endl;

    cout << "Menghitung rata-rata, ragam, simpangan baku" << endl;
    cout << "masukkan x1 = ";
    cin >> x1;
    cout << "masukkan x2 = ";
    cin >> x2;
    cout << "masukkan x3 = ";
    cin >> x3;
    cout << "masukkan x4 = ";
    cin >> x4;
    cout << "masukkan x5 = ";
    cin >> x5;
    cout << "masukkan banyak data = ";
    cin >> n;

    rataan = (x1 + x2 + x3 + x4 + x5) / n;
    ragam = ((x1 - rataan) * (x1 - rataan) + (x2 - rataan) * (x2 - rataan) + (x3 - rataan) * (x3 - rataan) + (x4 - rataan) * (x4 - rataan) + (x5 - rataan) * (x5 - rataan)) / n;
    simpangan_baku = sqrt(ragam);
    cout << " rata rata data tersebut adalah = " << rataan << endl;
    cout << " ragam data tersebut adalah = " << ragam << endl;
    cout << " simpangan baku data tersebut adalah = " << simpangan_baku << endl;

    return 0;
}

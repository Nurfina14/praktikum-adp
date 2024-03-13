#include <iostream>

using namespace std;

int main()
{
    string Nama, NIM, Shift;
    float r, volume, luas_permukaan;
    const float phi = 3.14;

    Nama = "Nur Fina";
    NIM = "2310432016";
    Shift = "4";
    cout << "Nama : " << Nama << endl;
    cout << "NIM : " << NIM << endl;
    cout << "Shift : " << Shift << endl;
    cout << "====================" << endl;

    cout << "Menghitung Volume dan luas permukaan bola dengan" << endl;
    cout << "Jari-jari bola (cm) = ";
    cin >> r;
    volume = (phi * r * r * r) * 4 / 3;
    luas_permukaan = 4 * phi * r * r;
    cout << "Volume bola adalah " << volume << " cm^3" << endl;
    cout << "Luas permukaan bola adalah " << luas_permukaan << " cm^2" << endl;
    
    return 0;
}

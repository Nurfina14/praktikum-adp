#include <iostream>

using namespace std;

int main()
{
    string nama, kota_tujuan, jenis_maskapai, jenis_kelamin;
    int umur, jumlah_tiket, pilihan_kota_tujuan, pilihan_jenis_maskapai, harga_tiket, total_harga, pilihan_jenis_kelamin, harga, diskon = 0;
    const int persen_diskon = 25, minimal_tiket_diskon = 4;

    cout << "================================================================================" << endl;
    cout << "                            LION GROUP TICKET BOOKING                           " << endl;
    cout << "================================================================================" << endl;

    cout << endl;
    cout << "Selamat Datang di Aplikasi Pemesanan Tiket LION Group" << endl;
    cout << endl;
    cout << endl;

    cout << " ------------------------------------ " << endl;
    cout << "| 1. INFO PELANGGAN                  |" << endl;
    cout << "| (Mohon isi data diri anda)         |" << endl;
    cout << "|____________________________________|" << endl;

    cout << endl;
    cout << "\nNama\t\t\t: ";
    cin >> nama;
    cout << "Umur\t\t\t: ";
    cin >> umur;
    cout << "Jenis Kelamin" << endl;
    cout << "1. Laki- laki" << endl;
    cout << "2. Perempuan" << endl;
    cout << "Masukkan Pilihan\t: ";
    cin >> pilihan_jenis_kelamin;
    if (pilihan_jenis_kelamin == 1)
    {
        jenis_kelamin = "Laki-laki";
    }
    else if (pilihan_jenis_kelamin == 2)
    {
        jenis_kelamin = "Perempuan";
    }
    else
    {
        cout << "Input tidak valid" << endl;
        return 0;
    }

    cout << " ------------------------------------ " << endl;
    cout << "| 2. INFO PENERBANGAN                |" << endl;
    cout << "| (Mohon isi info penerbangan)       |" << endl;
    cout << "|____________________________________|" << endl;
    cout << endl;

    cout << "Silahkan Pilih Tujuan Keberangkatan Anda " << endl;
    cout << " -------------------      -------------------      ------------------- " << endl;
    cout << "| 1. Surabaya       |    | 2. Jakarta        |    | 3. Jambi          |" << endl;
    cout << "|___________________|    |___________________|    |___________________|" << endl;
    cout << endl;
    cout << endl;
    cout << "Masukkan Pilihan: ";
    cin >> pilihan_kota_tujuan;

    if (pilihan_kota_tujuan == 1)
    {
        kota_tujuan = "Surabaya";
        cout << "\nSilahkan Pilih Jenis Maskapai Anda" << endl;
        cout << "|    == 1. Ekonomi - Rp750.000 ==       |" << endl;
        cout << "|    == 2. Bisnis - Rp1.000.000 ==      |" << endl;
        cout << "|    == 3. First Class - Rp1.300.000 == |" << endl;
        cout << "\nMasukkan Pilihan Anda: ";
        cin >> pilihan_jenis_maskapai;
        if (pilihan_jenis_maskapai == 1)
        {
            jenis_maskapai = "Ekonomi";
            harga_tiket = 750000;
        }
        else if (pilihan_jenis_maskapai == 2)
        {
            jenis_maskapai = "Bisnis";
            harga_tiket = 1000000;
        }
        else if (pilihan_jenis_maskapai == 3)
        {
            jenis_maskapai = "First Class";
            harga_tiket = 1300000;
        }
        else
        {
            cout << "Input tidak valid" << endl;
            return 0;
        }
    }
    else if (pilihan_kota_tujuan == 2)
    {
        kota_tujuan = "Jakarta";
        cout << "\nSilahkan Pilih Jenis Maskapai Anda" << endl;
        cout << "|    == 1. Ekonomi - Rp500.000 ==       |" << endl;
        cout << "|    == 2. Bisnis - Rp900.000 ==        |" << endl;
        cout << "|    == 3. First Class - Rp1.000.000 == |" << endl;
        cout << "Masukkan Pilihan Anda: ";
        cin >> pilihan_jenis_maskapai;
        if (pilihan_jenis_maskapai == 1)
        {
            jenis_maskapai = "Ekonomi";
            harga_tiket = 500000;
        }
        else if (pilihan_jenis_maskapai == 2)
        {
            jenis_maskapai = "Bisnis";
            harga_tiket = 900000;
        }
        else if (pilihan_jenis_maskapai == 3)
        {
            jenis_maskapai = "First Class";
            harga_tiket = 1000000;
        }
        else
        {
            cout << "Input tidak valid" << endl;
            return 0;
        }
    }
    else if (pilihan_kota_tujuan == 3)
    {
        kota_tujuan = "Jambi";
        cout << "\nSilahkan Pilih Jenis Maskapai Anda" << endl;
        cout << "|    == 1. Ekonomi - Rp400.000 ==     |" << endl;
        cout << "|    == 2. Bisnis - Rp700.000 ==      |" << endl;
        cout << "|    == 3. First Class - Rp900.000 == |" << endl;
        cout << "Masukkan Pilihan Anda: ";
        cin >> pilihan_jenis_maskapai;
        if (pilihan_jenis_maskapai == 1)
        {
            jenis_maskapai = "Ekonomi";
            harga_tiket = 400000;
        }
        else if (pilihan_jenis_maskapai == 2)
        {
            jenis_maskapai = "Bisnis";
            harga_tiket = 700000;
        }
        else if (pilihan_jenis_maskapai == 3)
        {
            jenis_maskapai = "First Class";
            harga_tiket = 900000;
        }
        else
        {
            cout << "Input tidak valid" << endl;
            return 0;
        }
    }
    else
    {
        cout << "Input tidak valid" << endl;
        return 0;
    }

    cout << "\nMasukkan Jumlah Tiket: ";
    cin >> jumlah_tiket;

    harga = harga_tiket * jumlah_tiket;

    if (jumlah_tiket >= minimal_tiket_diskon)
    {
        diskon = (persen_diskon / 100.0) * harga;
    }

    total_harga = harga - diskon;

    cout << "================================================================" << endl;
    cout << endl;
    cout << "                   LION GROUP TICKET BOOKING                    " << endl;
    cout << "                          == INVOICE ==                         " << endl;
    cout << endl;
    cout << "----------------------------------------------------------------" << endl;
    cout << "                        INFO PENERBANGAN                        " << endl;
    cout << "----------------------------------------------------------------" << endl;
    cout << endl;
    cout << "\tNama\t\t: " << nama << endl;
    cout << "\tUmur\t\t: " << umur << endl;
    cout << "\tJenis Kelamin\t: " << jenis_kelamin << endl;
    cout << endl;
    cout << "----------------------------------------------------------------" << endl;
    cout << "                        INFO PENERBANGAN                        " << endl;
    cout << "----------------------------------------------------------------" << endl;
    cout << endl;
    cout << "\tKota Tujuan\t: " << kota_tujuan << endl;
    cout << "\tJenis Maskapai\t: " << jenis_maskapai << endl;
    cout << "\tHarga Tiket\t: Rp." << harga_tiket << endl;
    cout << "\tJumlah Tiket\t: 1" << jumlah_tiket << endl;
    cout << endl;
    cout << "----------------------------------------------------------------" << endl;
    cout << endl;
    cout << "\tHarga\t\t: Rp." << harga << endl;
    cout << "\tDiskon\t\t: Rp." << diskon << endl;
    cout << "\tTotal Harga\t: Rp." << total_harga << endl;
    cout << endl;
    cout << endl;
    cout << "                          TERIMA KASIH                          " << endl;
    cout << "================================================================" << endl;

    return 0;
}

persen_diskon = 25

print ('================================================')
print ('            LION GRUP BOOKING TICKET            ')
print ('================================================\n')
print ('=====SELAMAT DATANG DI PENERBANGAN KAMI====\n')
print ('Silahkan Input Data Diri Terlebih Dahulu\n')

# data pelanggan
nama = input('Nama: ')
umur = input('Umur: ')
pilihan_jenis_kelamin = input('pilih jenis kelamin\n1. Laki-laki\n2. Perempuan\nMasukkan Pilihan: ') 
if pilihan_jenis_kelamin == '1':
    jenis_kelamin = 'laki-laki'
elif pilihan_jenis_kelamin == '2':
    jenis_kelamin = 'perempuan'
else : 
    print ('tidak valid')
    exit()


# tujuan keberangkatan
print (' \nSilahkan Pilih Tujuan Keberangkatan Anda ')
print ('| ==== 1. Surabaya ==== |')
print ('| ==== 2. Jakarta  ==== |')
print ('| ==== 3. Jambi    ==== |')
pilihan_kota_tujuan = input ('Pilih nomor kota tujuan anda: ') 

if pilihan_kota_tujuan == '1':
    kota_tujuan = 'Surabaya'
    # jenis maskapai
    print ('Silahkan Pilih Jenis Maskapai Anda')
    print ('|    === 1. Ekonomi - Rp750.000 ===         |')
    print ('|    === 2. Bisnis - Rp1.000.000 ===        |')
    print ('|    === 3. First Class - Rp1.300.000 ===   |')
    pilihan_jenis_maskapai = input ('Nomor Yang Anda Pilih: ')
    if pilihan_jenis_maskapai == '1':
        jenis_maskapai = 'Ekonomi'
        harga_tiket = 750000
    elif pilihan_jenis_maskapai == '2':
        jenis_maskapai = 'Bisnis'
        harga_tiket = 1000000
    elif pilihan_jenis_maskapai == '3':
        jenis_maskapai = 'First Class'
        harga_tiket = 1300000
    else :
        print ('tidak valid')
        exit()
elif pilihan_kota_tujuan == '2':
    kota_tujuan = 'Jakarta'
    # jenis maskapai
    print ('Silahkan Pilih Jenis Maskapai Anda')
    print ('|    === 1. Ekonomi - Rp500.000 ===        |')
    print ('|    === 2. Bisnis - Rp900.000 ===         |')
    print ('|    === 3. First Class - Rp1.000.000 ===  |')
    pilihan_jenis_maskapai = input ('\nNomor Yang Anda Pilih: ')
    if pilihan_jenis_maskapai == '1':
        jenis_maskapai = 'Ekonomi'
        harga_tiket = 500000
    elif pilihan_jenis_maskapai == '2':
        jenis_maskapai = 'Bisnis'
        harga_tiket = 900000
    elif pilihan_jenis_maskapai == '3':
        jenis_maskapai = 'First Class'
        harga_tiket = 1000000
    else :
        print ('tidak valid')
        exit()
elif pilihan_kota_tujuan == '3':
    kota_tujuan = 'Jambi'
    # jenis maskapai
    print ('Silahkan Pilih Jenis Maskapai Anda')
    print ('|    === 1. Ekonomi - Rp400.000 ===      |')
    print ('|    === 2. Bisnis - Rp700.000 ===       |')
    print ('|    === 3. First Class - Rp900.000 ===  |')
    pilihan_jenis_maskapai = input ('Nomor Yang Anda Pilih: ')
    if pilihan_jenis_maskapai == '1':
        jenis_maskapai = 'Ekonomi'
        harga_tiket = 400000
    elif pilihan_jenis_maskapai == '2':
        jenis_maskapai = 'Bisnis'
        harga_tiket = 700000
    elif pilihan_jenis_maskapai == '3':
        jenis_maskapai = 'First Class'
        harga_tiket = 900000
    else :
        print ('tidak valid')
        exit()

else :
    print ('tidak valid')
    exit()



# jumlah tiket
jumlah_tiket = int (input ('\nMasukkan Jumlah Tiket: '))

# Hitung total harga
harga = harga_tiket*jumlah_tiket
diskon = 0

if jumlah_tiket > 3: 
    diskon = 25/100*harga

total_harga = harga - diskon 


print ('\n=========Struk Pesanan Anda Sebagai Berikut=========\n')

print ('Info Pelanggan')
print (f'\tNama: {nama}')
print (f'\tUmur: {umur}')
print (f'\tJenis Kelamin: {jenis_kelamin}')
print ('Info Penerbangan')
print (f'\tKota Tujuan: {kota_tujuan}')
print (f'\tJenis Maskapai: {jenis_maskapai}')
print (f'\tJumlah Tiket: {jumlah_tiket}')
print (f'\tHarga: Rp{harga}')
print (f'\tDiskon: Rp{diskon}')
print (f'\tTotal Harga: Rp{total_harga}')




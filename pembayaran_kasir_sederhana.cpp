//Pasang library
#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    
    //Inisialisasi dan deklarasi variabel
    int harga[50], total_harga;
    total_harga = 0;
    char barang_belanja, member;
    string nama_barang;

    //Perulangan untuk input list dan harga barang
    cout << "Masukkan nama barang : \n";
    int i = 0;
    int j = 1;
    
    //Kenapa menggunakan do while? Karna pembeli setidaknya akan membeli satu barang dan kasir pastinya akan memproses satu pesanan tersebut
    do
    {
        cout << j << ". ";
        cin >> nama_barang;
        cout << "Masukkan harga : ";
        cin >> harga[i];
        cout << "Apakah masih ada barang belanjaan? [Y/T] : ";
        cin >> barang_belanja;
        total_harga = total_harga + harga[i];
        j++;
        i++;
    } while (barang_belanja == 'Y' || barang_belanja == 'y');
    cout << endl;

    //nested if
    if (total_harga >= 50000)
    {
        //jika kondisi terpenuhi, maka blok kode ini akan dieksekusi
        cout << "Apakah anda memiliki kartu member? [Y/T] : ";
        cin >> member;
        cout << endl;
        if (member == 'Y' || member == 'y')
        {
            int potongan = 10000;
            //jika kondisi terpenuhi, maka blok kode ini akan dieksekusi
            cout << "Selamat anda mendapat potongan harga sebesar Rp.10.000\n";
            cout << "Total Harga = " << total_harga;
            cout << endl;
            cout << "Total Harga Setelah Potongan = " << total_harga - potongan;
            cout << endl;
            cout << "Terima kasih telah berbelanja!\n";
            cout << endl;
        }
        else
        {
            //jika kondisi terpenuhi, maka blok kode ini akan dieksekusi
            cout << "Daftarkan diri anda menjadi member untuk mendapat berbagai potongan harga yang menarik!\n";
            cout << "Namun tenang saja, anda bisa mendapat paket murah, jika berminat silahkan dipilih!\n";
            cout << "Total Harga = " << total_harga;
            cout << endl;
            cout << "Terima kasih telah berbelanja!\n";
            cout << endl;
        }
    }
    else
    {
        cout << "Total Harga = " << total_harga;
        cout << endl;
        cout << "Terima kasih telah berbelanja!\n";
        cout << endl;
    }

    return 0;
}
#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <ctime>
using namespace std;

float totalBiaya (float a, float b){
    float biaya=a*b;
    return biaya;
}
float kembali (float x, float y ){
    float kembalian=x-y;
    return kembalian;
}

void paket(){
    cout<<"\t        MAM'S LAUNDRY"<<endl;
    cout<<"-----------------PILIH PAKET------------------"<<endl;
    cout<<"       KODE          |         PAKET        "<<endl;
    cout<<"----------------------------------------------"<<endl;
    cout<<"          A          |   Paket Express 8 jam  "<<endl;
    cout<<"          B          | Paket Standart 1-3 hari"<<endl;
    cout<<"----------------------------------------------"<<endl;
}
int main (){

    int kdlayanan, menuPilih;
    string namaPlgn, alamat, noTlp, user, pass;
    char kdpaket, ulangi, ch;
    float btcucian, bayar, biaya, kembalian;
    time_t now = time(0);
    char* dt = ctime(&now);

    cout << "============================"<<endl;
    cout << "Selamat Datang di Form Login"<<endl;
    cout << "============================"<<endl;
    cout<<"Username : ";
    cin>>user;
    cout<<"Password : ";
    ch=_getch();
    while(ch!=13){
        pass.push_back(ch);
        cout<<'*';
        ch=_getch();
    }

    cout<<endl<<endl;
    if (user=="kelompok11"&&pass=="12345"){
        cout << "Anda berhasil login. Silahkan klik ENTER"<<endl;
        }
    else {
        cout<<"Anda gagal login. Silahkan muat ulang program!"<<endl;
        exit(0);
        }
    system("pause");
    menu:
    system("cls");
    cout<<"SELAMAT DATANG DI MAM'S LAUNDRY!"<<endl;
    cout<<"====================="<<endl;
    cout<<"|NO.|PILIH MENU      |"<<endl;
    cout<<"====================="<<endl;
    cout<<"| 1 | Input Data     |"<<endl;
    cout<<"| 2 | Daftar Paket   |"<<endl;
    cout<<"| 3 | Keluar         |"<<endl;
    cout<<"====================="<<endl;
    cout<<"Masukkan pilihan : ";
    cin>>menuPilih;

    if (menuPilih==1){
    system("cls");
    paket();
    cout<<"Pilih Paket (A/B) : ";
    cin>>kdpaket;
    cout<<endl;

    if (kdpaket=='A'||kdpaket=='a'){

        cout<<"-------------------PAKET A--------------------"<<endl;
        cout<<"| KODE  |      LAYANAN       |     TARIF     |"<<endl;
        cout<<"----------------------------------------------"<<endl;
        cout<<"|   1   |   Cuci + Setrika   |     40000     |"<<endl;
        cout<<"|   2   |    Setrika Saja    |     30000     |"<<endl;
        cout<<"|   3   |     Cuci Saja      |     20000     |"<<endl;
        cout<<"----------------------------------------------"<<endl;

        cout<<"Pilih Kode Layanan : ";
        cin>>kdlayanan;
        cout<<endl;


        switch (kdlayanan) {
        case 1 :
            system("cls");
            cout<<"---------------DATA PELANGGAN-----------------"<<endl;
            cout<<"Nama Pelanggan   : ";
            cin.ignore();
            getline (cin, namaPlgn);
            cout<<"Alamat           : ";
            getline (cin, alamat);
            cout<<"No. Tlp          : ";
            getline (cin, noTlp);
            cout<<"Berat cucian(kg) : ";
            cin>>btcucian;

            biaya=totalBiaya(btcucian, 40000);
            cout<<"Sub Total        : "<<biaya<<endl;
            cout<<"----------------------------------------------"<<endl;
            cout<<"Dibayar : ";
            cin>>bayar;

            kembali(bayar, biaya);
            kembalian=kembali(bayar, biaya);

            system("cls");
            cout<<"===========NOTA PEMBAYARAN LAUNDRY============"<<endl;
            cout<<"Nama Pelanggan : "<<namaPlgn<<endl;
            cout<<"Alamat         : "<<alamat<<endl;
            cout<<"No. Tlp.       : "<<noTlp<<endl;
            cout<<"Berat Cucian   : "<<btcucian<<endl;
            cout<<"Paket layanan  : "<<kdpaket<<" Kode : "<<kdlayanan<<endl;
            cout<<"Sub Total      : "<<biaya<<endl;
            cout<<"Dibayar        : "<<bayar<<endl;
            cout<<"Kembali        : "<<kembalian<<endl;
            cout<<"=============================================="<<endl;
            cout<<dt<<endl;
            break;
        case 2 :
            system("cls");
            cout<<"---------------DATA PELANGGAN-----------------"<<endl;
            cout<<"Nama Pelanggan   : ";
            cin.ignore();
            getline (cin, namaPlgn);
            cout<<"Alamat           : ";
            getline (cin, alamat);
            cout<<"No. Tlp          : ";
            getline (cin, noTlp);
            cout<<"Berat cucian(kg) : ";
            cin>>btcucian;
            biaya=totalBiaya(btcucian, 30000);
            cout<<"Sub Total        : "<<biaya<<endl;
            cout<<"----------------------------------------------"<<endl;
            cout<<"Dibayar : ";
            cin>>bayar;

            kembali(bayar, biaya);
            kembalian=kembali(bayar, biaya);

            system("cls");

            cout<<"===========NOTA PEMBAYARAN LAUNDRY============"<<endl;
            cout<<"Nama Pelanggan : "<<namaPlgn<<endl;
            cout<<"Alamat         : "<<alamat<<endl;
            cout<<"No. Tlp.       : "<<noTlp<<endl;
            cout<<"Berat Cucian   : "<<btcucian<<endl;
            cout<<"Paket layanan  : "<<kdpaket<<" Kode : "<<kdlayanan<<endl;
            cout<<"Sub Total      : "<<biaya<<endl;
            cout<<"Dibayar        : "<<bayar<<endl;
            cout<<"Kembali        : "<<kembalian<<endl;
            cout<<"=============================================="<<endl;
            cout<<dt<<endl;
            break;
        case 3 :
            system("cls");
            cout<<"---------------DATA PELANGGAN-----------------"<<endl;
            cout<<"Nama Pelanggan   : ";
            cin.ignore();
            getline (cin, namaPlgn);
            cout<<"Alamat           : ";
            getline (cin, alamat);
            cout<<"No. Tlp          : ";
            getline (cin, noTlp);
            cout<<"Berat cucian(kg) : ";
            cin>>btcucian;
            biaya=totalBiaya(btcucian, 20000);
            cout<<"Sub Total        : "<<biaya<<endl;
            cout<<"----------------------------------------------"<<endl;
            cout<<"Dibayar : ";
            cin>>bayar;

            kembali(bayar, biaya);
            kembalian=kembali(bayar, biaya);

            system("cls");

            cout<<"===========NOTA PEMBAYARAN LAUNDRY============"<<endl;
            cout<<"Nama Pelanggan : "<<namaPlgn<<endl;
            cout<<"Alamat         : "<<alamat<<endl;
            cout<<"No. Tlp.       : "<<noTlp<<endl;
            cout<<"Berat Cucian   : "<<btcucian<<endl;
            cout<<"Paket layanan  : "<<kdpaket<<" Kode : "<<kdlayanan<<endl;
            cout<<"Sub Total      : "<<biaya<<endl;
            cout<<"Dibayar        : "<<bayar<<endl;
            cout<<"Kembali        : "<<kembalian<<endl;
            cout<<"=============================================="<<endl;
            cout<<dt<<endl;
            break;
        default :
            cout<<"Pilihan Tidak Ada!"<<endl;
        }
    }
    else if (kdpaket=='B'||kdpaket=='b'){

        cout<<"-------------------PAKET B--------------------"<<endl;
        cout<<"| KODE  |      LAYANAN       |     TARIF     |"<<endl;
        cout<<"----------------------------------------------"<<endl;
        cout<<"|   1   |   Cuci + Setrika   |     30000     |"<<endl;
        cout<<"|   2   |    Setrika Saja    |     20000     |"<<endl;
        cout<<"|   3   |     Cuci Saja      |     15000     |"<<endl;
        cout<<"----------------------------------------------"<<endl;

        cout<<"Pilih Kode Layanan : ";
        cin>>kdlayanan;
        cout<<endl;

        switch (kdlayanan) {
        case 1 :
            system("cls");
            cout<<"---------------DATA PELANGGAN-----------------"<<endl;
            cout<<"Nama Pelanggan   : ";
            cin.ignore();
            getline (cin, namaPlgn);
            cout<<"Alamat           : ";
            getline (cin, alamat);
            cout<<"No. Tlp          : ";
            getline (cin, noTlp);
            cout<<"Berat cucian(kg) : ";
            cin>>btcucian;
            biaya=totalBiaya(btcucian, 30000);
            cout<<"Sub Total        : "<<biaya<<endl;
            cout<<"----------------------------------------------"<<endl;
            cout<<"Dibayar : ";
            cin>>bayar;

            kembali(bayar, biaya);
            kembalian=kembali(bayar, biaya);

            system("cls");

            cout<<"===========NOTA PEMBAYARAN LAUNDRY============"<<endl;
            cout<<"Nama Pelanggan : "<<namaPlgn<<endl;
            cout<<"Alamat         : "<<alamat<<endl;
            cout<<"No. Tlp.       : "<<noTlp<<endl;
            cout<<"Berat Cucian   : "<<btcucian<<endl;
            cout<<"Paket layanan  : "<<kdpaket<<" Kode : "<<kdlayanan<<endl;
            cout<<"Sub Total      : "<<biaya<<endl;
            cout<<"Dibayar        : "<<bayar<<endl;
            cout<<"Kembali        : "<<kembalian<<endl;
            cout<<"=============================================="<<endl;
            cout<<dt<<endl;
            break;
        case 2 :
            system("cls");
            cout<<"---------------DATA PELANGGAN-----------------"<<endl;
            cout<<"Nama Pelanggan   : ";
            cin.ignore();
            getline (cin, namaPlgn);
            cout<<"Alamat           : ";
            getline (cin, alamat);
            cout<<"No. Tlp          : ";
            getline (cin, noTlp);
            cout<<"Berat cucian(kg) : ";
            cin>>btcucian;
            biaya=totalBiaya(btcucian, 20000);
            cout<<"Sub Total        : "<<biaya<<endl;
            cout<<"----------------------------------------------"<<endl;
            cout<<"Dibayar : ";
            cin>>bayar;

            kembali(bayar, biaya);
            kembalian=kembali(bayar, biaya);

            system("cls");

            cout<<"===========NOTA PEMBAYARAN LAUNDRY============"<<endl;
            cout<<"Nama Pelanggan : "<<namaPlgn<<endl;
            cout<<"Alamat         : "<<alamat<<endl;
            cout<<"No. Tlp.       : "<<noTlp<<endl;
            cout<<"Berat Cucian   : "<<btcucian<<endl;
            cout<<"Paket layanan  : "<<kdpaket<<" Kode : "<<kdlayanan<<endl;
            cout<<"Sub Total      : "<<biaya<<endl;
            cout<<"Dibayar        : "<<bayar<<endl;
            cout<<"Kembali        : "<<kembalian<<endl;
            cout<<"=============================================="<<endl;
            cout<<dt<<endl;
            break;
        case 3 :
            system("cls");
            cout<<"---------------DATA PELANGGAN-----------------"<<endl;
            cout<<"Nama Pelanggan   : ";
            cin.ignore();
            getline (cin, namaPlgn);
            cout<<"Alamat           : ";
            getline (cin, alamat);
            cout<<"No. Tlp          : ";
            getline (cin, noTlp);
            cout<<"Berat cucian(kg) : ";
            cin>>btcucian;
            biaya=totalBiaya(btcucian, 15000);
            cout<<"Sub Total        : "<<biaya<<endl;
            cout<<"----------------------------------------------"<<endl;
            cout<<"Dibayar : ";
            cin>>bayar;

            kembali(bayar, biaya);
            kembalian=kembali(bayar, biaya);

            system("cls");

            cout<<"===========NOTA PEMBAYARAN LAUNDRY============"<<endl;
            cout<<"Nama Pelanggan : "<<namaPlgn<<endl;
            cout<<"Alamat         : "<<alamat<<endl;
            cout<<"No. Tlp.       : "<<noTlp<<endl;
            cout<<"Berat Cucian   : "<<btcucian<<endl;
            cout<<"Paket layanan  : "<<kdpaket<<" Kode : "<<kdlayanan<<endl;
            cout<<"Sub Total      : "<<biaya<<endl;
            cout<<"Dibayar        : "<<bayar<<endl;
            cout<<"Kembali        : "<<kembalian<<endl;
            cout<<"=============================================="<<endl;
            cout<<dt<<endl;
            break;
        default :
            cout<<"Pilihan Tidak Ada!"<<endl;
        }

    }
    else {
        cout<<"Pilihan Tidak Ada!"<<endl;
    }
}
    else if(menuPilih==2){
    system("cls");
    cout<<"\t        MAM'S LAUNDRY"<<endl;
    cout<<"==============================================="<<endl;
    cout<<"|--------PAKET A (PAKET EXPRESS 8 JAM)--------|"<<endl;
    cout<<"=============================================="<<endl;
    cout<<"| KODE  |      LAYANAN       |     TARIF      |"<<endl;
    cout<<"----------------------------------------------"<<endl;
    cout<<"|   1   |   Cuci + Setrika   |     40000      |"<<endl;
    cout<<"|   2   |    Setrika Saja    |     30000      |"<<endl;
    cout<<"|   3   |     Cuci Saja      |     20000      |"<<endl;
    cout<<"----------------------------------------------"<<endl<<endl;

    cout<<"==============================================="<<endl;
    cout<<"|------PAKET B (PAKET STANDART 1-3 HARI)------|"<<endl;
    cout<<"==============================================="<<endl;
    cout<<"| KODE  |      LAYANAN       |     TARIF      |"<<endl;
    cout<<"-----------------------------------------------"<<endl;
    cout<<"|   1   |   Cuci + Setrika   |     30000      |"<<endl;
    cout<<"|   2   |    Setrika Saja    |     20000      |"<<endl;
    cout<<"|   3   |     Cuci Saja      |     15000      |"<<endl;
    cout<<"-----------------------------------------------"<<endl;
} else if (menuPilih==3){
    exit(0);
} else {
    cout<<"Pilihan Tidak Ada!"<<endl;
}
    cout<<"Kembali ke Menu?[Y/T]";
    cin>>ulangi;
    cout<<endl;

if (ulangi=='Y'||ulangi=='y'){
    goto menu;
} else {
    goto akhir;
}

akhir:
    exit(0);
return 0;

}


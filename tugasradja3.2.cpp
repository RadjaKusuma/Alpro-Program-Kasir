#include <iostream>
using namespace std;

int main (){
    char menu;
    bool kondisi = true;
    char keluar;
    cout << "Daftar Menu : " << endl;
    cout << "1. Nasi Kuning" << endl;
    cout << "2. Nasi Asap" << endl;
    cout << "1. Nasi Kucing" << endl;
    cout << "Pilih Menu : ";
    cin >> menu;
    system ("cls");
    switch(menu){
        case '1' :
            cout << "Anda membeli nasi kuning" << endl;
            cout << "Harga Rp 15.000" << endl;
            cout << "Apakah anda ingin beli? (y/t) : " << endl;
        break;

        case '2' :
            cout << "Anda membeli nasi asap" << endl;
            cout << "Harga Rp 20.000" << endl;
            cout << "Apakah anda ingin beli? (y/t) : " << endl;
        break;
        
        case '3' :
            cout << "Anda membeli nasi kucing"<< endl;
            cout << "Harga Rp 3.000" << endl;
            cout << "Apakah anda ingin beli? (y/t) : " << endl;
        break;

        default: 
            cout << "Menu yang Anda pilih tidak tersedia";
        break;
    }

    cout << " Apakah anda ingin kembali (y/n) : ";
    cin >> keluar;
    if (keluar == 'n' || keluar == 'N'){
        kondisi = false;

    }while(kondisi);
    
}
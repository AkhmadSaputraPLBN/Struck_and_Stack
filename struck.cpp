#include <iostream>
#include <string>
using namespace std;

   struct mahasiswa{
	string nim;
	string nama;
	string alamat;
	float ipk;
};

int inputData(string *nim, string *nama, string *alamat, float *ipk) {
    cout << "NIM = ";        getline(cin, *nim);
    cout << "Nama = ";      getline(cin, *nama);
    cout << "Alamat = ";    getline(cin, *alamat);
    cout << "IPK = ";       cin >> *ipk;
    cin.ignore();
}

void outputData(const mahasiswa &akhs) {
    system("cls");
    cout << "\n------------- Data Pribadi ------------- :\n";
    cout << "NIM    : " << akhs.nim << endl;
    cout << "Nama   : " << akhs.nama << endl;
    cout << "Alamat : " << akhs.alamat << endl;
    cout << "IPK    : " << akhs.ipk << endl;
    cout << "---------------------------------------\n";
}

int main() {
    mahasiswa akhs;
    inputData(&akhs.nim, &akhs.nama, &akhs.alamat, &akhs.ipk);
    outputData(akhs);
    return 0;
}
#include <iostream>
using namespace std;

class Mahasiswa
{
public:
    int nim;
    string nama;

public:
    Mahasiswa()
    {
        nim = 0;
        nama = "";
    };
    Mahasiswa(int iNim)
    {
        nim = iNim;
    }
    Mahasiswa(string iNama)
    {
        nama = iNama;
    }
    Mahasiswa(int iNim, string iNama)
    {
        nim = iNim;
        nama = iNama;
    }
    void cetak()
    {
        cout << endl << "Nim =" << nim << endl;
        cout << "Nama = " << nama << endl;
    }
};

int main()
{

}
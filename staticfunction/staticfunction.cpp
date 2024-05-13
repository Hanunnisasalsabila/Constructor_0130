#include <iostream>
using namespace std;

class mahasiswa
{
private:
    static int nim;
public:
    int id;
    string nama;

    void setID();
    void printAll();

    static void setNim(int pNim) { nim = pNim; }
    static int getNim() { return nim; }

    mahasiswa(string pnama)
    {
        nama = (pnama);
        setID();
    }
};

int mahasiswa::nim = 130;

void mahasiswa::setID()
{
    id = ++nim;
}

void mahasiswa::printAll()
{
    cout << "ID =" << id << endl;
    cout << "Nama =" << nama << endl;
    cout << endl;
}

int main()
{
    mahasiswa mhs1("Hanun");
    mahasiswa mhs2("Nisa");
    mahasiswa::setNim(130); // mengakses nim melalui static member function "setNim"
    mahasiswa mhs3("Salsa");
    mahasiswa mhs4("Bila");

    mhs1.printAll();
    mhs2.printAll();
    mhs3.printAll();
    mhs4.printAll();

    cout << "akses dari luar object = " << mahasiswa::getNim() << endl;
}
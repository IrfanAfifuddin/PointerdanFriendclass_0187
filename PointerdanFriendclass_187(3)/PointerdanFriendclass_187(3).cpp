#include <iostream>
using namespace std;

class siswa;
class orang
{
private:
    string nama;

public:
    void setNama(string pNama);
    friend class siswa;
};

class siswa
{
private:
    int id;

public:
    void SetId(int pId);
    void displayAll(orang &a);
};

void siswa::displayAll(orang &a)
{
    cout << id << endl << a.nama;
}
void orang::setNama(string pNama)
{
    nama = pNama;
}
void siswa::SetId(int pId)
{
    id = pId;
}
int main()
{
    orang joko;
    joko.setNama("Joko Susilo");
    siswa joko_siswa;
    joko_siswa.SetId(1);
    return 0;
}
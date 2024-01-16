#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Kisi
{
private:
    string kurum;

protected:
    int dogumYili;

public:
    Kisi(string adi, string soyadi, int dogumYili, string kurum) : adi(adi), soyadi(soyadi), dogumYili(dogumYili), kurum(kurum) {}
    Kisi() {}
    string adi;
    string soyadi;
    vector<Kisi *> kisiList;
    virtual void print() = 0;
    friend ostream &operator<<(ostream &os, const Kisi *kisi);

    /*void operator<<(int i)
    {
        cout << adi << endl;
        cout << soyadi << endl;
        cout << dogumYili << endl;
        cout << kurum << endl;
    }*/

    void operator+(Kisi *kisi)
    {
        kisiList.push_back(kisi);
    }
};

ostream &operator<<(ostream &os, const Kisi *kisi)
{
    os << kisi->adi << endl;
    os << kisi->soyadi << endl;
    os << kisi->dogumYili << endl;
    return os;
}


class Ogrenci : public Kisi
{
public:
    Ogrenci(string adi, string soyadi, int dogumYili, string kurum) : Kisi::Kisi(adi, soyadi, dogumYili, kurum) {}
    int ogrenciNo;
    void print() {}
};

class Personel : public Kisi
{
public:
    Personel() {}
    Personel(string adi, string soyadi, int dogumYili, string kurum) : Kisi::Kisi(adi, soyadi, dogumYili, kurum) {}
    bool sicil;

    void print() {}
};

class Isci : public Personel
{
public:
    Isci() {}
};

void hangiTip(Kisi *kisi)
{
    if (Ogrenci *ogrenci = dynamic_cast<Ogrenci *>(kisi))
    {
        cout << "Ogrenci" << endl;
    }
    else if (Isci *isci = dynamic_cast<Isci *>(kisi))
    {
        cout << "Isci" << endl;
    }
    else if (Personel *personel = dynamic_cast<Personel *>(kisi))
    {
        cout << "Personel" << endl;
    }
}

int main()
{
    Isci *isci = new Isci();
    isci->adi = "Ahmet";
    isci->soyadi = "Ak";

    cout << isci->adi << " " << isci->soyadi << endl;
    hangiTip(isci);

    Ogrenci ogrenci1("Sare", "Bayram", 2003, "fsmvu");
    Ogrenci ogrenci2("Zahid", "Baltaci", 2003, "fsmvu");
    cout << &ogrenci1;
    ogrenci1 + (&ogrenci2);

    cout << ogrenci1.kisiList[0]->adi << endl;
}
#include <iostream>
#include <numeric>

using namespace std;

class cPhanSo
{
private:
    int iTu, iMau;

    void RutGon()
    {
        int g = gcd(iTu, iMau);
        iTu /= g;
        iMau /= g;
        if (iMau < 0)
        {
            iTu = -iTu;
            iMau = -iMau;
        }
    }

public:
    void Nhap()
    {
        cin >> iTu >> iMau;
        if (iMau == 0)
            iMau = 1;
        RutGon();
    }

    void Xuat()
    {
        if (iMau == 1)
            cout << iTu;
        else
            cout << iTu << "/" << iMau;
    }

    cPhanSo Cong(cPhanSo ps)
    {
        cPhanSo kq;
        kq.iTu = iTu * ps.iMau + ps.iTu * iMau;
        kq.iMau = iMau * ps.iMau;
        kq.RutGon();
        return kq;
    }

    cPhanSo Tru(cPhanSo ps)
    {
        cPhanSo kq;
        kq.iTu = iTu * ps.iMau - ps.iTu * iMau;
        kq.iMau = iMau * ps.iMau;
        kq.RutGon();
        return kq;
    }

    cPhanSo Nhan(cPhanSo ps)
    {
        cPhanSo kq;
        kq.iTu = iTu * ps.iTu;
        kq.iMau = iMau * ps.iMau;
        kq.RutGon();
        return kq;
    }

    cPhanSo Chia(cPhanSo ps)
    {
        cPhanSo kq;
        kq.iTu = iTu * ps.iMau;
        kq.iMau = iMau * ps.iTu;
        kq.RutGon();
        return kq;
    }
};

int main()
{
    cPhanSo ps1, ps2, kq;

    cout << "Nhap phan so 1 (tu mau): ";
    ps1.Nhap();
    cout << "Nhap phan so 2 (tu mau): ";
    ps2.Nhap();

    cout << "\nCong: ";
    kq = ps1.Cong(ps2);
    kq.Xuat();

    cout << "\nTru: ";
    kq = ps1.Tru(ps2);
    kq.Xuat();

    cout << "\nNhan: ";
    kq = ps1.Nhan(ps2);
    kq.Xuat();

    cout << "\nChia: ";
    kq = ps1.Chia(ps2);
    kq.Xuat();

    return 0;
}
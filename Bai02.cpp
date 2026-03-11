#include <iostream>

using namespace std;

class cDiem
{
private:
    double dHoanh, dTung;

public:
    // Phuong thuc thiet lap
    cDiem()
    {
        dHoanh = 0;
        dTung = 0;
    }

    cDiem(double h, double t)
    {
        dHoanh = h;
        dTung = t;
    }

    // Nhap xuat
    void Nhap()
    {
        cout << "Nhap hoanh do: ";
        cin >> dHoanh;
        cout << "Nhap tung do: ";
        cin >> dTung;
    }

    void Xuat()
    {
        cout << "(" << dHoanh << ", " << dTung << ")";
    }

    // Getter & Setter
    double GetHoanh() { return dHoanh; }
    double GetTung() { return dTung; }

    void SetHoanh(double h) { dHoanh = h; }
    void SetTung(double t) { dTung = t; }

    // Thay doi noi dung diem
    void ThietLap(double h, double t)
    {
        dHoanh = h;
        dTung = t;
    }

    // Tinh tien
    void TinhTien(double dx, double dy)
    {
        dHoanh += dx;
        dTung += dy;
    }
};

int main()
{
    cDiem d1;
    cDiem d2(5, 10);

    cout << "Nhap toa do diem d1:\n";
    d1.Nhap();

    cout << "Diem d1 vua nhap: ";
    d1.Xuat();
    cout << "\nDiem d2 khoi tao san: ";
    d2.Xuat();

    d1.SetHoanh(15);
    cout << "\nd1 sau khi doi hoanh do thanh 15: ";
    d1.Xuat();

    d1.TinhTien(2, -3);
    cout << "\nd1 sau khi tinh tien (2, -3): ";
    d1.Xuat();

    cout << "\nHoanh do hien tai cua d1 la: " << d1.GetHoanh();

    return 0;
}
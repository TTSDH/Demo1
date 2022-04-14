#include <iostream>
#include<time.h>
using namespace std;

int main()
{
    int namSinh, namHienTai;
    cout << "Nhap nam sinh : "; cin >> namSinh;
    time_t Time = time(NULL);
    tm* Now = localtime(&Time);
    namHienTai = Now -> tm_year + 1900;
    cout << "So tuoi cua ban la : " << namHienTai - namSinh << endl;
    return 0;
}

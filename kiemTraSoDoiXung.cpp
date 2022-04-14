#include <iostream>
using namespace std;

int main()
{
    int n, temp = 0, temp1 = 0;
    cout << "Nhap n = "; cin >> n;
    temp1 = n;
    while(n != 0)
    {
        temp = temp * 10 + n % 10;
        n /= 10;
    }
    if (temp - temp1 == 0)
    {
        cout << "So doi xung";
    }
    else
    {
        cout << "So khong doi xung";
    }
}
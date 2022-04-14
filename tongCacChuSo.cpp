#include <iostream>
using namespace std;

int main()
{
    int n, sum = 0;
    cout << "Nhap n = "; cin >> n;
    for( ; n != 0; n /= 10)
    {
        sum += n % 10;
    }
    cout << sum;
    return 0;
}

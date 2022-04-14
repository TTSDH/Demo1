#include <iostream>
using namespace std;

void thamChieu(int &y)
{
    cout << "y = " << y << endl;
    y = 1;
    cout << "y = " << y << endl;
}

int main()
{
    int n(5);
    cout << n << endl;
    thamChieu(n);
    cout << "n = " << n << endl;
    return 0;
}

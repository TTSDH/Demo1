#include <iostream>
#include <string.h>
using namespace std;

// xóa kí tự trắng
void xoa(char A[21], int vitri)
{
    int len = strlen(A);
    for (int i = vitri; i < len; i++)
    {
        A[i] = A[i+1];
    }
    A[len-1]='\0';
}
void xoaKhoangTrang(char A[])
{
    for (int i = 0; i < strlen(A); i++)
    {
        if(A[i] == ' ')
        {
            xoa(A,i);
            i--;
        }
    }
}
void nhap()
{
    char A[21];
    char s[100] = "@vku.udn.vn";
    gets(A);
    xoaKhoangTrang(A);
    int len = strlen(A);
    if(len > 20)
    {
        cout << "N";
    }
    else
    {
        strcat(A,s);
        cout << A;
    }
}
int main()
{
    nhap();
}
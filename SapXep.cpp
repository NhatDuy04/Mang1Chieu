///Sắp xếp mảng theo thứ tự tăng dần
#include <iostream>
#include <math.h>
using namespace std;
int Nhap(int *a, int n)
{
    for(int i=0;i<n;i++)
        cin>>a[i];
}
void SapXep(int *a, int &n)
{
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(a[i]>a[j])
                swap(a[i], a[j]);
        }
    }
}
int Xuat(int *a, int n)
{
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
int main()
{
    int n;
    cout<<"Nhap so luong phan tu mang: ";
    cin>>n;
    int *a=new int[n];
    cout<<"Nhap mang: ";
    Nhapmang(a,n);
    SapXep(a,n);
    cout<<"Mang sau khi sap xep la: ";
    Xuat(a,n);
    delete[] a;
    system("pause");
    return 0;
}

#include <iostream>
using namespace std;
int Nhap(int *a, int n)
{
    for(int i=0;i<n;i++)
        cin>>a[i];
}
int Xoa(int *&a, int &n, int vt)
{
    int *temp=new int[n];
    for(int i=0;i<n;i++){
        temp[i]=a[i];
    }
    delete[] a;
    for(int i=vt+1;i<n;i++)
        temp[i-1]=temp[i];
    n--;
    a=new int[n-1];
    for(int i=0;i<n;i++){
        a[i]=temp[i];
    }
}
int Xuat(int *a, int n)
{
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
}
int main()
{
    int n,vt;
    cout<<"Nhap so luong phan tu mang: ";
    cin>>n;
    int *a=new int[n];
    cout<<"Nhap mang: ";
    Nhap(a,n);
    cout<<"Nhap vi tri can xoa: ";
    cin>>vt;
    Xoa(a,n,vt);
    cout<<"Mang sau khi xoa la: ";
    Xuat(a,n);
    delete[] a;
    system("pause");
    return 0;
}

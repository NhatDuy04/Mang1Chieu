///Thêm phần tử x vào mảng
#include <iostream>
using namespace std;
int Nhap(int *a, int n)
{
    for(int i=0;i<n;i++)
        cin>>a[i];
}
int Them(int *&a, int &n, int vt, int x)
{
    int *temp=new int[n];
    for(int i=0;i<n;i++)
        temp[i]=a[i];
    delete[] a;
    a=new int[n+1];
    for(int i=0;i<n;i++)
        a[i]=temp[i];
    delete[] temp;
    for(int i=n-1;i>=vt;i--)
        a[i+1]=a[i];
    a[vt]=x;
    n++;
}
int Xuat(int *a, int n)
{
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
}
int main()
{
    int n;
    cout<<"Nhap so luong phan tu trong mang: ";
    cin>>n;
    int *a=new int[n];
    int vt, x;
    cout<<"Nhap vi tri can them: ";
    cin>>vt;
    cout<<"Nhap gia tri can them: ";
    cin>>x;
    cout<<"Nhap mang: ";
    Nhap(a,n);
    Them(a,n,vt,x);
    Xuat(a,n);
    delete[] a;
    system("pause");
    return 0;
}

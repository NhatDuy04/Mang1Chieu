///Nhập vào 1 mảng, tìm số lần xuất hiện của số x và nằm ở vị trí nào
#include <iostream>
using namespace std;
int Dem(int *a, int n, int x)
{
    int d=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]==x){
            cout<<i<<endl;
            d++;
        }
    }
    return d;
}
int main()
{
    int n,x;
    cout<<"Nhap so luong phan tu mang: ";
    cin>>n;
    cout<<"Nhap phan tu x: ";
    cin>>x;
    int *a=new int[n];
    cout<<Dem(a,n,x);
    system("pause");
    return 0;
}

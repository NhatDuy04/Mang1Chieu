///nhập danh sách stack chứa các số nguyên, sau đó xuất ra màn hình các giá trị số nguyên đó
#include <iostream>
using namespace std;
struct NODE
{
    int data;
    struct NODE *next;
};
struct STACK
{
    NODE *top;
};
void KhoiTaoStack(STACK &s)
{
    s.top=NULL;
}
NODE *KhoiTaoNode(int x)
{
    NODE *p=new NODE();
    if(p==NULL)
        return NULL;
    else{
        p->data=x;
        p->next=NULL;
        return p;
    }
}
bool IsEmpty(STACK s) ///kiểm tra stack có rỗng không ?
{
    if(s.top==NULL)
        return true;
    return false;
}
bool Push(STACK &s, NODE *p) ///thêm một phần tử vào đầu stack LIFO
{
    if(p==NULL)
        return false;
    if(IsEmpty(s)==true){ ///if(!IsEmpty(s))
        s.top=p; ///node p là node đầu của stack
    }
    else{
        p->next=s.top;
        s.top=p;
    }
    return true;
}
bool Pop(STACK &s, int &x) ///lấy phần tử đầu stack và hủy nó đi
{                         ///x là giá trị cần lấy trong node
    if(IsEmpty(s)==true)
        return false;
    else{
        NODE *p=s.top; ///node thay thế cho stack bị hủy
        x=p->data; /// gán node đầu stack vào biến x
        s.top=s.top->next; ///cập nhận node đầu stack là node kế tiếp
        delete p;///xóa node đầu stack vừa lấy
    }
    return true;
}
bool Top(STACK &s, int &x) ///xem thông tin của phần tử đầu stack, không hủy nó, x là giá trị cần lấy ra để xem
{
    if(IsEmpty(s)==true)
        return false;
    x=s.top->data; ///lấy giá trị của phần tử đầu stack ra xem
    return true;
}
void XuatStack(STACK s)
{
    while(IsEmpty(s)==false){
        int x;
        Pop(s,x);
        cout<<x<<" ";
    }
}
void NhapStack(STACK &s)
{
    int luachon;
    while(true){
        system("cls");
        cout<<"1. Them phan tu vao stack"<<endl;
        cout<<"2. Xuat danh sach stack ra man hinh"<<endl;
        cout<<"3. Ket thuc"<<endl;

        cout<<"Nhap lua chon: ";
        cin>>luachon;
        if(luachon==1){
            int x;
            cout<<"Nhap phan tu can them: ";
            cin>>x;
            NODE *p=KhoiTaoNode(x);
            Push(s,p);
        }
        else if(luachon==2){
            XuatStack(s);
            system("pause");
        }
        else
            break;
    }
}
int main()
{
    STACK s;
    KhoiTaoStack(s);
    NhapStack(s);
    system("pause");
    return 0;
}

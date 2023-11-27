//wap using friend functios
#include<iostream>
using namespace std;
class Nik
{
    int a ,b;
    public :
    void setnum(int x, int y){
    a=x;
    b=y;
    }
    friend  Nik sumcomplex(Nik , Nik );
    void printnum()
    {
        cout<<"the first entered number is :" << a <<" second number is "<<b<<endl;
    }

};
 Nik sumcomplex(Nik o1, Nik o2)
 {
     Nik o3;
     o3.setnum((o1.a+o2.a),(o1.b+o2.b));
     return o3;
 }

int main()
{
    Nik c1 , c2, sum;
    c1.setnum(2,3);
    c1.printnum();

    c2.setnum(4,9);
    c2.printnum();

    sum = sumcomplex(c1,c2);
    sum.printnum();

    return 0;
}

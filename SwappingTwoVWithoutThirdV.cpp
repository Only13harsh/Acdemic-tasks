#include <iostream>
using namespace std;
int main() {
int a ,b;
cout<<"enter the value of a :"<<endl;
cin>>a;

cout<<"\nenter the value of b :"<<endl;
cin>>b;

cout<<"\nThe value of a before swapping = "<<a;
cout<<"\nThe value of b before swapping = "<<b;

a=a+b;
b=a-b;
a=a-b;

cout<<"\nThe value of a after swapping = "<<a;
cout<<"\nThe value of b after swapping = "<<b;

    return 0;
}

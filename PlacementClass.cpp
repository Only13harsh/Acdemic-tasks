#include <iostream>
using namespace std;
int main() {
// Write C++ code here
int no;
cout<<"Enter the car Number";
cin>>no;
if(no<1000&&no>9999){
cout<<"Invalid Car No";
}else{
int temp=no;
int sum=0;
while(temp>0){
int d=no%10;
sum+=d;
temp=temp/10;
}
if(sum%3==0||sum%5==0||sum%7==0){
cout<<"Valid no";
}else{
cout<<"Invaliud no";
}
}
}

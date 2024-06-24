#include<iostream>
using namespace std;

int main()
{
    int i;
    cout<<"enter the array length "<<endl;
    cin>>i;
    int arr[i];
    cout<<"enter the elements into the array "<<endl;
    for(int j=0;j<=i;j++)
    {
        cout<<"enter the "<<j<<" element "<<endl;
        cin>>arr[j];
    }
    for(int k =0;k<=i;k++)
    {
        if(arr[k]<arr[k+1])
        {
            cout<<arr[k+1] <<endl;
        }
    }

    return 0;
}

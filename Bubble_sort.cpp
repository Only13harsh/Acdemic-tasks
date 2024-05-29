#include<iostream>
using namespace std;
    void print(int a[], int n) //function to print array elements
    {
    int i;
    for(i = 0; i < n; i++)
    {
       cout<<a[i]<<" ";
    }
    }
 void bubble(int a[], int n) // function to implement bubble sort
 {
 int i, j, temp;
   for (i = 0; i < n - 1; i++)
   {
       for (j = 0; j < n - i - 1; j++)
       {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
    }

 }
 }
int main()
{
    int i, j,temp;
    int a[] = {34,75,21,18,45,3,56};
    int n = sizeof(a)/sizeof(a[0]);
    cout<<"Before sorting array elements are - \n";
    print(a, n);
    bubble(a, n);
    cout<<"\nAfter  sorting array elements are - \n";
    print(a, n);
return 0;
}

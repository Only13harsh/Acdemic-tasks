#include<iostream>
using namespace std;

int main()
{
    int i;
    cout << "Enter the array length: ";
    cin >> i;

    if (i <= 0) {
        cout << "Array length should be greater than 0." << endl;
        return 1;
    }

    int arr[i];
    cout << "Enter the elements into the array: \n" << endl;
    for(int j = 0; j < i; j++) 
    {
        cout << "Enter the " << j + 1 << " element: "; 
        cin >> arr[j];
    }

    int Max = arr[0]; 
    int Min = arr[0]; 
    for(int k = 1; k < i; k++) 
    {
        if(Max < arr[k])
        {
            Max = arr[k];
        }
        if(Min > arr[k])
        {
            Min = arr[k];
        }
    }

    cout << "\n Difference Between the Maximum and Minimum in the given array is: " << endl;
    cout << Max - Min << endl;

    return 0;
} 

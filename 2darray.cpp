#include <iostream>
using namespace std;
int main()
{
    int i, j;
    cout << "Enter the number of rows:";
    cin >> i; 
    cout << "Enter the number of columns: ";
    cin >> j;
    int arr[i][j];
    cout << "Enter the elements into the array:\n";
    for (int x = 0; x < i; x++)
    {
        for (int y = 0; y < j; y++)
        {
            cout << "Enter the element at location (" << x << ", " << y << "): ";
            cin >> arr[x][y];
        }
    }
    cout << "Array elements:\n";
    for (int x = 0; x < i; x++)
    {
        for (int y = 0; y < j; y++)
        {
            cout << arr[x][y] << " ";
        }
        cout << endl;
    }
    int l;
    cout << "Printing the Nth element of the third row:\n";
    cout << "Enter the value of N: ";
    cin >> l;
    cout << arr[2][l-1] << endl;
    cout << "Printing the third element of the second row: " << arr[1][2] << endl;
    cout << "Printing the first element of the first row: " << arr[0][0] << endl;

    return 0;
}

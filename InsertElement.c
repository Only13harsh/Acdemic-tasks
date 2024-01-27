#include <stdio.h>
#include <conio.h>

void main()
{
    int a[22], i, n, itemBegin, itemEnd;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    if (n >= 20)
    {
        printf("Array size exceeded. Maximum allowed size is 20. Exiting the program.\n");
        return;
    }

    printf("Enter the elements: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("\nEnter the element you want to add at the beginning: ");
    scanf("%d", &itemBegin);

    // Shift all elements to the right to make space for the new element at the beginning
    for (i = n - 1; i >= 0; i--)
    {
        a[i + 1] = a[i];
    }

    a[0] = itemBegin; // Add the new element at the beginning
    n++;              // Increase the size of the array

    printf("Enter the element you want to add at the end: ");
    scanf("%d", &itemEnd);

    a[n] = itemEnd; // Add the new element at the end
    n++;            // Increase the size of the array

    printf("\nUpdated array elements:\n");
    for (i = 0; i < n; i++)
    {
        printf("a[%d] ==== %d\n", i, a[i]);
    }
}

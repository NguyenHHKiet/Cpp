/*
Method 3 (Using comparator):
This problem can be easily solved by using the inbuilt sort function with a custom compare method.
On comparing any two elements there will be three cases:

1. When both the elements are even: In this case, the smaller element must appear in the left of the larger element in the sorted array.
2. When both the elements are odd: The larger element must appear on left of the smaller element.
3. One is odd and the other is even: The element which is odd must appear on the left of the even element.
*/

// C++ implementation of the approach
#include <algorithm>
#include <iostream>
using namespace std;

// Utility function to print
// the contents of the array
void printArr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}

// To do two way sort. Make comparator function
// for the inbuilt sort function of c++ such that
// odd numbers are placed before even in descending
// and ascending order respectively
bool compare(int a, int b)
{

    // If both numbers are even,
    // smaller number should
    // be placed at lower index
    if (a % 2 == 0 && b % 2 == 0)
        return a < b;

    // If both numbers are odd larger number
    // should be placed at lower index
    if (a % 2 != 0 && b % 2 != 0)
        return b < a;

    // If a is odd and b is even,
    // a should be placed before b
    if (a % 2 != 0)
        return true;

    // If b is odd and a is even,
    // b should be placed before a
    return false;
}

// Driver code
int main()
{
    int arr[] = {1, 3, 2, 7, 5, 4};
    int n = sizeof(arr) / sizeof(int);

    // Sort the array
    sort(arr, arr + n, compare);

    // Print the sorted array
    printArr(arr, n);

    return 0;
}

// Find the smallest and second smallest element in an array

/*Input : arr[] = {12, 13, 1, 10, 34, 1}
Output : The smallest element is 1 and second Smallest element is 10

Method 1(Simple approach)
A Simple Solution is to sort the array in increasing order.
The first two elements in the sorted array would be the two smallest elements.
In this approach, if the smallest element is present more than one time then
we will have to use a loop for printing the unique smallest and second smallest elements.

Time complexity: O(N*logN)
Auxiliary space: O(1)
*/
#include <algorithm>
#include <iostream>
using namespace std;
int main()
{
    int arr[] = {111, 13, 25, 9, 34, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    // sorting the array using
    // in-built sort function
    sort(arr, arr + n);
    // printing the desired element
    cout << "smallest element is " << arr[0] << endl;
    cout << "second smallest element is " << arr[1];
    return 0;
}
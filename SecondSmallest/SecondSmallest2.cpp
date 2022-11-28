/*
Method 2:
A Better Solution is to scan the array twice. In the first traversal find the minimum element.
Let this element be x. In the second traversal, find the smallest element greater than x.

Using this method, we can overcome the problem of Method 1 which occurs when
the smallest element is present in an array more than one time.
The above solution requires two traversals of the input array.

Time complexity: O(N)
Auxiliary space: O(1)

*/
// C++ program to find smallest and
// second smallest element in array
#include <algorithm>
#include <iostream>
using namespace std;
int main()
{
    int arr[] = {12, 13, 1, 10, 34, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int smallest = INT_MAX;
    // traversing the array to find
    // smallest element.
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < smallest)
        {
            smallest = arr[i];
        }
    }
    cout << "smallest element is: " << smallest << endl;

    int second_smallest = INT_MAX;

    // traversing the array to find second smallest element
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < second_smallest && arr[i] > smallest)
        {
            second_smallest = arr[i];
        }
    }
    cout << "second smallest element is: " << second_smallest << endl;
    return 0;
}

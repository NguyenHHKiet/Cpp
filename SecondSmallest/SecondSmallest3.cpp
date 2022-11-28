/*
An Efficient Solution can find the minimum two elements in one traversal. Below is the complete algorithm.
Algorithm:

1) Initialize both first and second smallest as INT_MAX
   first = second = INT_MAX
2) Loop through all the elements.
   a) If the current element is smaller than first, then update first and second.
   b) Else if the current element is smaller than second then update second

The same approach can be used to find the largest and second-largest elements in an array.

Time Complexity: O(n)
Auxiliary Space: O(1)
*/
// C++ program to find smallest and
// second smallest elements
#include <algorithm>
#include <iostream>
using namespace std; /* For INT_MAX */

void print2Smallest(int arr[], int arr_size)
{
    int i, first, second;

    /* There should be atleast two elements */
    if (arr_size < 2)
    {
        cout << " Invalid Input ";
        return;
    }

    first = second = INT_MAX;
    for (i = 0; i < arr_size; i++)
    {
        /* If current element is smaller than first
        then update both first and second */
        if (arr[i] < first)
        {
            second = first;
            first = arr[i];
        }

        /* If arr[i] is in between first and second
        then update second */
        else if (arr[i] < second && arr[i] != first)
            second = arr[i];
    }
    if (second == INT_MAX)
        cout << "There is no second smallest element\n";
    else
        cout << "The smallest element is " << first << " and second Smallest element is "
             << second << endl;
}

/* Driver code */
int main()
{
    int arr[] = {2, 12, 13, 1, 10, 34, 1, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    print2Smallest(arr, n);
    return 0;
}

// This is code is contributed by rathbhupendra

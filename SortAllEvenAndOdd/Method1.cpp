/*
Given an array of integers (both odd and even), sort them in such a way that the first part of the array
contains odd numbers sorted in descending order, rest portion contains even numbers sorted in ascending order.
Input: arr[] = {1, 2, 3, 5, 4, 7, 10}
Output: arr[] = {7, 5, 3, 1, 2, 4, 10}

Input: arr[] = {0, 4, 5, 3, 7, 2, 1}
Output: arr[] = {7, 5, 3, 1, 0, 2, 4}

Method 1 : Using Partition
1. Partition the input array such that all odd elements are moved to the left and all even elements on right. This step takes O(n).
2. Once the array is partitioned, sort left and right parts individually. This step takes O(n Log n).
Time complexity: O(n log n)
Auxiliary Space: O(1)
*/

// C++ program sort array in even and odd manner.
// The odd numbers are to be sorted in descending
// order and the even numbers in ascending order
#include <algorithm>
#include <functional>
#include <iostream>
using namespace std;

// To do two way sort. First sort even numbers in
// ascending order, then odd numbers in descending
// order.
void twoWaySort(int arr[], int n)
{

    // Current indexes from left and right
    int l = 0, r = n - 1;

    // Count of odd numbers
    int k = 0;

    while (l < r)
    {

        // Find first even number
        // from left side.
        while (arr[l] % 2 != 0)
        {
            l++;
            k++;
        }

        // Find first odd number
        // from right side.
        while (arr[r] % 2 == 0 && l < r)
            r--;

        // Swap even number present on left and odd
        // number right.
        if (l < r)
            swap(arr[l], arr[r]);
    }

    // Sort odd number in descending order`
    sort(arr, arr + k, greater<int>());

    // Sort even number in ascending order
    sort(arr + k, arr + n);
}

// Driver code
int main()
{
    int arr[] = {1, 3, 2, 7, 5, 4, 11, 23, 12, 17, 2, 11, 11};
    int n = sizeof(arr) / sizeof(int);
    twoWaySort(arr, n);
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}

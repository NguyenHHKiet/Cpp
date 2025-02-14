/*
2. Optimized Approach Using QuickSort
Here, an optimized solution is presented using the quicksort sorting algorithm.
Below is the C++ program to sort an array in ascending order using an optimized approach using quicksort:

Time Complexity:

Best Case –  O(n log n)
Worst Case-  O(n2)
 Space Complexity: O(1)
*/
// C++ program to sort an array in
// ascending order using optimized
// approach using quick sort
#include <iostream>
using namespace std;

void quickSort(int nums[], int low, int high);

// Driver code
int main()
{
    int nums[] = {1, 6, 3, 10, 50};
    int size_nums = (sizeof(nums) / sizeof(nums[0]));

    cout << "Before sorting array is: \n";
    for (int i = 0; i < size_nums; i++)
        cout << nums[i] << " ";
    cout << "\n\n";

    quickSort(nums, 0, size_nums - 1);

    cout << "After sorting array is: \n";

    for (int i = 0; i < size_nums; i++)
        cout << nums[i] << " ";
    cout << "\n";
    return 0;
}

/**
 * Sorts the specified array into ascending numerical order.
 *
 * @param nums the array to be sorted.
 * @param low for explaining the part of array working on.
 * @param high for explaining the part of array working on.
 */
void quickSort(int nums[], int low, int high)
{
    // Base Condition
    if (low >= high)
        return;

    // These are just for swapping
    // the elements.
    int start = low, end = high;
    int mid = start + ((end - start) / 2);
    int pivot = nums[mid];

    while (start <= end)
    {
        while (nums[start] < nums[end])
            start++;
        while (nums[end] > pivot)
            end--;
        if (start <= end)
        {
            // Swapping the start and end
            // elements.
            int x = nums[start];
            nums[start] = nums[end];
            nums[end] = x;
            start++;
            end--;
        }
    }
    quickSort(nums, low, end);
    quickSort(nums, start, high);
}

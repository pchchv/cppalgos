/**
 * @file
 * @brief Circle Sort Algorithm
 *
 * A pure implementation of circle sort algorithm in C++.
 * A detailed description of the algorithm:
 * https://iq.opengenus.org/circle-sort/
*/

#include<bits/stdc++.h>
using namespace std;
 
// Function to perform circular swaps recursively
// This function returns true if there was a swap
// operation performed.
bool circleSortRec(int a[], int low, int high)
{
    bool swapped = false;
 
    // base case
    if (low == high)
        return false;
 
    // storing the upper and lower bounds
    // of list to be used later in the
    // recursive case
    int lo = low, hi = high;
 
    while (lo < hi)
    {
        // swaps the pair of elements
        // if true
        if (a[lo] > a[hi])
        {
            swap(a[lo], a[hi]);
            swapped = true;
        }
        lo++;
        hi--;
    }
 
    // special case arises only for list
    // of odd size
    if (lo == hi)
        if (a[lo] > a[hi + 1])
        {
            swap(a[low], a[hi+1]);
            swapped = true;
        }
 
    // recursive case to check the
    // traverse lists as sub lists
    int mid = (high - low) / 2;
    bool firstHalf = circleSortRec(a, low, low+mid);
    bool secondHalf = circleSortRec(a, low+mid+1, high);
 
    return swapped || firstHalf || secondHalf;
}
 
// This function mainly calls circleSortRec
void circleSort(int a[], int n)
{
    // Keep calling circleSortRec while
    // there is a swap operation.
    while (circleSortRec(a, 0, n-1))
    {
       ;
    }
}


/** Main function */
int main() {
    int size;
    std::cout << "Enter the number of elements : ";
    std::cin >> size;

    int *arr = new int[size];
    std::cout << "Enter the unsorted elements : ";
    for (int i = 0; i < size; ++i) {
        std::cin >> arr[i];
    }

    circleSort(arr, size);

    std::cout << "Sorted array : ";
    for (int i = 0; i < size; i++) std::cout << arr[i] << " ";
    std::cout << "\n";

    delete[] arr;
    return 0;
}
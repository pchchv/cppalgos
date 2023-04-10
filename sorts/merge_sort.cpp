/**
 * @file
 * @brief Merege Sort Algorithm
 *
 * Merge Sort is an efficient, general purpose, comparison
 * based sorting algorithm.
 * Merge Sort is a divide and conquer algorithm.
 * A detailed description of the algorithm:
 * https://en.wikipedia.org/wiki/Merge_sort
 *
 */
#include <iostream>

/**
 *
 * The merge() function is used to merge the two halves.
 * Merge(arr, l, m, r) is a key process that assumes that
 * arr[l..m] and arr[m+1..r] are sorted,
 * and merges the two sorted subarrays into one.
 *
 * @param arr - array with two halves arr[l...m] and arr[m+1...r]
 * @param l - left index or index of the beginning of the first half of the array
 * @param m - right index or index of the first array half end
 * @param r - end index or right index of the second half array
 */
void merge(int *arr, int l, int m, int r) {
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;

    int *L = new int[n1], *R = new int[n2];

    for (i = 0; i < n1; i++) L[i] = arr[l + i];
    for (j = 0; j < n2; j++) R[j] = arr[m + 1 + j];

    i = 0;
    j = 0;
    k = l;
    while (i < n1 || j < n2) {
        if (j >= n2 || (i < n1 && L[i] <= R[j])) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    delete[] L;
    delete[] R;
}

/**
 * Merge sort is a divide-and-conquer algorithm,
 * it divides the input array into two halves,
 * calls itself for the two halves,
 * and then calls merge() to combine the two halves.
 *
 * @param arr is the array being sorted.
 * @param l - left index or starting index of the array
 * @param r - right index or end index of the array
 */
void mergeSort(int *arr, int l, int r) {
    if (l < r) {
        int m = l + (r - l) / 2;
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
        merge(arr, l, m, r);
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

    mergeSort(arr, 0, size - 1);

    std::cout << "Sorted array : ";
    for (int i = 0; i < size; i++) std::cout << arr[i] << " ";
    std::cout << "\n";

    delete[] arr;
    return 0;
}
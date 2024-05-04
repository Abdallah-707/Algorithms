//﴾إِنَّمَا يَخْشَى اللَّهَ مِنْ عِبَادِهِ الْعُلَمَاءُ إِنَّ اللَّهَ عَزِيزٌ غَفُورٌ﴿
#include <bits/stdc++.h>
#define int long long
//#define endl "\n "
using namespace std;
/*
<-----Complexity Analysis----->
-Space Complexity: O(N)
-Time Complexity: O(N log N)
*/
void merge(int arr[], int const left, int const mid,
           int const right)
{
    int const subArr1 = mid - left + 1;
    int const subArr2 = right - mid;

    // Create temp arrays
    auto *leftArr = new int[subArr1],
            *rightArr = new int[subArr2];

    // Copy data to temp arrays leftArr[] and rightArr[]
    for (auto i = 0; i < subArr1; i++)
        leftArr[i] = arr[left + i];
    for (auto j = 0; j < subArr2; j++)
        rightArr[j] = arr[mid + 1 + j];

    auto idxOfSubArr1 = 0, idxOfSubArr2 = 0;
    int idxOfMergedArr = left;

    // Merge the temp arrays back into arr[left..right]
    while (idxOfSubArr1 < subArr1
           && idxOfSubArr2 < subArr2) {
        if (leftArr[idxOfSubArr1]
            <= rightArr[idxOfSubArr2]) {
            arr[idxOfMergedArr]
                    = leftArr[idxOfSubArr1];
            idxOfSubArr1++;
        }
        else {
            arr[idxOfMergedArr]
                    = rightArr[idxOfSubArr2];
            idxOfSubArr2++;
        }
        idxOfMergedArr++;
    }

    // Copy the remaining elements of left[], if there are any
    while (idxOfSubArr1 < subArr1) {
        arr[idxOfMergedArr]
                = leftArr[idxOfSubArr1];
        idxOfSubArr1++;
        idxOfMergedArr++;
    }

    // Copy the remaining elements of right[], if there are any
    while (idxOfSubArr2 < subArr2) {
        arr[idxOfMergedArr]
                = rightArr[idxOfSubArr2];
        idxOfSubArr2++;
        idxOfMergedArr++;
    }
    delete[] leftArr;
    delete[] rightArr;
}

// begin is for left index and end is right index
// of the sub-array of arr to be sorted
void mergeSort(int array[], int const begin, int const end)
{
    if (begin >= end)
        return;

    int mid = begin + (end - begin) / 2;
    mergeSort(array, begin, mid);
    mergeSort(array, mid + 1, end);
    merge(array, begin, mid, end);
}


void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

signed main() {
    int arr[3] = {3 ,1 ,2};
    int size = sizeof(arr)/sizeof(arr[0]);
    mergeSort(arr,0,size-1);
    printArray(arr,size);
}

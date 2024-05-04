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
void merge(int arr[], int left, int mid, int right) {
    int i = left;
    int j = mid + 1;
    int k = left;
    int *temp = new int[right + 1];
    while (i <= mid || j <= right) {
        if (i > mid) {
            temp[k++] = arr[j++];
        }
        else if (j > right) {
            temp[k++] = arr[i++];
        }
        else if (arr[i] > arr[j]) {
            temp[k++] = arr[j++];
        }
        else {
            temp[k++] = arr[i++];
        }
    }
    for (int k = left; k <= right; k++) {
        arr[k] = temp[k];
    }
}

void mergeSort(int arr[], int start, int end) {
    if (start >= end)
           return;
    int mid = (start + end) / 2;
    mergeSort(arr, start, mid);
    mergeSort(arr, mid + 1, end);
    merge(arr, start, mid, end);
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

signed main() {
    int arr[3] = {3 ,1 ,2};
    int size = sizeof(arr)/sizeof(arr[0]);
    mergeSort(arr, 0, size - 1);
    printArray(arr, size);
}

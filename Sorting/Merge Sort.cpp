//﴾إِنَّمَا يَخْشَى اللَّهَ مِنْ عِبَادِهِ الْعُلَمَاءُ إِنَّ اللَّهَ عَزِيزٌ غَفُورٌ﴿
#include <bits/stdc++.h>
#define int long long
//#define endl "\n "
using namespace std;
/*
<-----Complexity Analysis----->
-Space Complexity: O(1)
-Time Complexity: O(N^2)
*/
int FindMinIndex(int a[], int i, int j)
{
    if (i == j)
        return i;
 
    // Find minimum of remaining
    int k = FindMinIndex(a, i + 1, j);
 
    // Return minimum of current and remaining
    return (a[i] < a[k])? i : k;
}
 
// Recursive selection sort. n is size of array and index
// is index of starting element.
void RSelectionSort(int a[], int n, int index = 0)
{
    // Return when starting and size are same
    if (index == n)
       return;
 
    // calling minimum index function for minimum index
    int k = FindMinIndex(a, index, n-1);
 
    // Swapping when index and minimum index are not same
    if (k != index)
       swap(a[k], a[index]);
 
    // Recursively calling selection sort function
    RSelectionSort(a, n, index + 1);
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
    RSelectionSort(arr,sizeof(arr)/sizeof(arr[0]));
    printArray(arr,sizeof(arr)/sizeof(arr[0]));
}

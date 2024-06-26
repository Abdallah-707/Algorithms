//﴾إِنَّمَا يَخْشَى اللَّهَ مِنْ عِبَادِهِ الْعُلَمَاءُ إِنَّ اللَّهَ عَزِيزٌ غَفُورٌ﴿
#include <bits/stdc++.h>
#define int long long
//#define endl "\n "
#include <random>
using namespace std;
/*
<-----Complexity Analysis----->
-Space Complexity: O(1)
-Time Complexity: O(N^2) as there are two nested loops:

One loop to select an element of Array one by one = O(N)
Another loop to compare that element with every other Array element = O(N)
So, overall complexity = O(N) * O(N) = O(N*N) = O(N^2)
*/
void selectionSort(int arr[], int n){
    int key = 0, j = 0 , min_idx;
    for (int i = 0; i < n - 1; i++) {
        min_idx = i;
      // Search the minimum element in unsorted array
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_idx]){
                min_idx = j;
            }
        }
      // Swap the minimum element with the first element
        if(min_idx != i){   // For Stable Sort
            swap(arr[min_idx], arr[i]);
        }
    }
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
    selectionSort(arr,sizeof(arr)/sizeof(arr[0]));
    printArray(arr,sizeof(arr)/sizeof(arr[0]));
}

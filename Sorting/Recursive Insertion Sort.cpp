
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
void RinsertionSort(int arr[], int n){
    // Base case 
    if (n <= 1) 
        return; 
  
    // Sort first n-1 elements 
    RinsertionSort( arr, n-1 ); 
  
    // Insert last element at its correct position 
    // in sorted array. 
    int last = arr[n-1]; 
    int j = n-2; 
  
    while (j >= 0 && arr[j] > last) 
    { 
        arr[j+1] = arr[j]; 
        j--; 
    } 
    arr[j+1] = last; 
}

void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++) {
        cout << arr[i] << " ";
        cout << endl;
    }
}


signed main() {
int arr[3] = {3 ,1 ,2};
    RinsertionSort(arr,sizeof(arr)/sizeof(arr[0]));
    printArray(arr,sizeof(arr)/sizeof(arr[0]));
}

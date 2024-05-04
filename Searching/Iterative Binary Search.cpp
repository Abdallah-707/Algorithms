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
int binarySearch(int arr[], int l, int r, int x)
{
    while (l <= r) {
        int m = l + (r - l) / 2;

        // Check if x is present at mid
        if (arr[m] == x)
            return m;

        // If x greater, ignore left half
        if (arr[m] < x)
            l = m + 1;

            // If x is smaller, ignore right half
        else
            r = m - 1;
    }

    // If we reach here, then element was not present
    return -1;
}

signed main() {
    int arr[] = { 2, 3, 4, 10, 40 };
    int x = 10;
    int size = sizeof(arr)/sizeof(arr[0]);
    int result = binarySearch(arr, 0, size - 1, x);
    (result == -1)
    ? cout << "Element is not present in array"
    : cout << "Element is present at index " << result;
};

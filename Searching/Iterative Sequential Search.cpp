//﴾إِنَّمَا يَخْشَى اللَّهَ مِنْ عِبَادِهِ الْعُلَمَاءُ إِنَّ اللَّهَ عَزِيزٌ غَفُورٌ﴿
#include <bits/stdc++.h>
#define int long long
//#define endl "\n "
using namespace std;
/*
<-----Complexity Analysis----->
-Space Complexity: O(1)
-Time Complexity: O(N)
*/
int SequentialSearch(int a[],int s,int x){
    for (int i = 0; i < s; i++) {
        if (a[i] == x)
            return i;
    }
    return -1;
}

signed main() {
    int arr[] = { 2, 3, 4, 10, 40 };
    int x = 2;
    int size = sizeof(arr)/sizeof(arr[0]);
    int result = SequentialSearch(arr, size, x);
    (result == -1)
    ? cout << "Element is not present in array"
    : cout << "Element is present at index " << result;
};

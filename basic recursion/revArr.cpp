#include <bits/stdc++.h>
using namespace std;

vector<int> reverseArray(vector<int>& arr){
    int n = arr.size();

    vector<int> newArr(n);

    for (size_t i = 0; i < n; i++)
    {
        newArr[i] = arr[n - 1 - i];
    }
    return newArr;
}

// better approach

vector<int> revArray(vector<int>& arr){
    int p1 = arr[0];
    int p2 = arr[arr.size()-1];
    while (p1 < p2)    
    {
        swap(arr[p1],arr[p2]);
        p1++;
        p2--;
    }
    return arr;
}


int main() {
    vector<int> arr = {5,4,3,2,1};
    // vector<int> revArr = reverseArray(arr);
    vector<int> revArr = revArray(arr);
    for(int num : revArr){
        cout << num << " ";
    }
    cout << "\n";
    
    return 0;
}
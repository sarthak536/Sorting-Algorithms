#include<bits/stdc++.h>
using namespace std;


void InsertionSort(vector<int>&arr) {
    int n = arr.size();

    for(int i = 0; i < n; i++) {
        int j = i;
        while(j > 0 && arr[j-1] > arr[j]) {
            int temp = arr[j-1];
            arr[j-1] = arr[j];
            arr[j] = temp;
            // swap(arr[j-1],arr[j]);
            j--;
        }
    }
    return;
}

int main() {
    vector<int> arr = {23, 5, 87, 12, 45, 2, 90, 33, 76, 4, 18, 66, 27, 9, 50};

    InsertionSort(arr);
    for(int i = 0; i < arr.size(); i++) {
        cout<<arr[i]<<" ";
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

int PlacePivot(vector<int>& arr, int low, int high) {
    int pivot = arr[low];
    int left = low;
    int right = high;
    while(left < right) {
        while(arr[left] <= pivot && left < high) left++;
        while(arr[right] > pivot && right > low) right--;
        if(left < right) {
            int temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;
        }
    }
    arr[low] = arr[right];
    arr[right] = pivot;
    return right;
}

void QuickSort(vector<int>& arr, int low, int high) {
    if(low < high) {
        int pindex = PlacePivot(arr,low,high);
        QuickSort(arr,low,pindex-1);
        QuickSort(arr,pindex+1,high);
    }
}

int main() {
    vector<int> arr = {23, 5, 87, 12, 45, 2, 90, 33, 76, 4, 18, 66, 27, 9, 50};
    int n = arr.size();
    QuickSort(arr,0,n-1);
    for(int i = 0; i < arr.size(); i++) {
        cout<<arr[i]<<" ";
    }
    return 0;
}
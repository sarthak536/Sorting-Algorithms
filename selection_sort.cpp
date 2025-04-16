#include<bits/stdc++.h>
using namespace std;


void SelectionSort(vector<int>&arr) {
    for(int i = 0; i < arr.size()-1; i++) {
        int min = i;
        for(int j = i; j < arr.size(); j++) {
            if(arr[j] < arr[min]) min = j; 
        }
        int temp = arr[i]; 
        arr[i] = arr[min];
        arr[min] = temp;
        // swap(arr[i],arr[min]);
    }
    return;
}

int main() {
    vector<int> arr = {3, 5, 87, 12, 45, 2, 90, 33, 76, 4, 18, 66, 27, 9, 50};

    SelectionSort(arr);
    for(int i = 0; i < arr.size(); i++) {
        cout<<arr[i]<<" ";
    }
    return 0;
}
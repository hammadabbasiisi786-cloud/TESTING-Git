#include <iostream>

using namespace std;

void swap(int arr[], int &i, int &j){
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

int main(){
    int nums[] = {1, 2, 3, 4, 5};
    int i = 0, j = 0;

    cout << "Enter 2 indexes to swap (1, 3): ";
    cin >> i >> j;

    if (i >= sizeof(nums)/sizeof(nums[0]) || j >= sizeof(nums)/sizeof(nums[0]) || i < 0 || j < 0){
        cout << "Invalid indices.";
        return 1;
    }

    swap(nums, i, j);

    for (int num : nums){
        cout << num << " ";
    }


    return 0;
}
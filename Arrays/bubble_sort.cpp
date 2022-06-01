#include<iostream>
using namespace std;

void bubble_sort(int*arr,int n){
    for (int i = 0; i < n;i++){
        for (int j = 0; j < n - i - 1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}
int main(){
    int n;
    cout << "Enter the number of elements in the array"<<endl;
    cin >> n;
    int arr[1000];
    cout << "Enter the elements of the array" << endl;
    for (int i = 0; i < n;i++){
        cin >> arr[i];
    }

    cout << "Unsorted Array: " << endl;
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }

    bubble_sort(arr, n);
    cout << "Sorted Array: " << endl;
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    return 0;
}
#include<iostream>
using namespace std;
void insertion_sort(int*arr,int n){
    for (int i = 1; i < n;i++){
        int temp = arr[i];
        int j = i - 1;
        while (j>=0 && arr[j]>temp){
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
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

    insertion_sort(arr, n);
    cout << "Sorted Array: " << endl;
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    return 0;
}
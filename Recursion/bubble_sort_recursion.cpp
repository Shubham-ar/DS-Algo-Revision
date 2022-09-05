#include<iostream>
using namespace std;

void bubble_sort(int *arr, int n){

    if(n==1){
        return;
    }
    for (int j = 0; j < n-1;j++){
        if(arr[j]>arr[j+1]){
            swap(arr[j], arr[j + 1]);
        }
    }
    bubble_sort(arr,n-1);
}

void bubble_sort_2(int *arr,int n,int j){
    if(n==1){
        return;
    }
    if(j==n-1){
        bubble_sort_2(arr, n - 1, 0);
        return;
    }

        // recursive case
    if(arr[j]>arr[j+1]){
        swap(arr[j], arr[j + 1]);
    }
    bubble_sort_2(arr, n, j + 1);
return;
}

int main(){
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n;i++){
        cin>>arr[i];
    }

    bubble_sort_2(arr, n,0);

    for (int i = 0; i < n;i++){
        cout << arr[i] << " ";
    }
}
#include<iostream>
#include<climits>
using namespace std;

void selection_sort(int*arr,int n){
    for (int i = 0; i < n-1;i++){
        int local_smallest = INT_MAX;
        int counter = -1;
        for (int j = i; j < n; j++)
        {
            if(arr[j]<local_smallest){
                local_smallest = arr[j];
                counter = j;
            }
        }
        swap(arr[i], arr[counter]);
    }
}
int main(){
    cout << "Enter the number of elements" << endl;
    int n;
    cin >> n;
    int arr[1000];
    cout << "Enter elements" << endl;
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    cout << "Array before Sorting" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i]<<" ";
    }
    cout << "Array after Sorting" << endl;
    selection_sort(arr, n);
    for (int i = 0; i < n;i++){
        cout << arr[i]<<" ";
    }
    return 0;
}
#include<iostream>
using namespace std;


// in this program we are modifying our bubble sort method to
// accept a function as a parameter and give results accordingly

bool compare(int a, int b){
    return a > b;
}

void bubble_sort(int*arr,int n, bool (&compare)(int a,int b)){
    for (int i = 0; i < n;i++){
        for (int j = 0; j < n - i - 1;j++){
            if(compare(arr[j],arr[j+1])){
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

    bubble_sort(arr, n,compare);
    cout << "Sorted Array: " << endl;
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    return 0;
}
#include<iostream>
#include<algorithm>
using namespace std;

// if we need to sort the function in a decreasing order, 
// we need to declare a comparator function
bool compare(int a, int b){
    return a > b;
}
int main(){

    int n;
    cout << "Enter n";
    cin >> n;
    int arr[1000];
    for (int i = 0; i < n;i++){
        cin >> arr[i];
    }

    // add compare if you need to use the comparator.
    sort(arr, arr + n,compare);
    // using the inbuilt sort 5function
    // sort(s,n)
    // s is inclusive, n is exclusive

    for (int i = 0; i < n;i++){
        cout << arr[i]<<" ";
    }
    return 0;
}
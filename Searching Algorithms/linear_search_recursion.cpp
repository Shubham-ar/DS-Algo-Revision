#include<iostream>
using namespace std;
int linear_search_recursion(int *arr,int i,int n,int key){
    if(arr[i]==key){
        return i;
    }
    if(i==n){
        return -1;
    }
    return linear_search_recursion(arr, i + 1, n, key);
}
    int main(){

    int n;
    cin >> n;
    int arr[n];


    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the element to be found" << endl;
    int key;
    cin >> key;


    cout<<linear_search_recursion(arr,0, n, key);

    return 0;
}
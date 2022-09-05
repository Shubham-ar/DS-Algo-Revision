#include<iostream>
using namespace std;
int main(){

    int n, key;
    cout << "Enter number of elements and the key." << endl;
    cin >> n >> key;
    int arr[n];

    cout << "Enter the elements of the array" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int place = -1;
    for (int i = 0; i < n;i++){
        
        if (arr[i] == key)
            place = i;
    }
        if(place!=-1){
            cout << "Key found at place" << place << endl;
        }
        else{
            cout << "Element not found in the array" << endl;
        }
        return 0;
}
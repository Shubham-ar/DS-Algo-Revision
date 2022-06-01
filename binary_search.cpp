#include<iostream>
using namespace std;

int binary_Search(int arr[],int n, int key){
    int s = 0;
    int e = n-1;
    while(s<=e){
        int mid = (s + e) / 2;
        if (arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key){
            e = mid - 1;
        }
        else{
            s = mid + 1;
        }
    }
        return -1;
}
int main(){
    cout << "Enter the number of elements";
    int n;
    cin >> n;
    int arr[1000];
    cout << "Enter the key to be found";
    int key;
    cin >> key;
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }

    cout<<binary_Search(arr, n, key);
   
    return 0;
}
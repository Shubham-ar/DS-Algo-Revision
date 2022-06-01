#include<iostream>
using namespace std;

int linearSearch(int arr[],int n, int key){
    for (int i = 0; i < n;i++){
        if(arr[i]==key){
            return i;
            break;
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

    cout<<linearSearch(arr, n, key);
   
    return 0;
}
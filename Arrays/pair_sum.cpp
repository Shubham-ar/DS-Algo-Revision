#include<iostream>
using namespace std;
int main(){

    int n;
    cout << "Enter the number of elements in the arary: ";
    cin >> n;
    int arr[1000];
    cout << "Etner the elements"<<endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the key to be found ";
    int key;
    cin >> key;

    // now for the pair sum take 2 pointers

    int i = 0;
    int j = n - 1;

    while(i<j){
        int currentsum = arr[i] + arr[j];
        if (currentsum == key)
        {
            cout << "The pair is : " << arr[i] << " , " << arr[j];
            i++;
            j--;
        }
        else if(currentsum>key){
            j--;
        }
        else if(currentsum<key){
            i++;
        }
    }
    return 0;
}
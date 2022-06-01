#include<iostream>
#include<climits>
using namespace std;
int main(){
    cout << "Enter the number of elements";
    int n;
    cin >> n;
    int arr[1000];
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }

    int smallest = INT_MAX;
    int largest = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        smallest = min(smallest, arr[i]);
        largest = max(largest, arr[i]);
    }
    cout << "Minimum: " << smallest << " Largest: " << largest;
    return 0;
}
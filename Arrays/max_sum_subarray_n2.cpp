#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[1000];
    int helper = 0;
    // creating a commulative sum array

    // for (int i = 0; i < n; i++)
    // {
    //     int a;
    //     cin >> a;
    //     arr[i] = helper + a;
    //     helper = arr[i];
    // }

    for (int i = 0; i < n;i++){
        cin >> arr[i];
    }
    // creating a commulative sum array.
    for (int i = 1; i < n;i++){
        arr[i] += arr[i - 1];
    }
    int left = 0;
    int right = 0;
    int max_sum = INT_MIN;
    for (int i = 0; i < n;i++){
        for (int j = i; j < n;j++){
            int current_sum = arr[j] - arr[i - 1];

            if(current_sum>max_sum){
                max_sum = current_sum;
                left = i;
                right = j;
            }
        }
    }
    cout << "maximum sum is:" << max_sum<<" from index "<<left<<" to "<<right;

    return 0;
}
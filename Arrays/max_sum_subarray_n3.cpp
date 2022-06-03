#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[1000];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int max_sum = INT_MIN;
    int s, e;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n;j++){
            int localmax = 0;
            for (int k = i; k <= j; k++)
            {
                localmax += arr[k];
            }
            if(localmax>=max_sum){
                max_sum = localmax;
                s = i;
                e = j;
            }
        }
    }
    cout << "Maximum Sum is: " << max_sum;
    cout << " From index " << s << " to " << e << endl;

    return 0;
}
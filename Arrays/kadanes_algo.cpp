// the most important algo in terms of interveiw POV
#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[1000];
   
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // kadanesalgo
    int ms = 0;
    int cs = 0;
    for (int i = 0; i < n; i++)
    {
        cs = cs + arr[i];
        if(cs<0){
            cs = 0;
        }
        ms = max(cs, ms);
    }
    cout << "Maximum Sum is: " << ms;
    return 0;
}
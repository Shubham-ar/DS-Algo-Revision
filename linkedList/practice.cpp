#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> nums;
    vector<int> prefixsumarray;
    int n;
    cin >> n;
    for (int i = 0; i < n;i++){
        int n;
        cin >> n;
        nums.push_back(n);
    }
    prefixsumarray.push_back(nums[0]);

    return 0;
}
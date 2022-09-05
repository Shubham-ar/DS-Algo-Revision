// given an integer say 2-48. print "two zero four eight using recursion"

#include<iostream>
using namespace std;
char names[][10] = {"zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};

void print(int n)
{
    // base case
    if(n==0){
        return;
    }
    print(n / 10);
    cout<<names[n % 10]<<" ";
}

int main(){

    int n;
    cin>>n;
    print(n);

    return 0;
}
// ÷givena brick wall 4xn and tiles of sixe 4x1, you hhave to find the total number of
// ways toa arrange thes tileson the wall

#include<iostream>
using namespace std;

int numberOfWays(int n){
    if(n<4){
        return n;
    }
    else{
        return numberOfWays(n - 1) + numberOfWays(n - 4);
    }
}
int main(){

    int n;
    cin >> n;

    cout << "The number of ways the tiles can be placed are " << numberOfWays(n) << endl;
    return 0;
}
#include<iostream>
using namespace std;
int main(){

    int a[] = {1, 2, 3, 4, 5};

    char c[] = {'a', 'b', 'c', 'd', 'e', '\0'};
    cout << a <<endl<< sizeof(a)<<endl;
    cout << c <<endl<<sizeof(c)<< endl;
    // the cin just does not works with inputting a sentence.
    // we use cin.get() for that work.
    // cin.get reads a single char. We put loop to read characters until we get a new line character
    // i.e '\n';

    

    return 0;
    }
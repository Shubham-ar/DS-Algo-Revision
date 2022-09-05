#include<iostream>
using namespace std;
int stringtoInteger(string s, int len){
    if(len==1){
        return s[0]-'0';
    }
    else{
        int prevans= stringtoInteger(s,len-1);
        int currentans= s[len-1]-'0';
        return prevans*10 + currentans;
    }
}
int main(){
    string s;
    cin>>s;

    cout<<stringtoInteger(s,s.length());


    return 0;
}
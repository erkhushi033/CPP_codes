#include<iostream>
#include<math.h>
#include<string>
using namespace std;
int main (){
    int n;
    cin>>n;
    string st;
    int i=0;
    while(n!=0){
        int bit=n&1;
        if(bit==1){
           int newbit=bit^1;
          st= to_string(newbit)+st;
        }
        else if(bit==0){
           int newbi=bit^1;
          st= to_string(newbi)+st;
        }
        n=n>>1;
        i++;
            cout<<st;

    }

}
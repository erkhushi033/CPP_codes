#include<iostream>
#include<cmath>
using namespace std;
int dec2bin(int n){
    int i=0,res=0;
    while(n>0){
        int bit=n&1;
        if(bit==1){
            res=res+bit*(pow(10,i));
        }
        n=n>>1;
        i++;

    }
    return res;
}
int main(){
    int n;
    cout<<"Enter a decimal no.\n";
    cin>>n;
    cout<<"Binary conversion is : "<<dec2bin(n)<<endl;
}
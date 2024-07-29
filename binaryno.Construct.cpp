#include<iostream>
#include<cmath>
using namespace std;
int generate2(int i,int j){
    int n=0;
    while(i--){
        n=n|(1<<i+j);
    }
    return n;
}
int main(){
    int i,j;
    cout<<"Enter a i  & j no.\n";
    cin>>i>>j;
    cout<<"Binary conversion is : "<<generate2(i,j)<<endl;
}
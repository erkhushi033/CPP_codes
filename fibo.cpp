#include<iostream>
using namespace std;
int main(){
    int n=10;
    int a=0,b=1;
    for(int i=1;i<=n;i++){
        int nn=a+b;
        cout<<nn<<" ";
        a=b;
        b=nn;
    }
}

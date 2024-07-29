#include<iostream>
#include<cmath>
using namespace std;
int bin2dec(int n){
    int i=0,res=0;
    while(n!=0){
        int bit=n%10;
        if(bit==1){
            res=res+bit*(pow(2,i));
        }
        n=n/10;
        i++;
    }
    return res;
}
int main(){
    int n;
    cout<<"Enter a binary no.\n";
    cin>>n;
    cout<<"The decimal conversion is : "<<bin2dec(n)<<endl;

}
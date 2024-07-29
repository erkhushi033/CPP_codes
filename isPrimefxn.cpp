#include<iostream>
using namespace std;
bool isPrime(int n){
    int i =2;
    if(n%i==0&&i<n){
return 0;
i++;
    }
    else return 1;

}
int main(){
    int n;
    cin>>n;
    cout<<isPrime(n);
}
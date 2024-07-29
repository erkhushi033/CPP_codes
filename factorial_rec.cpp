#include<iostream>
using namespace std;
int factorial(int n){
    if(n==0)
    return 1;

   /*
    int smaller_prob=factorial(n-1);
     int bigger_prob=n*smaller_prob;
     return bigger_prob;
     */
    return n*factorial(n-1);
}
int main(){
    int n;
    cin>>n;
    cout<<factorial(n);
}

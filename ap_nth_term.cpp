#include<iostream>
using namespace std;
int nth_term(int n){
    return (n*3)+7;
}
int main(){
    int n;
    cout<<"Enter the term\n";
    cin>>n;
    nth_term(n);
    cout<<"Nth term is : "<<nth_term(n)<<endl;
}
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    switch(1){
        case 1: if(n/100!=0){
        cout<<n/100<<" : 100 Notes"<<endl;
        n=n%100;}
        case 2: if(n/50!=0){
        cout<<n/50<<" : 50 Notes"<<endl;
        n=n%50;}
        case 3: if(n/20!=0){
        cout<<n/20<<" : 20 Notes"<<endl;
        n=n%20;}
        case 4: if(n/1!=0){
        cout<<n/1<<" : 1 Notes"<<endl;
        break;
        }

    }
}

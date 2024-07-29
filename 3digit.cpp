#include<iostream>
#include<string>
using namespace std;
int main(){
    string u1,l1;
   
    int i,m,n,a,b,c;
    cout<<"enter upper limit\n";
    cin>>u1;
     cout<<"enter lower limit\n";
    cin>>l1;
     int u=stoi(u1);
    int l=stoi(l1);
    for(int i=l;i<=u;i++){
        m=i;
        a=i%10;
        n=i/10;
        b=n%10;
        n=n/10;
        c=n%10;
        if(a==b||b==c||c==a){
        continue;
        }
        else{
        cout<<m<<endl;
        }
    }

}
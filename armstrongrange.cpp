#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int u,l,n,m;
    double rem;
    bool found=true;
    cout<<"Enter the upperbound\n";
    cin>>u;
    cout<<"Enter the lowerbound\n";
    cin>>l;
    for(int n=u;n<=l;n++){
    m=n;
    double c=0,b=0;
    while(m!=0)
    {

        m=m/10;
        ++c;
    }

    m=n;
    while(m!=0)
    {
    rem=m%10;
        b=b+pow(rem,c);
        m=m/10;
    }
    if((b==n)){
    cout<<n<< " ";
    found=true;
    }
    }
    
    
    return 0;
}
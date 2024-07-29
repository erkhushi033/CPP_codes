#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n,m,p,rem;
    double c=0,b=0,a;
    cout<<"Enter the number\n";
    cin>>n;
    m=n;
    while(m>0)
    {
        rem=m%10;
        m=m/10;
        c++;
    }
    p=n;
    while(p>0)
    {
        a=p%10;
        b=b+pow(a,c);
        p=p/10;
    }
    if((b==n))
    cout<<n<<" is an armstrong";
    else
    cout<<n<<" is  not an armstrong";
}
#include<iostream>
using namespace std;
int main()
{
    int n,m,i=1,j,k=1;
    int v=1;
    cin>>n;
    /**/
        while(k<=n/3){
            int m=n;
            if(k%2!=0){
                if(m%3!=0){
                    continue;
                    m--;
                }
   while(i<=3){
        j=0;
        while(j<i){
        cout<<" ";
        j++;
    }
    cout<<"*"<<endl;
    i++;
    }
            }
            else if(k%2==0){
if(m%3!=0){
    continue;
    m--;
}
            
        while(i<=3){
        j=3;
        while(j>i){
        cout<<" ";
        j--;
    }
    cout<<"*"<<endl;
    i++;
    }    
    }
    k++;
        }

    
}
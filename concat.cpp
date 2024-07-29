#include<iostream>
#include<string>
using namespace std;
int main(){
    string num1,num2,st;
    cout<<"Enter str1\n";
    cin>>num1;
      cout<<"Enter str2\n";
    cin>>num2;
    
    int i,sum=0,n,m,j;
    int l1 =num1.length();
    int l2=num2.length();
    int n1=stoi(num1);
    int n2=stoi(num2);
           for(i=1;i<=l1;i++){
            if(i<j){
                n=0;
            }
            else if(i==j){
                continue;
            }
        n=n1%10;
        for(j=1;j<=l2;j++){
                if(i>j){
                m=0;
l2++;
                continue;
                }
                        else if(i==j){
m=n2%10;
            sum=n+m;
            st=(to_string(sum))+st;
            n2=n2/10;
            continue;            }

            
        }
        n1=n1/10;
        
    }cout<<st<<endl;

    }

   
 


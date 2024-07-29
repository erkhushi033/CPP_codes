#include<iostream>
using namespace std;
bool check(){
    int n;
cin>>n;
if(n%2==0){
        return true;
        }
        else 
        return false;


}
int main(){

int ans=check();
cout<<"answer is "<<ans<<endl;
return 0;
}

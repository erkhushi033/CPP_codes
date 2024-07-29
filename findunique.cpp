#include<iostream>
using namespace  std;
int uniqueElement1(int arr[],int n){
    int find;
        for(int i=0;i<n;i++){
             find=arr[i];
             int c=0;
        for(int j=0;j<n;j++){
            if(find==(arr[j])){
                c++;
            }
        }
            if(c==1){
                return find;   
        }       
}
 return 0;
}
int uniqueElement2(int arr[],int n){
    int result=0;
    for(int i=0;i<n;i++){
        result=result^arr[i];
    } 
    return result;
    
    }
int main(){
    int arr[6]={2,2,4,4,1,4};
    if(uniqueElement1)
    cout<<"Unique element "<<uniqueElement1(arr,6)<<" is found"<<endl;
    else
        cout<<"Unique element not found"<<endl;

         if (uniqueElement2) {
        cout << "Unique element " << uniqueElement2 << " is found" << endl;
    } else {
        cout << "Unique element not found" << endl;
    }

    return 0;

}
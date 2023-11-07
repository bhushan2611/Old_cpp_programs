
#include<iostream>
using namespace std;
int main(){
    int arr[32]={};
    int i=31;
    int num,rem=0,ans=0;
    cout<<"enter decimal number";
    cin>>num;
    while(num>0){
        rem=num%2;
        num=num/2;
        arr[i]=rem;
        i--;
    }
    cout<<"\nbinary of given number is: ";
    for(int j=0;j<32;j++){
        if(arr[j]==1){
            for(int k=j;k<32;k++){
                cout<<arr[k];
            } 
            break;    
        }
    }
        return 0;
}
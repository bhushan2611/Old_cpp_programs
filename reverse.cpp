#include<bits/stdc++.h>
using namespace std;
int rev(int num){
    int temp = num;
    if(num<0) num = -num;
    int rev=0,rem;
    while (num)
    {
        rem = num%10;
        if(rev > INT_MAX/10 || rev < INT_MIN/10){
            return 0;
        }
        else {
            rev = (rev * 10) + rem;
            num /= 10;
        }
    }
}
int main(){
    int num;
    cout<<"enter a number: ";
    cin>>num;
    int x = rev(num);
    cout<<x;
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

int main(){
    map<int, multiset<string>> m;
    cout<<"enter size of map: ";
    int N;
    cin>>N;
    cout<<"enter ages and names"<<endl;
    for(int i=0; i<N; ++i){
        int age;
        string name;
        cin>>age>>name;
        m[age].insert(name);
    }
    for(auto &rec : m){
        cout<<rec.first<<" ";
        for(auto &ls : rec.second){
            cout<<ls<<" ";
        }
        cout<<endl;
    }
    return 0;
}
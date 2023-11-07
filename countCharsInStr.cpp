// #include<bits/stdc++.h>
#include<iostream>
#include<string>
#include<vector>
#include<map>
using namespace std;

int main(){
    int arr[26] = {};
    cout<<"enter number of words";
    int N;
    cin>>N;
    cout<<"enter "<<N<<" words";
    vector<string> v;
    for(int i=0; i<N; ++i){
        string s;
        cin>>s;
        v.push_back(s);
    }

    // using mapping with array
    for(int i=0; i<v.size(); ++i){
        for(int j=0; j<v[i].size(); ++j){
            int loc = v[i][j] - 97;
            arr[loc]++;
        }
    }
    for(int i=0; i<26; ++i){
        if(arr[i] != 0){
            char ch = i + 97;
            cout<<ch<<": "<<arr[i]<<endl;
        }
    }

    //using predefined map STL
    // map<char,int> m;
    // for(int i=0; i<v.size(); ++i){
    //     for(int j=0; j<v[i].size(); ++j){
    //         m[v[i][j]]++;
    //     }
    // }
    // for(auto it : m){
    //     cout<<it.first<<": "<<it.second<<endl;
    // }
    return 0;
}

//input : dhirajgirase dhirajrajput bhushan mayur pralhad
//output: a 8 b 1 d 3 e 1 g 1 h 5 i 3 j 3 l 1 m 1 n 1 p 2 r 6 s 2 t 1 u 3 y 1
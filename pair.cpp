#include<bits/stdc++.h>
using namespace std;

int main(){
    pair<int, string> p[3];
    p[0] = {1, "abc"};
    p[1] = {2, "xyz"};
    p[2] = make_pair(3,"pqr");
    for(int i=0; i<3; i++){
        cout<<p[i].first<<" "<<p[i].second<<endl;
    }
    return 0;
}
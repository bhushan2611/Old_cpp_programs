#include<bits/stdc++.h>  // no need to this header file
#include<fstream>
using namespace std;
void copy(char *f1, char *f2){
    ifstream fin;
    ofstream fout;
    fin.open(f1);
    fout.open(f2);
    char ch=fin.get();
    while(!fin.eof()){
        fout<<ch;
        ch=fin.get();
    }
}
int main(){
    copy("abc.txt","abcCopy.txt");
    cout<<"copied successfully";
    return 0;
}
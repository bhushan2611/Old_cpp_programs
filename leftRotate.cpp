#include <bits/stdc++.h>
using namespace std;

int main()
{
    int size, R, count = 0;
    cout << "enter size ";
    cin >> size;
    int arr[size];
    cout << "enter element ";
    for (int i = 0; i < size; i++)
        cin >> arr[i];
    cout<<"enter value of R: ";
    cin >> R;
    R=R%size;
    int temp[R];
    for (int j = 0; j < R; j++)
        temp[j] = arr[j];
    for (int k = R; k < size; k++)
        arr[count++] = arr[k];
    int c = 0;
    for (int l = count; l < size; l++)
        arr[l] = temp[c++];
    for (int i = 0; i < size; i++)
        if(i<size-1)
            cout << arr[i] << " ";
        else    
            cout<<arr[i];
    return 0;
}
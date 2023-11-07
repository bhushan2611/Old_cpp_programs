#include <iostream>
#include <stdlib.h>
using namespace std;
class arr
{
private:
    int a[10], n;

public:
    void get();
    void insert();
    void del();
    void view();
};

void arr ::get()
{
    cout << "enter size of array: ";
    cin >> n;
    cout << "\nenter elements of array: " << endl;
    for (int i = 0; i < n; i++)
        cin >> a[i];
}
void arr ::insert()
{
    cout << "\nenter position for insertion: ";
    int k, item;
    cin >> k;
    cout << "\nenter element: ";
    cin >> item;
    for (int i = n; i >= k; i--)
    {
        a[i] = a[i - 1];
    }
    a[k] = item;
    n++;
}
void arr ::del()
{
    cout << "\nenter position for deletion: ";
    int d;
    cin >> d;
    for (int i = d; i < n; i++)
    {
        a[i] = a[i + 1];
    }
    n--;
}
void arr ::view()
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}
int main()
{
    arr o;
    o.get();
    o.insert();
    o.view();
    o.del();
    o.view();
    return 0;
}
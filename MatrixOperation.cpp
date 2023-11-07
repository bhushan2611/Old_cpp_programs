#include <iostream>
using namespace std;
class mat
{
    int arr1[5][5], arr2[5][5], arr3[5][5], mul[5][5] = {}, row, col, i, j, k;

public:
    void get();
    void add();
    void sub();
    void multi();
    void trans();
};
void mat ::get()
{
    cout << "\nenter value of row: ";
    cin >> row;
    cout << "\nenter value of column: ";
    cin >> col;
    cout << "\nenter elements of first matrix:\n";
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            cin >> arr1[i][j];
        }
    }
    cout << "\nfirst matrix is: \n";
    for (i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr1[i][j] << " ";
        }
        cout << endl;
    }

    cout << "\nenter value of row: ";
    cin >> row;
    cout << "\nenter value of column: ";
    cin >> col;
    cout << "\nenter elements of second matrix:\n";
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            cin >> arr3[i][j];
        }
    }
    cout << "\nSecond matrix is: \n";
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            cout << arr3[i][j] << " ";
        }
        cout << endl;
    }
}
void mat ::trans()
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            arr2[j][i] = arr1[i][j];
        }
    }

    cout << "\nTranspose of first matrix is: \n";
    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < row; j++)
        {
            cout << arr2[i][j] << " ";
        }
        cout << endl;
    }
}
void mat ::add()
{
    cout << "\nMatrix addition is: \n";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr1[i][j] + arr3[i][j] << " ";
        }
        cout << endl;
    }
}
void mat ::sub()
{
    cout << "\nMatrix subtraction is: \n";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr1[i][j] - arr3[i][j] << " ";
        }
        cout << endl;
    }
}
void mat ::multi()
{
    if (row == col)
    {
        cout << "\nMatrix multiplication is: \n";
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                for (int k = 0; k < col; k++)
                {
                    mul[i][j] += arr1[i][k] * arr3[k][j];
                }
                cout << mul[i][j] << " ";
            }
            cout << endl;
        }
    }
    else
    {
        cout << "\nMatrix multiplication is not possible.";
    }
}
int main()
{
    mat m;
    m.get();
    m.trans();
    m.add();
    m.sub();
    m.multi();
    return 0;
}
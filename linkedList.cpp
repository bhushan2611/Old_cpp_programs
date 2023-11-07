#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    struct node *next;
};
struct node *start = NULL, *head = NULL;

void insertStart(int val)
{
    struct node *ptr, *temp;
    ptr = (struct node *)malloc(sizeof(struct node *));
    ptr->data = val;
    ptr->next = NULL;
    if (start == NULL)
        start = ptr;
    else
    {
        temp = start;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = ptr;
    }
}
void insertHead(int val)
{
    struct node *ptr, *temp;
    ptr = (struct node *)malloc(sizeof(struct node *));
    ptr->data = val;
    ptr->next = NULL;
    if (head == NULL)
        head = ptr;
    else
    {
        temp = head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = ptr;
    }
}
void displayStart()
{
    struct node *temp = start;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << endl;
}
void displayHead()
{
    struct node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
}
struct node *makeUnion()
{
    // code here
    int N = 1e7, max = 0;
    vector<int> arr(N, 0);
    struct node *temp1 = start, *temp2 = head;
    while (temp1 != NULL)
    {
        arr[temp1->data] = temp1->data;
        if (max < temp1->data)
            max = temp1->data;
        temp1 = temp1->next;
    }
    while (temp2 != NULL)
    {
        arr[temp2->data] = temp2->data;
        if (max < temp2->data)
            max = temp2->data;
        temp2 = temp2->next;
    }

    arr.resize(max);
    cout << endl;
    for (int i = 1; i <= arr.size(); i++)
    {
        if (arr[i] != 0)
            cout << arr[i] << " ";
    }
}

struct node *rev()
{
    struct node *temp1, *temp2,*move;
    temp2 = start->next;
    temp1 = NULL;
    start->next=NULL;
    while (temp1->next != NULL)
    {
        start->next = temp1;
        temp1 = temp2;
        temp2 = temp2->next;
        temp1->next = start;
        start = temp2;
        temp2 = temp2->next;
    }
    while (temp1 != NULL)
    {
        cout << temp1->data << " ";
        temp1 = temp1->next;
    }
}
int main()
{
    insertStart(1);
    insertStart(2);
    insertStart(3);
    insertStart(4);
    insertStart(5);
    insertStart(6);
    // insertHead(4);
    // insertHead(5);
    // insertHead(6);
    // insertHead(7);
    // insertHead(1);
    // displayStart();
    // displayHead();
    // makeUnion();

    // struct node *ptr;
    // ptr =
    rev();
    // while (ptr != NULL)
    // {
    //     cout << ptr->data << " ";
    //     ptr = ptr->next;
    // }

    return 0;
}
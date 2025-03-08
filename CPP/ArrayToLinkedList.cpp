#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int data1)
    {
        this->data = data1;
        this->next = nullptr;
    }
    node(int data2, node *nexxt)
    {
        this->data = data2;
        this->next = nexxt;
    }
    node()
    {
        this->data = 0;
        this->next = nullptr;
    }
};
node *arrtoll(vector<int> &arr)
{
    node *head = new node(arr[0]);
    node *temp;
    node *mover = head;
    for (int i = 1; i < arr.size(); i++)
    {
        temp = new node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}
void print(node *head)
{
    node *temp = head;
    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
int sizeofll(node *head)
{
    node *temp = head;
    int cnt = 0;
    while (temp)
    {
        cnt++;
        temp = temp->next;
    }
    return cnt;
}
bool checkpresence(node *head, int val)
{
    node *temp = head;
    while (temp)
    {
        if (temp->data == val)
            return 1;
        temp = temp->next;
    }
    return 0;
}
node *removehead(node *head)
{
    if (head == NULL)
    {
        cout << "List is Empty\n";
        return head;
    }
    node *temp = head;
    head = head->next;
    delete temp;
    return head;
}
int main()
{
    vector<int> arr = {3, 4, 34, 2, 8};
    node *head = arrtoll(arr);
    print(head);
    cout << endl
         << "Size: " << sizeofll(head);
    cout << "\nPresent: " << checkpresence(head, 62) << endl;
    head = removehead(head);
    print(head);
    return 0;
}


//Array to doubly linked list


// #include <bits/stdc++.h>
// using namespace std;
// class node
// {
// public:
//     int data;
//     node *next;
//     node *prev;
//     node(int data)
//     {
//         this->data = data;
//         this->next = NULL;
//         this->prev = NULL;
//     }
//     node(int data, node *next, node *prev)
//     {
//         this->data = data;
//         this->next = next;
//         this->prev = prev;
//     }
// };
// node *arrtodll(vector<int> &arr)
// {
//     node *head = new node(arr[0]);
//     node *temp = head;
//     for (int i = 1; i < arr.size(); i++)
//     {
//         node *newnode = new node(arr[i]);
//         temp->next = newnode;
//         newnode->prev = temp;
//         temp = temp->next;
//     }
//     return head;
// }
// void print(node *head)
// {
//     node *temp = head;
//     while (temp)
//     {
//         cout << temp->data << " ";
//         temp = temp->next;
//     }
// }
// int main()
// {
//     vector<int> arr = {2, 34, 12, 9, 7};
//     node *head = arrtodll(arr);
//     print(head);

//     return 0;
// }
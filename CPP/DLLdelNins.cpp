#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    node *prev;
    node *next;
    int data;

public:
    node(int data)
    {
        this->data = data;
        this->next = nullptr;
        this->prev = nullptr;
    }
    node()
    {
        this->data = 0;
        this->next = nullptr;
        this->prev = nullptr;
    }
    node(int data, node *next, node *prev)
    {
        this->data = data;
        this->prev = prev;
        this->next = next;
    }
};
node *arr2dll(vector<int> arr)
{
    if (arr.size() == 0)
    {
        return nullptr;
    }
    node *head = new node(arr[0]);
    node *temp = head;
    for (int i = 1; i < arr.size(); i++)
    {
        node *newnode = new node(arr[i], nullptr, temp);

        temp->next = newnode;
        temp = temp->next;
    }
    return head;
}
node *delAtHead(node *head)
{
    if (head == nullptr)
    {
        return nullptr;
    }
    node *temp = head;
    head = head->next;
    if (head != nullptr)
    {
        head->prev = nullptr;
    }
    delete temp;
    return head;
}
node* delAtTail(node *head){
   if
}
void print(node *head)
{
    node *temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main()
{
    int n;
    cout << "Enter number of elements in the array" << endl;
    cin >> n;
    vector<int> nums(n, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    node *head = arr2dll(nums);
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *next;

public:
    node(int data, node *next)
    {
        this->data = data;
        this->next = next;
    }
    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
node *arr2ll(vector<int> nums)
{
    node *head = new node(nums[0]);
    node *temp = head;
    for (int i = 1; i < nums.size(); i++)
    {
        node *temp1 = new node(nums[i]);
        temp->next = temp1;
        temp = temp->next;
    }
    return head;
}
void print(node *head)
{
    node *temp = head;
    int ct = 0;
    while (temp)
    {
        cout << temp->data << " ";
        temp = temp->next;
        ct++;
    }
    cout << "(" << ct << ")" << endl;
}
bool checkPresence(node *head, int data)
{
    node *temp = head;
    while (temp)
    {
        if (temp->data == data)
        {
            return 1;
        }
        temp = temp->next;
    }
    return 0;
}
node *deleteAtHead(node *head)
{
    if (head == nullptr || head->next == NULL)
    {
        return NULL;
    }
    node *temp = head;
    head = head->next;
    delete temp;
    return head;
}
node *deleteAtTail(node *head)
{
    if (head == NULL || head->next == NULL)
    {
        return NULL;
    }
    node *temp = head;
    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }
    node *temp1 = temp->next;
    temp->next = temp->next->next;
    delete temp1;
    return head;
}
node *deleteK(node *head, int k)
{
    int ct = 0;
    node *temp = head;
    node *prev = NULL;
    if (k == 1)
    {
        head = head->next;
        delete temp;
        return head;
    }
    while (temp)
    {
        ct++;
        if (ct == k)
        {
            prev->next = prev->next->next;
            delete temp;
            break;
        }
        prev = temp;
        temp = temp->next;
    }

    return head;
}
node *deleteElement(node *head, int el)
{
    node *temp = head;
    node *prev = NULL;
    if (head->data == el)
    {
        head = head->next;
        delete temp;
        return head;
    }
    while (temp)
    {
        if (temp->data == el)
        {
            prev->next = prev->next->next;
            delete temp;
            break;
        }
        prev = temp;
        temp = temp->next;
    }

    return head;
}
node *insertAtHead(node *head, int data)
{
    return new node(data, head);
}
node *insertAtTail(node *head, int data)
{
    if (head == NULL)
    {
        return new node(data);
    }
    node *temp = head;
    while (temp->next)
    {
        temp = temp->next;
    }
    temp->next = new node(data);
    return head;
}
node *insertAtK(node *head, int k, int data)
{
    if (head == NULL)
    {
        if (k == 1)
        {
            return new node(data);
        }
        else
        {
            return head;
        }
    }
    if (k == 1)
    {
        return new node(data, head);
    }

    int ct = 1;
    node *temp = head;
    node *newn = new node(data);
    while (temp)
    {
        ct++;
        if (ct == k)
        {
            newn->next = temp->next;
            temp->next = newn;
            break;
        }
        temp = temp->next;
    }
    return head;
}
node *insertBeforeValue(node *head, int val, int data)
{
    if (head == NULL)
    {
        return NULL;
    }
    if (head->data == val)
    {
        return new node(data, head);
    }
    node *temp = head;
    while (temp->next)
    {
        if (temp->next->data == val)
        {
            node *newn = new node(data);
            temp->next = newn;
            break;
        }
        temp = temp->next;
    }
    return head;
}
int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6};
    node *head = arr2ll(arr);
    print(head);
    cout << checkPresence(head, 54) << endl;
    head = deleteAtHead(head);
    print(head);
    head = deleteAtTail(head);
    print(head);
    head = deleteK(head, 7);
    print(head);
    head = deleteElement(head, 7);
    print(head);
    head = insertAtHead(head, 100);
    print(head);
    head = insertAtTail(head, 300);
    print(head);
    head = insertAtK(head, 1, 900); // k=(1 to n+1)
    print(head);
    head = insertBeforeValue(head, 900, 292);
    print(head);
    return 0;
}
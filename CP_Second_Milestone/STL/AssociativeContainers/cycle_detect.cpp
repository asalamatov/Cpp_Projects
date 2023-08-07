#include<bits/stdc++.h>

using namespace std;

class node{
public:
    int data;
    node*next;

    node (int data){
        this->data = data;
        next = NULL;
    }
};

bool containsCycle(node *head){
    unordered_map<node *, bool> cycle_table;

    node *temp = head;
    while(temp!=NULL){
        //check if temp already exists
        if (cycle_table.count(temp)){
            return true;
        }
        cycle_table[temp] = true;
        temp=temp->next;
    }
    
    return false;
}

void insertAtHead(node * &head, int val){
    if (head==NULL){
        head = new node(val);
        return;
    }
    //else
    node *n = new node(val);
    n->next = head;
    n->data = val;
    head = n;
}

int main()
{

    node *a = NULL;
    insertAtHead(a, 1);
    insertAtHead(a, 2);
    insertAtHead(a, 3);
    insertAtHead(a, 4);
    insertAtHead(a, 5);

    // node * temp = a->next->next->next->next;
    // temp->next = a->next->next;

    if (containsCycle(a)){
        cout<<"Cycle Found";
    } else{
        cout<<"Cycle NOT found";
    }
    
    cout << endl;
    return 0;
}
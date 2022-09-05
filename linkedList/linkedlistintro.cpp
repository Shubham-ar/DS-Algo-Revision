#include<iostream>
using namespace std;
class node{
public:
    int data;
    node *next;

    node(int d){
        data = d;
        next = NULL;
    }
};
class linkedlist{
    node *head;
    node *tail;
    public:
    linkedlist(){
        head = NULL;
        tail = NULL;
    }
};

// this is the object oriented approach to make a linkedlist but we are not going to do that because we are preparing for online tests
// for online tests we assume that you are given with a linkedlist right now and you are to solve a problem based on a head pointer they provided
// so we will use procedural programming for it.

// INSERTING data in a linklist
//  3 types, at the head, at the tail, insertion in the middle of the linkedlist.
void insertAtHead(node*&head,int data){   
    if(head==NULL){
        head = new node(data);
        return;
    }

    node *n = new node(data);
    // (*n).next is same as n->next
    n->next = head; 
    head=n; 

}

void insertAtHead2(node*&head,int data){

    if(head==NULL){
        head = new node(data);
    }

    node *newNode = new node(data);
    newNode->next = head;
    head = newNode;
}


// insertion in the middle of a linkedlist
int length(node*head){
    int temp = 0;
    while (head != NULL)
    {
        temp++;
        head = head->next;
    }
    return temp;
}
void insertInMiddle(node*head, int data, int place){

    if(head==NULL || place==0){
        insertAtHead(head, data);
    }
    else if(place>length(head)){
        cout << "Insertion not possible as the place does not exist in the linkedlist." << endl;
    }
    else{
    int jump = 1;
    node *temp = head;
    while (jump<=place-1)
    {
        temp = temp->next;
        place--;
    }
    node *newNode = new node(data);
    newNode->next = temp->next;
    temp->next = newNode; 
    }
}
// this is the insertattail according to codingblocks.com

void insertAtTail2(node*head,int data){
    if(head==NULL){
        head = new node(data);
    }
    node *tail = head;
    while(tail->next!=NULL){
        tail = tail->next;
    }
    tail->next = new node(data);
    return;
}


// my implementataion

void insertAtTail(node*head,int data){

    if(head==NULL){
        head = new node(data);
        return;
    }
    while(head->next!=NULL){
         head=head->next;
    }
    node *newNode = new node(data);
    head->next=newNode;
    return;
}

int  length2(node*head){
    int len = 0;
    while (head != NULL)
    {
        len++;
        head = head->next;
    }
    return len;
}

void insertInMiddle2(node*head,int data,int position){

    if (head == NULL || position == 0)
    {
        insertAtHead(head, data);
    }
    else if(position>length2(head)){
        cout << "insertion not possible as the position is greater than the total number of elements the linkedlist currently have" << endl;
    }
    else{
        node *temp = head;
        int jumps = 1;
        while (jumps<position){
            temp = temp->next;
            jumps++;
        }
        node *newNode = new node(data);
        newNode->next = temp->next;
        temp->next = newNode;
        cout << "New node inserted @ " << position << " position. " << endl;
    }
}
void print(node*head){
    while(head!=NULL){  
        cout << head->data<< "-->";
        head = head->next;
    }
}
// if we change the pass by value by reference, if we call the linkedlist twice, it will print only once as the head value will remain the same when it is called again. 

void print2(node*head){
    while(head!=NULL){
        cout << head->data  << "-->";
        head = head->next;
    }

}

// deletion in a linkedlist

void deleteHead(node*&head){
    if(head==NULL){
        cout << "Linkedlist already empty, cannot delete the element in linkedlist." << endl;
    }
    else{
        node *temp = head;
        head = head->next;
        delete temp;
    }
}

// now the method codingblocks guyz used

void deleteHead2(node*&head){ 
  
    if(head==NULL){
        return;
    }
    node *temp = head->next;
    delete head;
    head = temp;
}
// which is basically same implementation and stuff, only difference is the use of head and tail value.

    // deletion from the middle of a linkedlist 
    void deleteFromMiddle(node*head,int p){
        if(p>length(head)){
            cout << "Deletion is not possible as the p value is greater than the total length of the stuff." << endl;
        }
        if(p==0){
            deleteHead(head);
        }
        else{
            node *temp = head;
            node *prev = head;
            int jumps = 1;
            while(jumps<p){
                prev = temp;
                temp = temp->next;
                jumps++;
            }
            prev->next = temp->next;
            delete temp;
        }
        }

        void deleteAtTail(node*head){
            if(head==NULL){
                deleteHead2(head);  
            }
              while(head->next->next!=NULL){
                  head = head->next;
              }
              delete head->next;
              head->next = NULL;
        }



    // searching in a linkedlist
    // only linear search is possible as the arrays has a direct access property
    int linear_search(node* head,int key){
        int count=0;
        if (head == NULL)
        {
            return 0;
        }
        while(head->next!=NULL){
            if(head->data==key){
                return count;
            }
            count++;
            head = head->next;
        }
    }
    bool recursive_linear_search(node *head, int key){
        if(head==NULL){
            return false;
        }
        if(head->data==key){
            return true;
        }
        recursive_linear_search(head->next, key); 
    }


    // void input(node*head){

    // }
    // node* input2(){
    //     int d;
    //     cin >> d;

    //     node *head =NULL;

    //     while(d!=-1){
    //         insertAtHead(head,d);
    //         cin >> d;
    //     }
    //     return;
    // }

    void reverse_linkedlist(node*&head){
        node *current = head;
        node *prev = NULL;
        node *next;

        while(current!=NULL){
            next = current->next;
            current->next = prev;

            prev = current;
            current = next;

        }
        head = prev;
    }

    node* recursive_reverse(node*&head){
        node *current = head;

        if(head->next==NULL|| head==NULL){
            return head;
        }
        node *smallHead = recursive_reverse(head->next);

        node *temp = smallHead;
        while(temp->next!=NULL){
            temp = temp->next;
        }

        head->next = NULL;
        temp->next = head;

        return smallHead;
    }

    node*midpoint_runner(node*head){

        if(head==NULL||head->next==NULL){
            return head;

        }
        node *slow = head;
        node *fast = head->next;

        while(fast!=NULL&& fast->next!=NULL){
            fast = fast->next->next;
            slow = slow->next;
        }
        return slow;
    }

    node* kth_node_end(node*head,int k){
        node *temp = head;
        while (k)
        {
            temp = temp->next;
        }
        while(temp->next!=NULL&&temp!=NULL){
            temp = temp->next;
            head = head->next;
        }
        return head;
    }

    int main()
    {
        node *head = NULL;
        insertAtHead(head, 3);
        insertAtHead(head, 2);
        insertAtHead2(head, 4);
        insertAtHead2(head, 6);

        print(head);
        cout << endl;
        insertInMiddle(head, 100, 3);
        print2(head);
        insertInMiddle2(head, 1000, 3);
        print(head);
        cout << endl
             << "Inserting value at tail" << endl;
        insertAtTail(head, 69);
        print(head);
        deleteHead(head);
        cout << endl;
        print(head);
        cout << "Deleting from middle of a linkedlist" << endl;
        deleteFromMiddle(head, 3);
        print(head);
        cout << endl
             << "Deleting the last element of the linkedlist" << endl;
        deleteAtTail(head);
        print(head);
        cout <<endl<< "Reversing the linkedlist" << endl;
        reverse_linkedlist(head);
        print(head);
        return 0;
} 
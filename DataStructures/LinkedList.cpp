#include<iostream>
#include <assert.h> 
#include <bits/stdc++.h>
using namespace std;

class Node{
	public:
		int data;
		Node* next;
};

void printList(Node *n){
	while(n != NULL){
		cout<<n->data<<endl;
		n = n->next;
	}
}

void push(Node** head, int data){
	Node* newNode = new Node;
	newNode -> data = data;
	newNode-> next = (*head);
	(*head) = newNode;
}

void insertAfter(Node* prev_node, int data){
	if(prev_node == NULL){
		cout<<"the previous node is null insertion is not Possible"<<endl;
		return;
	}
	Node* newNode = new Node;
	newNode->data = data;
	newNode->next = prev_node->next;
	prev_node->next = newNode;
}

void append(Node** head, int data){
	Node* newNode = new Node;
	Node* last = (*head);
	newNode->data = data;
	newNode->next = NULL;
	if( *head ==NULL){
		*head=newNode;
		return;
	}
	while(last->next != NULL){
		last=last->next;
	}
	last->next=newNode;
	return;
}

void deleteNode(Node** head, int key){
	Node* temp = (*head);
	Node* prev = NULL;
	//if head holds key to be deleted
	if(temp != NULL && temp->data == key){
		(*head) = temp->next;
		delete temp;
		return;		
	}
	//else search the key to be deleted keep the eye on previous node
	while(temp != NULL && temp->data !=key){
		prev = temp;
		temp= temp->next;
	}
	prev->next = temp->next;
	delete temp;
}

void deleteNodeAtPosition(Node** head, int position){
	Node* temp = (*head);
	Node* prev = NULL;
	//if the list is empty
	if( (*head)== NULL){
		cout<<"List is Empty"<<endl;
		return;
	}
	//if head need to be removed
	if(position == 1){
		(*head) = temp->next;
		delete temp;
		return;
	}
	//if not the head thenn..
	for(int i=0; temp!= NULL && i< position - 1; i++){
		prev = temp;
		temp = temp->next;	
	}
	if (temp == NULL || temp->next == NULL) 
         return; 
    prev->next = temp->next;
	delete(temp);
}

void deleteList(Node** head){
	Node* currant = (*head);
	Node* next;
	while(currant !=NULL){
		next = currant->next;
		delete(currant);
		currant = next;
	}
	*head = next;
}

//Iterative Counting
int getCountIterative(Node* head)
{
	int count = 0;
	Node* current = head;
	while(current!= NULL){
		count++;
		current = current->next;
	}
	return count;
}
//recursive counting
int getCountRecursive(Node* head){
	if(head == NULL){
		return 0;
	}
	return 1 + getCountRecursive(head->next);
}

bool search(Node* head, int key)
{
	Node* current = head;
	while(current != NULL)
	{
		if(current->data == key)
			return true;
		current = current->next;
	}
	return false;
}

int GetNthNode(Node* head, int index)
{
		Node* current = head;
		int count =0;
		while(current != NULL){
			if(count == index){
				return (current->data);
			}
			count++;
			current = current->next;
		}
		assert(0);
}

void reversePrint(Node* head) {
    if(head == NULL){
        return;
    }
    else{
        reversePrint(head->next);
        cout<<head->data<<endl;
    }
}

void reverse(Node *head){
	Node* currant = head;
	Node* prev = NULL;
	Node* nextt = NULL;
	while(head != NULL){
		nextt = currant->next;
		currant->next = prev;
		prev = currant;
		currant = nextt;
	}
	head = prev;
}

bool Compare(Node* head1, Node* head2){
	while(head1 != NULL && head2!= NULL){
		if(head1->data != head2->data){
			return false;
		}
		head1 =head1->next;
		head2 = head2->next;
	}
	if(head1->next != NULL || head2->next != NULL){
		return false;
	}
	else{
		return true;
	}
}

Node* SortedMerge(Node* head1, Node* head2){
	Node* result = NULL;
	if(head1==NULL){
		return head2;
	}
	else if(head2 == NULL){
		return head1;
	}
	else{
		if(head1->data <= head2->data){
			result = head1;
			result->next = SortedMerge(head1->next, head2);
		}
		else{
			result = head2;
			result->next = SortedMerge(head1, head2->next);
		}
		return result;
	}
}
//remove duplicates of sorted Lists

void removeDuplicates(Node* head){
	Node* currant = head;
	Node* next_next;
	if(currant == NULL){
		return;
	}
	while(currant->next !=NULL){
		if(currant->data == currant->next->data){
			next_next = currant->next;
			delete(currant);
			currant->next = next_next;
		}
		else{
			currant= currant->next;
		}
	}
		
}
//hare-tortoisalgo for cycle detection
bool has_cycle(Node* head){
	Node* t= head;
	Node* r = head;
	if(head==NULL || head->next == NULL){
		return false;
	}
	while(r->next !=NULL && r!= NULL){
		t = t->next;
		r = r->next;
		if(t==r){
			return true;
			break;
		}
	}
	return false;
}



int main()
{
	Node* head = NULL;
	push(&head, 7); 
    push(&head, 1);
    append(&head, 4); 
    insertAfter(head->next, 8);
    puts("Created Linked List: "); 
    printList(head); 
  
    deleteNodeAtPosition(&head, 1); 
    puts("\nLinked List after Deletion of 1: "); 
    printList(head);
	return 0; 
}

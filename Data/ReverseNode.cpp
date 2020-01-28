#include <bits/stdc++.h> 
using namespace std; 

struct Node  
{  
    public: 
    int data;  
    Node* next;  
};  
  

Node *reverse (Node *head, int k)  
{  
    Node* current = head;  
    Node* next = NULL;  
    Node* prev = NULL;  
    int count = 0;  
      
    while (current != NULL && count < k)  
    {  
        next = current->next;  
        current->next = prev;  
        prev = current;  
        current = next;  
        count++;  
    }  

    if (next != NULL)  
    head->next = reverse(next, k);  
    return prev;  
}  
  
void push(Node** head_ref, int new_data)  
{  
    Node* temp = new Node(); 
    temp->data = new_data;  
    temp->next = (*head_ref);      
    (*head_ref) = temp;  
}  
  
void printList(Node *temp)  
{  
    while (temp != NULL)  
    {  
        cout<<temp->data<<" ";  
        temp = temp->next;  
    }  
}  
  
int main()  
{  
	int T;
	cin>>T;
	while(T>0)
	{ T--;
	int N;
	cin>>N;
	int a[N];
    Node* head = NULL; 
	for(int i=N-1;i>=0;i--)
	{
		cin>>a[i];
	}       
	 for(int i=0;i<N;i++)
	 push(&head, a[i]); 
	int k;
	cin>>k;  
    head = reverse(head, k);  
    printList(head);  
    cout<<endl<<endl;
 	}
  
    return(0);  
}

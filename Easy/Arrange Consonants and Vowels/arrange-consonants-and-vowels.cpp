//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

struct Node
{
	char data;
	struct Node *next;
	
	Node(int x){
	    data = x;
	    next = NULL;
	}
	
};

void printlist(Node *head)
{
	if (head==NULL)return;
	while (head != NULL)
	{
		cout << head->data << " ";
		head = head->next;
	}
	cout << endl;
}

void append(struct Node** headRef, char data)
{
	struct Node* new_node = new Node(data);
	struct Node *last = *headRef;

	if (*headRef == NULL)
	{
	    *headRef = new_node;
	    return;
	}
	while (last->next != NULL)
		last = last->next;
	last->next = new_node;
	return;
}

// task is to complete this function
struct Node* arrange(Node *head);

int main()
{
    int T;
    cin>>T;
    while(T--){
        int n;
        char tmp;
        struct Node *head = NULL;
        cin>>n;
        while(n--){
            cin>>tmp;
            append(&head, tmp);
        }
        head = arrange(head);
        printlist(head);
    }
	return 0;
}


// } Driver Code Ends


/*
Structure of the node of the linked list is as
struct Node
{
	char data;
	struct Node *next;
	
	Node(int x){
	    data = x;
	    next = NULL;
	}
	
};
*/
// task is to complete this function
// function should return head to the list after making 
// necessary arrangements
struct Node* arrange(Node *head)
{
   if(head==NULL) return NULL;
   Node* temp = new Node('z');
   Node* itr = temp;
   unordered_set<char> vowels = {'a', 'e', 'i', 'o', 'u'};
   Node* curr = head;
   while(curr!=NULL){
       if(vowels.find(curr->data)!=vowels.end()){
           itr->next = new Node(curr->data);
           itr = itr->next;
       }
       curr = curr->next;
   }
   curr = head;
   while(curr!=NULL){
       if(vowels.find(curr->data)==vowels.end()){
           itr->next = new Node(curr->data);
           itr = itr->next;
       }
       curr = curr->next;
   }
   return temp->next;
}

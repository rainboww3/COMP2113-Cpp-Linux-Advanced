#include<iostream> 
using namespace std;

// structure for node
struct Node{
	int data;
	struct Node *next;
};

// create new node 
Node *newNode(int data){
	Node *temp = new Node;
	temp->next = temp;
	temp->data = data;
}

// function declaration
void Eliminate(int m, int n){
	// Create circular linked list of size N 
	Node *head = newNode(1);
	Node *prev = head;
	for (int i = 2; i <= n; i++){
		prev->next = newNode(i);
		prev = prev->next;
	}
	prev->next = head; // Connect node
	// while only one node left	
	Node *ptr1 = head, *ptr2 = head;
	while (ptr1->next != ptr1){
		// Find mth node 
		int count = 1;
		while (count != m){
			ptr2 = ptr1;
			ptr1 = ptr1->next;
			count++;
		}
		// Remove mth node 
		ptr2->next = ptr1->next;
		free(ptr1);
		ptr1 = ptr2->next;
	}
	cout << ptr1->data; // Result
}

// Main function workout
int main(){ 
	int n, k;
	cin >> n >> k; // Enter n, k
	Eliminate(k, n);
	return 0;
}

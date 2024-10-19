#include<bits/stdc++.h>
using namespace std;

class node {
public:
    int data;
    node* next;

    node(int d) {
        this->data = d;
        this->next = NULL;
    }
};
node* reverseList(node* &head) {
    if (head == nullptr || head->next == nullptr) {
        return head;
    }

    node* newHead = reverseList(head->next);
    head->next->next = head;
    head->next = nullptr;

    return newHead;
}
bool checkpalindrome(vector<int>& arr) {
    int i = 0;
    int j = arr.size() - 1;

    while (i < j) {
        if (arr[i] != arr[j]) {
            return false; // no need to add unreachable cout
        }
        i++;
        j--;
    }
    return true;
}
bool middleoflinked(node* temp) {
    node* slow = temp;
    node* fast = temp;

    // Traverse the list with slow and fast pointers
    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }

    // Printing the middle element
    




node * secondhalfhead = reverseList(slow);

node* firsthead = temp; 
node* schead = secondhalfhead;

    while(schead!=NULL){
        if(firsthead->data != schead->data){
            cout<<"not the palindrome"<<endl;
            return false;
        }
        firsthead = firsthead -> next;
        schead = schead->next;
    }


    // Return the middle element's data
    return true;
}

int main() {
    node* head = new node(10);
    node* temp1 = head;

    // Creating new nodes and linking them
    head->next = new node(20);
    head->next->next = new node(30);
    head->next->next->next = new node(220);
    head->next->next->next->next = new node(10);

    // Traverse the list and store the data in a vector
    vector<int> arr;
cout<<"ans->>>"<<middleoflinked(head)<<endl;
    while (temp1) {
        cout << temp1->data << endl;  // Print the node's data
        arr.push_back(temp1->data);   // Store the data in the vector
        temp1 = temp1->next;          // Move to the next node
    }

    // Check if the list's data forms a palindrome
    if (checkpalindrome(arr)) {
        cout << "The linked list is a palindrome." << endl;
    } else {
        cout << "The linked list is not a palindrome." << endl;
    }

    return 0;
}

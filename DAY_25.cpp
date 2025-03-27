📅 *Schedule for day25:*

❓ Q1: https://leetcode.com/problems/delete-node-in-a-linked-list/
❓ Q2: https://bit.ly/3w9pEIt

//Q2

/*Structure of the linked list node is as
struct Node {
  int data;
  struct Node * next;
  Node(int x) {
    data = x;
    next = NULL;
  }
}; */

class Solution {
  public:
    Node *insertAtEnd(Node *head, int x) {
        // Code here
          
           Node* a=new Node(x);
           Node* temp=head;
           while(temp->next!=NULL)
           {
               temp=temp->next;
           }
        temp->next=a;
        return head;
            
    }
};

📅 *Schedule for day27:*

❓ Q1: https://bit.ly/3w6hUaa
❓ Q2: https://bit.ly/3QlEoMx


q1) Reverse DLL
Code:
    DLLNode* reverseDLL(DLLNode* head) {
        if(head==nullptr)return nullptr;
        if(head->next==nullptr)    return head;
        
        DLLNode* temp=head->next;
        DLLNode* back=head;
        
        while(temp!=nullptr){
            if(back==head) back->next=nullptr;
               
            temp->next=back;
            back->prev=temp;
            
            back=temp;
            temp=temp->next;
            
        } 
        return back;
    }
};
SC:O(1)
TC:O(N)

q2) delete node in DLL
Code:
class Solution {
  public:
    // Function to delete a node at given position.
    Node* deleteNode(Node* head, int x) {
        if((head==nullptr)) return nullptr;
        
        if(x==1){
            if(head->next==nullptr) return nullptr;
            else{
                Node* nextnode=head->next;
                
                head->next=nullptr;
                head=nextnode;
                head->prev=nullptr;
                
                return head;
            }
        }
        
        int n=0;
        Node*curr=head;
        while(curr!=nullptr){
            n++;
            curr=curr->next;
        }
        
        Node* temp=head->next;
        Node* back=head;
        int ind=2;
        while(temp!=nullptr){
            if(ind==x){
                Node* nextnode=temp->next;
                if(nextnode==nullptr){
                    back->next=nullptr;
                }
                else{
                    back->next=nextnode;
                    nextnode->prev=back;
                    temp->next=nullptr;    
                }
                temp->prev==nullptr;
                delete temp;
                
                break;
            }
            back=temp;
            temp=temp->next;
            ind++;
        }
        return head;
    }
};
SC:O(1)
TC:O(N)

/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
    //     Node*tail=head;
    //     Node*temp=head;
    //     tail=tail->next;
    //     while(tail){
    //         Node* copy=new Node(temp->val);
    //         temp->next=copy;
    //         copy->next=tail;
    //         tail=tail->next->next;
    //         //temp=temp->next;
    //     }
    //     tail=head;
    //     while(tail){
    //         if(tail->random)
    //         tail->next->random=tail->random;
    //         tail=tail->next->next;
    //     }
    //     tail=head;
    //     Node*dummy=new Node(0);
    //     Node*copy=dummy;
    //     while(tail){
    //         temp=tail->next->next;
    //         dummy->next=tail->next;
    //         dummy=dummy->next;
    //         tail=temp;
    //     }
    //     return copy->next;
    // }
        if (!head) {
        return nullptr;
    }
    Node* temp = head;
    while (temp) {
        Node* copy = new Node(temp->val);
        copy->next = temp->next;
        temp->next = copy;
        temp = copy->next;
    }
    temp = head;
    while (temp) {
        if (temp->random) {
            temp->next->random = temp->random->next;
        }
        temp = temp->next->next;
    }
    Node* original = head;
    Node* copyHead = head->next;
    Node* copy = copyHead;

    while (original) {
        original->next = original->next->next;
        original = original->next;

        if (copy->next) {
            copy->next = copy->next->next;
            copy = copy->next;
        }
    }

    return copyHead;
    }
};
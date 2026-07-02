class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* temp=new ListNode(-1);
        ListNode* t=temp;

        while(list1!=NULL && list2!=NULL){
            if(list1->val>list2->val){
                temp->next=list2;
                temp=temp->next;
                list2=list2->next;
            }else{
                temp->next=list1;
                temp=temp->next;
                list1=list1->next;
            }
        }

        if(list1){
            temp->next=list1;
        }
        if(list2){
            temp->next=list2;
        }
        t=t->next;
        return t;
    }
};

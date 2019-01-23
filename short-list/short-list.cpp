/*
	Sort a linked list in O(n log n) time using constant space complexity.
*/
#include<iostream>
using namespace std;

/*
  ���㣺
  1. ����ָ�룻2. �鲢����
  ���⾭�䣬��Ҫ�������ա�
  ���Ӷȷ���:
             T(n)            ��� n/2, �鲢 n/2 ��һ����n/2 + n/2 = n
            /    \           �����������ƣ�
          T(n/2) T(n/2)      һ���� n/2*2 = n
         /    \  /     \
        T(n/4) ...........   һ���� n/4*4 = n
 
       һ����logn�㣬�ʸ��Ӷ��� O(nlogn)
 */
class Solution {
public:
    ListNode *sortList(ListNode *head) {
        if (!head || !head->next) return head;
         
        ListNode* p = head, *q = head->next;
        while(q && q->next) {
            p = p->next;   //��ָ�� 
            q = q->next->next;   //��ָ�� 
        }
         
        ListNode* left = sortList(p->next);
        p->next = NULL;
        ListNode* right = sortList(head);
         
        return merge(left, right);
    }
     
     
    ListNode *merge(ListNode *left, ListNode *right) {  //β�巨�ϲ����� 
        ListNode dummy(0);
        ListNode *p = &dummy;
        while(left && right) {
            if(left->val < right->val) {
                p->next = left;
                left = left->next;
            }
            else {
                p->next = right;
                right = right->next;
            }
            p = p->next;
        }
        if (left) p->next = left;
        if (right) p->next = right;
        return dummy.next;
    }
};
int main(){
	
	return 0;
}


#include<iostream>
using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

/*
  ¿¼µã£º¿ìÂıÖ¸Õë
*/

class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head == NULL)
			return false;
		ListNode *slow = head, *fast = head;
		while(fast != NULL && fast->next != NULL){
			slow = slow->next;
			fast = fast->next->next;
			if(fast == slow)
				return true;
		}
		return false;
    }
};

int main(){
	return 0;
} 

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* removeElements(struct ListNode* head, int val)
{
    if (head == NULL)
        return head;

    // else if(head->next==NULL && head->val==val)
    // {
    //     free(head);
    //     head=NULL;
    //     return head;
    // }

    else
    {
        struct ListNode* cur = head;
        struct ListNode* prev = NULL;
        while (cur)
        {
            if (cur->val == val)
            {
                if (prev == NULL)
                {
                    head = cur->next;
                    free(cur);
                    cur = head;
                }
                else
                {
                    prev->next = cur->next;
                    free(cur);
                    cur = prev->next;
                }

            }
            else
            {
                //Õı³£µü´ú
                prev = cur;
                cur = cur->next;
            }
        }
        return head;
    }
}
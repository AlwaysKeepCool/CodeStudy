/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* detectCycle(struct ListNode* head)
{
    //�������ָ��
    struct ListNode* fast = head;
    struct ListNode* slow = head;


    while (fast && fast->next)
    {
        //����
        fast = fast->next->next;
        slow = slow->next;

        if (fast == slow) //�ཻ��,�����Ѿ��ж��л���
        {
            fast = fast->next;
            slow->next = NULL;
            break;
        }

    }

    //�������if����û��
    //if(fast == NULL || fast->next ==NULL)
    if (fast != slow)
    {
        return NULL;//û�л���NULL��Ĭ��ֵΪ-1
    }

    else
    {

        //head�ĳ���
        int la = 0;
        struct ListNode* cur = head;
        while (cur)
        {
            la++;
            cur = cur->next;
        }

        struct ListNode* newNode = fast;
        //newNode�ĳ���
        int lb = 0;
        cur = newNode;
        while (cur)
        {
            lb++;
            cur = cur->next;
        }

        struct ListNode* longList = head;
        struct ListNode* shortList = newNode;

        if (la < lb)
        {
            longList = newNode;
            shortList = head;
        }

        int gap = abs(la - lb);
        while (gap--)
        {
            longList = longList->next;
        }


        while (longList)
        {
            if (longList == shortList)
            {
                return longList;
            }
            else
            {
                //����
                longList = longList->next;
                shortList = shortList->next;
            }

        }



    }
    return NULL;
}
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* detectCycle(struct ListNode* head)
{
    //定义快慢指针
    struct ListNode* fast = head;
    struct ListNode* slow = head;


    while (fast && fast->next)
    {
        //迭代
        fast = fast->next->next;
        slow = slow->next;

        if (fast == slow) //相交点,这里已经判断有环了
        {
            fast = fast->next;
            slow->next = NULL;
            break;
        }

    }

    //进入这个if就是没环
    //if(fast == NULL || fast->next ==NULL)
    if (fast != slow)
    {
        return NULL;//没有环，NULL的默认值为-1
    }

    else
    {

        //head的长度
        int la = 0;
        struct ListNode* cur = head;
        while (cur)
        {
            la++;
            cur = cur->next;
        }

        struct ListNode* newNode = fast;
        //newNode的长度
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
                //迭代
                longList = longList->next;
                shortList = shortList->next;
            }

        }



    }
    return NULL;
}
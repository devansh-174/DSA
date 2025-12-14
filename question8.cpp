/*
Given a Doubly linked list containing n nodes. The task is to reverse every group of k
nodes in the list. If the number of nodes is not a multiple of k then left-out nodes, in the
end should be considered as a group and must be reversed.
*/
struct Node{
    int data ;
    Node* next ;
    Node* prev;
};
Node* reverseInGroups(Node* head, int k)
{
    if (!head || k <= 1) return head;

    Node* curr = head;
    Node* newHead = nullptr;  
    Node* groupPrevEnd = nullptr;

    while (curr != nullptr)
    {
        Node* groupStart = curr;
        Node* prev = nullptr;
        int count = 0;

        // reverse k nodes in DLL
        while (curr != nullptr && count < k)
        {
            Node* next = curr->next;

            curr->next = prev;
            curr->prev = next;   // reverse prev pointer

            prev = curr;
            curr = next;

            count++;
        }

        // first reversed group becomes the new head
        if (newHead == nullptr)
            newHead = prev;

        // connect previous group to current reversed group
        if (groupPrevEnd != nullptr)
        {
            groupPrevEnd->next = prev;
            prev->prev = groupPrevEnd;
        }

        // connect tail of reversed group to next block start
        groupStart->next = curr;
        if (curr != nullptr)
            curr->prev = groupStart;

        groupPrevEnd = groupStart;  // update for next iteration
    }

    return newHead;
}

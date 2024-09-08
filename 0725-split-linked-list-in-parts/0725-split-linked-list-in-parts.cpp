class Solution {
public:
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        // First, determine the length of the linked list
        ListNode* temp = head;
        int length = 0;
        while (temp) {
            length++;
            temp = temp->next;
        }

        // Calculate the size of each part and the number of parts that will be larger by one node
        int partSize = length / k;
        int extraParts = length % k;

        vector<ListNode*> result;

        // Split the list into parts
        for (int i = 0; i < k; ++i) {
            ListNode* partHead = head;
            ListNode* prev = nullptr;

            // Determine the size of the current part
            int currentSize = partSize + (i < extraParts ? 1 : 0);
            for (int j = 0; j < currentSize; ++j) {
                prev = head;
                head = head->next;
            }

            // Detach the current part from the rest of the list
            if (prev) {
                prev->next = nullptr;
            }

            result.push_back(partHead);
        }

        return result;
    }
};

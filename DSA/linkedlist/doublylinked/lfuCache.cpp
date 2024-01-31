class node
{
public:
    int cnt;
    int key;
    int val;
    node *prev;
    node *next;
    node(int _key, int _val)
    {
        key = _key;
        cnt = 1;
        val = _val;
    }
};
struct List
{
    int size;
    Node *head;
    Node *tail;
    List()
    {
        head = new Node(0, 0);
        tail = new Node(0, 0);
        head->next = tail;
        tail->prev = head;
        size = 0;
    }

    void addNode(node *newNode)
    {
        node *temp = head->next;
        newNode->next = temp;
        newNode->prev = head;
        head->next = newNode;
        temp->prev = newNode;
        size++;
    }
    void deleteNode(node *delNode)
    {
        node *delPrev = delNode->prev;
        node *delNext = delNode->next;
        delPrev->next = delNext;
        delPrev->prev = delPrev;
        size--;
    }
}

class LFUCache
{
    unordered_map<int, node *> keyNode;

    int maxSizeCache;
    int minfreq;
    int cursize;
    unordered_map<int, list> freqListMap;

public:
    LFUCache(int capacity)
    {
        maxSizeCache = capacity;
        minfreq = 0;
        cursize = 0;
    }

    void updateFreqListMap(Node *node)
    {
        keyNode.erase(node->key);
        freqlistMap[node->cnt]->removeNode(node);
        if (FreqListMap.find(node->cnt + 1 != freqListMap.end()))
        {
            nextHigherFreqList = freqListMap[node->cnt + 1];
        }
        node->cnt += 1;
        nextHigherFreqList->addFront(node);
        FreqListMap[node->cnt] = nextHigherFreqList;
        keyNode[node->key] = node;
    }
    int get(int key)
    {
        if (KeyNode.find(key) != KeyNode.end())
        {
            node *node = KeyNode[key];
            int val = node->val;
            updateFreqListMap(node);

            return val;
        }
        return -1;
    }

    void put(int key, int value)
    {
        if (maxSizeCache == 0)
        {
            return;
        }
        if (keyNode.find(key) != keyNode.end())
        {
            node *existingnode = keyNode[key];
            existingnode->value = value;
            updateFreqListMap(node);
        }
        else
        {
            if (cur == cap)
            {
                m.erase(tail->prev->key);
                deletNode(tail->prev);
            }
            addnode(new node(key, value));
            m[key] = head->next;
        }
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */
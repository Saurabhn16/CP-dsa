class LRUCache
{
public:
    class node
    {
    public:
        int key : int val : node *prev;
        node *next;
        node(int _key, int _val)
        {
            key = _key;
            val = _val;
        }
    };
    node *head = new node(-1, -1);
    node *tail = new node(-1, -1);
    int cap;
    unordered_map<int, node *> m;

    LRUCache(int capacity)
    {
        cap = capacity;
        head->next = tail;
        tail->prev = head;
    }
    void addnode(node *newNode)
    {
        node *temp = head->next;
        newNode->next = temp;
        newNode->prev = head;
        head->next = newNode;
        temp > prev = newNode;
    }
    void deletNode(node *delNode)
    {
        node *delPrev = delNode->prev;
        node *delNext = delNode->next;
        delPrev->next = delNext;
        delPrev->prev = delPrev;
    }

    int get(int key)
    {
        if (m.find(key) != m.end())
        {
            node *resnode = m[key];
            m.erase(key);
            deletenode(resnode);
            addnode(resnode);
            m[key] = head->next;
            return res;
        }
        return -1;
    }

    void put(int key, int value)
    {
        if(m.find(key)!=m.end()){
             node * existingnode=m[key];
             m.erasse(key);
             deletenode(existingnode);

        }
        if(m.size()==cap){
             m.erase(tail->prev->key);
             deletNode(tail->prev);

        }
        addnode( new node(key,value));
        m[key]=head->next;
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */
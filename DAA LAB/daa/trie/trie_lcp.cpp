// C++ implementation of search and insert
// operations on Trie
#include <bits/stdc++.h>
using namespace std;

const int ALPHABET_SIZE = 26;

// trie node
struct TrieNode
{
	struct TrieNode *children[ALPHABET_SIZE];

	// isEndOfWord is true if the node represents
	// end of a word
	bool isEndOfWord;
};

// Returns new trie node (initialized to NULLs)
struct TrieNode *getNode(void)
{
	struct TrieNode *pNode = new TrieNode;

	pNode->isEndOfWord = false;

	for (int i = 0; i < ALPHABET_SIZE; i++)
		pNode->children[i] = NULL;

	return pNode;
}

// If not present, inserts key into trie
// If the key is prefix of trie node, just
// marks leaf node
void insert(struct TrieNode *root, string key)
{
	struct TrieNode *pCrawl = root;

	for (int i = 0; i < key.length(); i++)
	{
		int index = key[i] - 'a';
		if (!pCrawl->children[index])
			pCrawl->children[index] = getNode();

		pCrawl = pCrawl->children[index];
	}

	// mark last node as leaf
	pCrawl->isEndOfWord = true;
}

// Returns true if key presents in trie, else
// false
bool search(struct TrieNode *root, string key)
{
	struct TrieNode *pCrawl = root;

	for (int i = 0; i < key.length(); i++)
	{
		int index = key[i] - 'a';
		if (!pCrawl->children[index])
			return false;

		pCrawl = pCrawl->children[index];
	}

	return (pCrawl->isEndOfWord);
}
//child count function
int childCount(struct TrieNode *root)
{
    int count=0;
    for(int i=0;i<ALPHABET_SIZE;i++)
    {
        if(root->children[i]!=NULL)
        {
            count++;
        }
    }
    return count;
}
//longest common prefix function
string lcp(struct TrieNode *root)
{
    string s="";
    while(childCount(root)==1 && root->isEndOfWord==false)
    {
        for(int i=0;i<ALPHABET_SIZE;i++)
        {
            if(root->children[i]!=NULL)
            {
                s=s+(char)(i+'a');
                root=root->children[i];
                break;
            }
        }
    }
    return s;
}
// Driver
int main()
{
	// Input keys (use only 'a' through 'z'
	// and lower case)
	int n;
    cin>>n;
    string s[n];
    TrieNode *root = getNode();
    for(int i=0;i<n;i++)
    {
        cin>>s[i];
        insert(root,s[i]);
    }

    if(lcp(root)!="")
    cout<<lcp(root);
    else
    cout<<"No common prefix";


	return 0;
}
//time complexity of finding lcp is O(n) where n is the number of strings in the trie
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
bool isEmpty(TrieNode* root)
{
	for (int i = 0; i < ALPHABET_SIZE; i++)
		if (root->children[i])
			return false;
	return true;
}
bool deletion(TrieNode* &root, string key, int depth = 0)
{
	if (!root)
		return false;
	if (depth == key.size())
	{
		if (root->isEndOfWord)
			root->isEndOfWord = false;
		if (isEmpty(root))
		{
			delete (root);
			root = NULL;
		}
		return true;
	}
	int index = key[depth] - 'a';
	if (deletion(root->children[index], key, depth + 1))
	{
		if (isEmpty(root) && root->isEndOfWord == false)
		{
			delete (root);
			root = NULL;
		}
		return true;
	}
	return false;
}

// Driver
int main()
{
	// Input keys (use only 'a' through 'z'
	// and lower case)
	string keys[] = {"the", "a", "there",
					"answer", "any", "by",
					"bye", "their" };
	int n = sizeof(keys)/sizeof(keys[0]);

	struct TrieNode *root = getNode();

	// Construct trie
	for (int i = 0; i < n; i++)
		insert(root, keys[i]);

	// Search for different keys
	char output[][32] = {"Not present in trie", "Present in trie"};

	// Search for different keys
	cout<<"the"<<" --- "<<output[search(root, "the")]<<endl;
	cout<<"these"<<" --- "<<output[search(root, "these")]<<endl;
	cout<<"their"<<" --- "<<output[search(root, "their")]<<endl;
	cout<<"by"<<" --- "<<output[search(root, "by")]<<endl;
	deletion(root, "by");
	cout<<"by"<<" --- "<<output[search(root, "by")]<<endl;
	return 0;
}

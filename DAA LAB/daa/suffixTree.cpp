#include <bits/stdc++.h>
using namespace std;


// Suffix tree implemented using Trie.
class Trie 
{


  // Data members.
  unordered_map<char, Trie *> next;
  vector<int> indexes;


public:
  // Trie Constructor to populate the suffix tree.
  Trie(string baseText)
  {
    int length = baseText.length();
    for (int currentIndex = 0; currentIndex < length; currentIndex++)
    {
      string suffix = baseText.substr(currentIndex);
      insertSuffix(suffix, currentIndex);
    }
  }


  Trie()
  {
    // Trie Constructor to create an empty Trie node.
  }


  void insertSuffix(string suffix, int currentIndex)
  {
    Trie *currentNode = this;
    for (auto letter : suffix)
    {
      if (currentNode->next[letter] == NULL)
      {
        currentNode->next[letter] = new Trie();
      }
      currentNode = currentNode->next[letter];
      currentNode->indexes.push_back(currentIndex);
    }
  }


  void searchPattern(string pattern)
  {
    Trie *currentNode = this;
    for (auto letter : pattern)
    {
      if (currentNode->next[letter] == NULL)
      {
        cout << "Pattern not found\n";
        return;
      }


      currentNode = currentNode->next[letter];
    }
    print(pattern, currentNode);


         
  }


  void print(string pattern, Trie * currentNode)
  {
    cout << pattern << " found at: \n";
    for (auto index : currentNode->indexes)
    {
      cout << index << " ";
    }


               cout << endl;
  }
};


// Driver Function.
int main()
{


  string baseText, pattern;
  int numOfPatterns;


  cout << "Enter the text:";
  getline(cin, baseText);


  // Trie object with name suffixTree.
  Trie *suffixTree = new Trie(baseText);


  cout << "Number of Patterns:";
  cin >> numOfPatterns;


  for (int i = 0; i < numOfPatterns; i++)
  {
    // Here two getline statements help in avoiding.
    // newline character as an input.


    cout << "Pattern: ";
    getline(cin, pattern);


               while (pattern.length() == 0)


            
    {


                     getline(cin, pattern);


                 
    }
    suffixTree->searchPattern(pattern);
  }


  return 0;
}
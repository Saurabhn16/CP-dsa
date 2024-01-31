#include <bits/stdc++.h>
/****************************************************************

    Following is the class structure of the Node class:

        class Node
        {
        public:
                int data;
                Node *next;
               k Node(int data)
                {
                        this->data = data;
                        this->next = NULL;
                }
        };

*****************************************************************/
int leng(Node *head)
{
  int k = 0;
  Node *temp1 = head;
  while (temp1->next != NULL)
  {
    temp1 = temp1->next;
    k++;
  }
  return k;
}
int findIntersection(Node *firstHead, Node *secondHead)
{
  Node *temp1 = firstHead;
  Node *temp2 = secondHead;
  int k = 0;
  int l1 = leng(firstHead);
  int l2 = leng(secondHead);
  int d = max(l1 - l2, l2 - l1);
  if (l1 > l2)
  {
    while (d)
    {

      temp1 = temp1->next;
      if (temp1 == NULL)
      {
        return -1;
      }
      l1--;
      k++;
    }
  }
  if (l1 < l2)
  {
    while (d)
    {

      temp2 = temp2->next;
      if (temp2 == NULL)
      {
        return -1;
      }
      l2--;
      k++;
    }
  }
  while (temp1->next != temp2->next)
  {
    temp1 = temp1->next;

    k++;
    temp2 = temp2->next;
  }
  return k;
}
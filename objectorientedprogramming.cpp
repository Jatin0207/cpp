#include<iostream>
#include<cstddef>
using namespace std;
class Node
{
public:
 Node () : data(0), link(NULL) {}
 Node (int theData, Node* theLink) : data(theData), link(theLink) {}
 Node* getLink () const { return link; }
 int getData () const { return data; }
 void setData (int theData) { data = theData; }
 void setLink (Node* pointer) { link = pointer; }
private:
 int data;
 Node* link;
};
typedef Node* NodePtr;
void head_insert (NodePtr& head, int theData)
// Precondition: The pointer variable head points to the head of a linked list.
// Postcondition: A new node containing theData has been added at the head of the linked list.
{
head = new Node(theData, head);
}
void insert (NodePtr afterMe, int theData)
// Precondition: afterMe points to a node in a linked list.
// Postcondition: A new node containing theData has been added after the node pointed to 
// by afterMe.
{
afterMe->setLink (new Node(theData, afterMe->getLink()));
}
NodePtr search (NodePtr head, int target)
// Precondition: The pointer head points to the head of a linked list. The pointer variable
// in the last node is NULL. If the list is empty, then head is NULL.
// Returns a pointer that points to the first node that contains the target. If no node
// contains the target, the function returns NULL.
{
NodePtr here = head;
if (here == NULL) //if empty list
return NULL;
else
{
while (here->getData() != target && here->getLink() != NULL)
here = here->getLink();
if (here->getData() == target)
return here;
else
return NULL;
}
}
void remove (NodePtr& head, int num) // remove all the nodes that contain the value num
{
NodePtr before = head;
NodePtr discard = head;
while (discard != NULL)
{
if (discard->getData() != num)
{
before = discard;
discard = discard->getLink();
}
else if (discard == head)
{
head = head->getLink();
before = head;
delete discard;
discard = head;
}
else
{
before->setLink(discard->getLink());
delete discard;
discard = before->getLink();
}
}
}
void print_list (NodePtr head) // Supporting functions for testing
{
for ( NodePtr iter = head; iter != NULL; iter = iter->getLink() )
cout << iter->getData() << " ";
cout << endl;
}
NodePtr mergeLists(NodePtr & head1, NodePtr & head2)
{
	 NodePtr head = nullptr;
	 NodePtr sorting;
	 if(head1 == nullptr && head2 == nullptr)
		 return nullptr;
	 if(head1 == nullptr)
		 return head2;
	 if(head2 == nullptr)
		 return head1;
	 if(head1 ->getData() < head2 ->getData())
	 {
		 sorting = head1;
		 head1 = sorting->getLink();
	 }
	 else
	 {
		 sorting = head2;
		 head2 = sorting->getLink();
	 }
	 head = sorting;
	 while(head1!=nullptr && head2!=nullptr)
	 {
		 if(head1->getData() < head2->getData())
		 {
			 sorting->setLink(head1);
			 sorting = head1;
			 head1 = sorting->getLink();

		 }
		 else
		 {
			 sorting->setLink(head2);
			 sorting = head2;
			 head2 = sorting->getLink();
		 }

	 }
	 if(head1 == nullptr)
		 sorting->setLink(head2);
	 if(head2 == nullptr)
		 sorting->setLink(head1);
	 head1 = nullptr;
	 head2 =nullptr;
	 return head;
	  /*NodePtr newhead = nullptr;
	NodePtr sorting;
	if(head1 == nullptr)
		return head2;
    if(head2 == nullptr )
		return head1;
	if(head1 == nullptr && head2 == nullptr)
		return nullptr;
	if(head1 ->getData() < head2->getData())
	{
		sorting = head1;
		head1= sorting->getLink();

	}
	else
	{
		sorting = head2;
		head2 = sorting->getLink();
	}
	newhead = sorting;
	while(head1 != nullptr && head2 != nullptr)
	{
		if( head1 -> getData() < head2 -> getData())
		{
			sorting->setLink(head1);
			sorting = head1;
			head1 = sorting->getLink();
		}
		else
		{
			sorting->setLink(head2);
			sorting = head2;
			head2 = sorting->getLink();
		}

	}
	if(head1 == nullptr)
		sorting->setLink(head2);
	if(head2 == nullptr)
		sorting -> setLink(head1);
	head1 =nullptr;
	head2 =nullptr;
	return newhead;*/
	

	  

	
}
 
 
 
int main() // testing code
{
		 // Testing the mergeLists function. You also need head_insert and print_list functions
	NodePtr list1 = NULL;
	NodePtr list2 = NULL;
	for (int i = 13; i > 0; i -= 3)
	head_insert (list1, i);
	for (int i = 8; i >= 2; i -= 2)
	head_insert (list2, i);
	print_list (list1);
	print_list (list2);
	NodePtr merged = mergeLists (list1, list2);
	print_list (list1);
	print_list (list2);
	print_list (merged);
	system("pause");
	return 0;
}
 /*NodePtr newhead = nullptr;
	NodePtr sorting;
	if(head1 == nullptr)
		return head2;
    if(head2 == nullptr )
		return head1;
	if(head1 == nullptr && head2 == nullptr)
		return nullptr;
	if(head1 ->getData() < head2->getData())
	{
		sorting = head1;
		head1= sorting->getLink();

	}
	else
	{
		sorting = head2;
		head2 = sorting->getLink();
	}
	newhead = sorting;
	while(head1 != nullptr && head2 != nullptr)
	{
		if( head1 -> getData() < head2 -> getData())
		{
			sorting->setLink(head1);
			sorting = head1;
			head1 = sorting->getLink();
		}
		else
		{
			sorting->setLink(head2);
			sorting = head2;
			head2 = sorting->getLink();
		}

	}
	if(head1 == nullptr)
		sorting->setLink(head2);
	if(head2 == nullptr)
		sorting -> setLink(head1);
	head1 =nullptr;
	head2 =nullptr;
	return newhead;*/
	

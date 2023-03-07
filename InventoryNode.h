//
// File: InventoryNode.h
// Description: Inventory (linked lists: insert at the front of a list)
// Created: Sun. March 5, 2023
// Author: Noah Sanderson
// mail: Noahs6423@student.vvc.edu
//

/* Given main(), define an InsertAtFront() member function in the InventoryNode class that inserts items at the front of a linked list (after the dummy head node).

Ex. If the input is:

4
plates 100
spoons 200
cups 150
forks 200
the output is:

200 forks
150 cups
200 spoons
100 plates */
#include <iostream>
#include <string>
using namespace std;

class InventoryNode {
private:
	string item;
	int numberOfItems;
	InventoryNode *nextNodeRef;

public:
	//Constructor
	InventoryNode() {
		this->item = "";
		this->numberOfItems = 0;
		this->nextNodeRef = NULL;
	}

	//Constructor
	InventoryNode(string itemInit, int numberOfItemsInit) {
		this->item = itemInit;
		this->numberOfItems = numberOfItemsInit;
		this->nextNodeRef = NULL;
	}

	//Constructor
	InventoryNode(string itemInit, int numberOfItemsInit, InventoryNode nextLoc) {
		this->item = itemInit;
		this->numberOfItems = numberOfItemsInit;
		this->nextNodeRef = &nextLoc;
	}


	// TODO: Define InsertAtFront() member function that inserts a node at the 
	//       front of the linked list (after the dummy head node)
  void InsertAtFront(InventoryNode* headNode, InventoryNode* currNode) {
    InventoryNode* tmpNext = nullptr; 
    tmpNext = headNode->nextNodeRef; // tmpNext-> headNode (first list item)
    currNode->nextNodeRef = tmpNext; // currNode-> previous first list item
    headNode->nextNodeRef = currNode; // headNode-> currNode, now currNode is first
  }

	//Get the next node
	InventoryNode *GetNext() {
		return this->nextNodeRef;
	}

	//Print node data
	void PrintNodeData() {
		cout << this->numberOfItems << " " << this->item << endl;
	}
};
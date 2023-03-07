//
// File: main.cpp
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

#include "InventoryNode.h"

int main() {
	int count;
	int numItems;
	string item;

	InventoryNode *headNode = new InventoryNode();
	InventoryNode *currNode;

	// Obtain number of items
	cin >> count;

	// Get each item and number of each
	for (int i = 0; i < count; i++) {
		cin >> item;
		cin >> numItems;
		currNode = new InventoryNode(item, numItems);
		currNode->InsertAtFront(headNode, currNode);
	}

	// Print linked list
	currNode = headNode->GetNext();
	while (currNode != NULL) {
		currNode->PrintNodeData();
		currNode = currNode->GetNext();
	}

	return 0;
}
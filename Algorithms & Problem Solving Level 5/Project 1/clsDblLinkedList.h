#pragma once

#include <iostream>

using namespace std;

template <class T>
class clsDblLinkedList
{
protected:

	int _Size = 0;

public:

	class Node
	{
	public:

		T value;
		Node* next;
		Node* prev;
	};

	Node* head = NULL;

	void InsertAtBeginning(T value)
	{
		Node* new_node = new Node();

		new_node->value = value;
		new_node->next = head;
		new_node->prev = NULL;

		if (head != NULL)
		{
			head->prev = new_node;
		}
		head = new_node;
		_Size++;
	}

	void InsertAfter(Node* current, T value)
	{
		if (current == NULL)
		{
			return;
		}

		Node* new_node = new Node();

		new_node->value = value;
		new_node->next = current->next;
		new_node->prev = current;

		if (current->next != NULL)
		{
			current->next->prev = new_node;
		}
		current->next = new_node;
		_Size++;
	}

	void InsertAtEnd(T value)
	{
		Node* new_node = new Node();

		new_node->value = value;
		new_node->next = NULL;

		if (head == NULL)
		{
			new_node->prev = NULL;
			head = new_node;
			return;
		}

		Node* current = head;

		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = new_node;
		new_node->prev = current;
		_Size++;
	}

	void DeleteNode(Node* NodeToDelete)
	{
		if (head == NULL || NodeToDelete == NULL)
			return;

		if (head == NodeToDelete)
		{
			head = NodeToDelete->next;
		}

		if (NodeToDelete->next != NULL)
		{
			NodeToDelete->next->prev = NodeToDelete->prev;
		}

		if (NodeToDelete->prev != NULL)
		{
			NodeToDelete->prev->next = NodeToDelete->next;
		}

		delete NodeToDelete;
		_Size--;
	}

	void DeleteFirstNode()
	{
		if (head == NULL)
			return;

		Node* FirstNode = head;

		head = head->next;

		if (head != NULL)
		{
			head->prev = NULL;
		}
		delete FirstNode;
		_Size--;
	}

	void DeleteLastNode()
	{
		if (head == NULL)
			return;

		if (head->next == NULL)
		{
			delete head;
			head = NULL;
			return;
		}

		Node* LastNode = head;

		while (LastNode->next != NULL)
		{
			LastNode = LastNode->next;
		}

		LastNode->prev->next = NULL;

		delete LastNode;
		_Size--;
	}

	int Size()
	{
		return _Size;
	}

	bool IsEmpty()
	{
		return _Size == 0;
	}

	Node* Find(T value)
	{
		Node* current = head;

		while (current != NULL)
		{
			if (current->value == value)
			{
				return current;
			}
			current = current->next;
		}
		return NULL;
	}

	void Print()
	{
		Node* current = head;

		while (current != NULL)
		{
			cout << current->value << " ";
			current = current->next;
		}
	}
};
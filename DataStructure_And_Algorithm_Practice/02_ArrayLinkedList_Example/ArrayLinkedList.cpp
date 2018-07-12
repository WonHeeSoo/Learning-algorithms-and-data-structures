#include "ArrayLinkedList.h"

/*template<typename T>
ArrayLinkedList<T>::ArrayLinkedList(bool verboseMode) : verboseMode(verboseMode), InsertIndex(0)
{
}*/

/*template<typename T>
ArrayLinkedList<T>::~ArrayLinkedList()
{
}*/


/*
bool ArrayLinkedList::Insert(T data)
{
	// Test if InsertInex is full
	if (InsertIndex > 5)
	{
		if (verboseMode)
			fprintf(stderr, "# Warning: List is overflow!");
		return false;
	}
	else
	{
		// Create Dynamic allocation node
		ALNode *node = new ALNode();
		node->data = data;
		node->nodePos = node;
		arrayList[InsertIndex] = *node;
		InsertIndex++;
	}
	return true;
}

bool ArrayLinkedList::Insert(int pos, T data)
{
	// Test if InsertInex is full
	if (InsertIndex > 5)
	{
		if (verboseMode)
		{
			fprintf(stderr, "# Warning: List is overflow!");
		}
		return false;
	}
	else
	{	// Test if insertinex and pos is overflow
		if (InsertIndex == 5 || pos > 4)
		{
			if (verboseMode)
			{
				fprintf(stderr, "# Warning: Insertindex or position is overflow!");
			}
			return false;
		}
		else if (pos == 4)
		{
			// Create Dynamic allocation node
			ALNode *node = new ALNode();
			node->data = data;
			node->nodePos = node;
			arrayList[pos] = *node;
		}
		else
		{
			// Sorting arraylist
			for (int i = 4; i > pos; i--)
			{
				arrayList[i] = arrayList[i - 1];
			}
			// Create Dynamic allocation node
			ALNode *node = new ALNode();
			node->data = data;
			node->nodePos = node;
			arrayList[pos] = *node;
		}
		InsertIndex++;
		return true;
	}
}


template<typename T>
void ArrayLinkedList<T>::Remove(int pos)
{
	// Sorting arraylist
	ALNode *temp = arrayList[pos].nodePos;
	delete temp;
	arrayList[pos].data = NULL;
	arrayList[pos].nodePos = NULL;

	// Sorting arraylist
	for (int i = pos; i < ARRAY_SIZE - 1; i++)
	{
		arrayList[i] = arrayList[i + 1];
	}
	InsertIndex--;
	// Arranging array behind InsertIndex
	for (int i = InsertIndex; i < ARRAY_SIZE; i++)
	{
		ALNode *temp = arrayList[i].nodePos;
		delete temp;
		arrayList[i].data = NULL;
		arrayList[i].nodePos = NULL;
	}
}

template<typename T>
void ArrayLinkedList<T>::TestAllArray()
{
	for (int i = 0; i < 5; i++)
	{
		fprintf(stdout, "%d \n", arrayList[i].data);
	}
	fprintf(stdout, "- - -\n");
}*/

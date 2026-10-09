# C++ Generic Doubly Linked List (`clsDblLinkedList`)

A flexible, generic implementation of a **Doubly Linked List** data structure in C++ using templates. This implementation provides a wide range of operations for managing elements dynamically and efficiently.

---

## 🚀 Features

* **Generic Type Support**: Built using C++ Templates (`template <class T>`) to support any data type.
* **Full CRUD Operations**:
  * **Insert**: At beginning, at end, or after a specific node/index.
  * **Delete**: First node, last node, or a specific node reference.
  * **Update**: Modify elements by index.
* **Utility & Traversal**:
  * Print list elements (`PrintList`).
  * Search nodes by value (`FindNode`).
  * Retrieve node or item by index (`GetNode`, `GetItem`).
  * Reverse the list order (`Reverse`).
  * Clear all nodes (`Clear`).
  * Check size and emptiness (`Size`, `IsEmpty`).

---

## 🛠️ Public Methods Summary

| Method | Description |
| :--- | :--- |
| `InsertAtBeginning(T Value)` | Inserts a new node at the start of the list. |
| `InsertAtEnd(T Value)` | Appends a new node to the end of the list. |
| `InsertAfter(Node* NodeToInsertAfter, T Value)` | Inserts a new value after a given node pointer. |
| `InsertAfter(int index, T Value)` | Inserts a new value after a specified index. |
| `DeleteNode(Node*& NodeToDelete)` | Deletes a target node from the list. |
| `DeleteFirstNode()` | Removes the first node. |
| `DeleteLastNode()` | Removes the last node. |
| `FindNode(T Value)` | Finds and returns a pointer to the node with the specified value. |
| `GetNode(int index)` | Returns a pointer to the node at the given index. |
| `GetItem(int index)` | Returns the value of the item at the given index. |
| `UpdateItem(int index, T NewValue)` | Updates the value at the given index. |
| `PrintList()` | Displays all items in the list. |
| `Reverse()` | Reverses the order of nodes in the list. |
| `Clear()` | Removes all nodes and frees memory. |
| `Size()` | Returns the total number of nodes in the list. |
| `IsEmpty()` | Returns `true` if the list is empty, otherwise `false`. |

---

## 💻 Usage Example

```cpp
#include <iostream>
#include "clsDblLinkedList.h"

using namespace std;

int main() {
    clsDblLinkedList<int> myLinkedList;

    // Insert elements
    myLinkedList.InsertAtBeginning(10);
    myLinkedList.InsertAtEnd(20);
    myLinkedList.InsertAtEnd(30);

    cout << "List contents: ";
    myLinkedList.PrintList(); // Output: 10 20 30

    // Reverse list
    myLinkedList.Reverse();
    cout << "Reversed list: ";
    myLinkedList.PrintList(); // Output: 30 20 10

    // Update item
    myLinkedList.UpdateItem(0, 50);
    cout << "After update: ";
    myLinkedList.PrintList(); // Output: 50 20 10

    return 0;
}

⚙️ Requirements
• ​Language: C++11 or higher
• ​Compiler: Visual Studio, GCC, Clang, or any standard C++ compiler
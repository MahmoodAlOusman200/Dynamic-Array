# C++ Generic Dynamic Array Implementation (`clsDynamicArray`)

A custom, template-based **Dynamic Array** class implementation in C++. This library provides efficient dynamic memory reallocation, allowing arrays to grow or shrink dynamically at runtime while supporting comprehensive array manipulation methods.

---

## 🚀 Features

* **Generic Type Support**: Uses C++ Templates (`template <class T>`) to hold any data type.
* **Dynamic Resizing**: Automatically reallocates internal storage using dynamic memory management (`Resize`).
* **Flexible Insertion**: Insert elements at the beginning, end, or specific positions (before/after index).
* **Deletion Options**: Remove items by index, value, or clear the entire array.
* **Search & Update**: Find item indices, update existing values, and safely access elements.

---

## 🛠️ Public Methods Summary

### Array Management & Access
| Method | Description |
| :--- | :--- |
| `Size()` | Returns the current number of elements in the array.|
| `IsEmpty()` | Checks if the array contains no elements.|
| `Resize(int NewSize)` | Resizes the array dynamically to a new size.|
| `GetItem(int index)` | Retrieves the item value at the given index.|
| `SetItem(int index, T Value)` | Sets/updates the value at a specific index.|
| `PrintList()` | Prints all elements in the array.|

### Insertion Methods
| Method | Description |
| :--- | :--- |
| `InsertAtBegining(T Value)`| Inserts a new element at index.|
| `InsertAtEnd(T Value)` | Appends a new element to the end of the array.|
| `InsertAt(int index, T Value)` | Inserts an element at a specific index.|
| `InsertAfter(int index, T Value)` | Inserts an element immediately after the specified index.|
| `InsertBefore(int index, T Value)` | Inserts an element immediately before the specified index.|

### Deletion & Search
| Method | Description |
| :--- | :--- |
| `DeleteItemAt(int index)` | Deletes the element at a specific index.|
| `DeleteFirstItem()` | Removes the first element in the array.|
| `DeleteLastItem()` | Removes the last element in the array.|
| `DeleteItem(T Value)` | Searches and deletes the first matching element with the specified value.|
| `Find(T Value)` | Returns the index of the first occurrence of the specified value (or `-1` if not found).|
| `Reverse()` | Reverses the order of all elements in the array.|
| `Clear()` | Empties the array and resets its size.|

---

## 💻 Usage Example

```cpp
#include <iostream>
#include "clsDynamicArray.h"

using namespace std;

int main() {
    clsDynamicArray<int> myArray(3);

    // Set initial values
    myArray.SetItem(0, 10);
    myArray.SetItem(1, 20);
    myArray.SetItem(2, 30);

    cout << "Array elements: ";
    myArray.PrintList(); // Output: 10 20 30

    // Insert at end and beginning
    myArray.InsertAtEnd(40);
    myArray.InsertAtBegining(5);

    cout << "After insertions: ";
    myArray.PrintList(); // Output: 5 10 20 30 40

    // Delete item by value
    myArray.DeleteItem(20);

    cout << "After deleting 20: ";
    myArray.PrintList(); // Output: 5 10 30 40

    // Reverse array
    myArray.Reverse();
    cout << "Reversed array: ";
    myArray.PrintList(); // Output: 40 30 10 5

    return 0;
}


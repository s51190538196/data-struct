# Data Structures and Algorithms in C

This project provides C implementations of fundamental **data structures** and **algorithms**, including binary search, binary search trees (BST), hash tables, linked lists, quicksort, and random search.  
It is designed as a practice and learning project for comparing performance and understanding internal mechanics of core algorithms.

---

## 📂 Project Structure

```
data-struct-master/
├── binary_search.c      # Binary Search implementation
├── binary_search.h
├── bst.c                # Binary Search Tree implementation
├── bst.h
├── hash.c               # Hash Table implementation
├── hash.h
├── linklist.c           # Linked List implementation
├── linklist.h
├── quicksort.c          # Quicksort implementation
├── quicksort.h
├── partition.c          # Partition logic for quicksort
├── partition.h
├── randsearch.c         # Random Search implementation
├── randsearch.h
├── randnum.c            # Random number generator
├── randnum.h
├── main.c               # Entry point for testing algorithms
└── makefile             # Compilation rules
```

---

## ⚙️ Compilation & Execution

Use the included `makefile` for compilation:

```bash
make
./main
```

This will build the project and execute `main.c`, which serves as the test driver.

---

## 📖 Implemented Modules

- **Binary Search**
  - **Time Complexity**: O(log n)
  - **Space Complexity**: O(1)
  - Efficient searching in sorted arrays.

- **Binary Search Tree (BST)**
  - **Time Complexity**:
    - Best / Average: O(log n)
    - Worst: O(n) (degenerate tree)
  - **Space Complexity**: O(n)
  - Supports insertion, search, and traversal.

- **Hash Table**
  - **Time Complexity**:
    - Average: O(1) for insert/search
    - Worst: O(n) (in case of collisions)
  - **Space Complexity**: O(n)
  - Demonstrates hashing with collision handling.

- **Linked List**
  - **Time Complexity**:
    - Access: O(n)
    - Insert/Delete (head): O(1)
  - **Space Complexity**: O(n)
  - Singly linked list implementation.

- **Quicksort**
  - **Time Complexity**:
    - Best: O(n log n)
    - Average: O(n log n)
    - Worst: O(n²)
  - **Space Complexity**: O(log n) ~ O(n), depending on recursion depth
  - Fast, widely used sorting algorithm.

- **Random Search**
  - **Time Complexity**: O(n)
  - **Space Complexity**: O(1)
  - Searches array elements in random order.

---

## 🛠️ Requirements
- GCC (GNU Compiler Collection) or another C compiler  
- Make utility (`make` command)  

---

## 📌 Example Usage

```bash
make
./main
```

- `main.c` will demonstrate each implemented data structure and algorithm.
- You can modify `main.c` to test different input sizes and scenarios.

---

## 👩‍💻 Author
This project is maintained as a practice repository for learning and comparing core data structures and algorithms in C.

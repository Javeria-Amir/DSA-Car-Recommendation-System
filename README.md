A C++ project that applies Vectors, Binary Search Trees (BST), Heaps (Priority Queues), and Linear Search to recommend cars based on budget, fuel type, brand preferences, and ratings.
# 🚗 DSA Car Recommendation System

A C++-based Car Recommendation System that applies fundamental Data Structures and Algorithms to solve a real-world problem. The system helps users discover suitable cars based on preferences such as budget, fuel type, brand, and transmission while demonstrating efficient data organization, filtering, sorting, and ranking techniques.

## 📌 Project Overview

Choosing the right car involves comparing multiple factors such as price, fuel type, brand reputation, and customer ratings. This project simulates that decision-making process by providing personalized recommendations from a curated dataset of vehicles.

The primary goal of this project is to demonstrate practical applications of Data Structures and Algorithms rather than simply building a car catalog.

---

## 🧠 Data Structures & Algorithms Used

### 1. Vector (`vector<Cars>`)
- Stores the complete car dataset.
- Provides dynamic and efficient data management.
- Serves as the base collection for filtering and processing.

### 2. Binary Search Tree (BST)
- Organizes cars according to price.
- Uses Inorder Traversal to display cars in ascending price order.
- Demonstrates tree-based data organization and sorting.

### 3. Priority Queue (Heap)
- Identifies the highest-rated cars within a user's budget.
- Efficiently retrieves top recommendations.
- Demonstrates the use of heap-based ranking systems.

### 4. Linear Search
- Filters cars by:
  - Fuel Type
  - Brand
  - Transmission
- Provides a straightforward search mechanism for user preferences.

---

## ⚙️ Features

✅ Hardcoded dataset of multiple vehicle categories

✅ Filter cars by:
- Fuel Type
- Brand
- Transmission

✅ Case-insensitive search support

✅ Display Top Rated Cars within a specified budget

✅ View Cars Sorted by Price using Binary Search Tree

✅ Interactive console-based user experience

---

## 🏗️ Technologies Used

- **Language:** C++
- **IDE:** Visual Studio Code
- **Libraries:**
  - `<vector>`
  - `<queue>`
  - `<string>`
  - `<utility>`
  - `<iostream>`

---

## 📂 Project Structure

```text
Cars Structure
│
├── Vector Storage
│
├── Filtering Functions
│   ├── Fuel Filter
│   ├── Brand Filter
│   └── Transmission Filter
│
├── Binary Search Tree
│   ├── Insert by Price
│   └── Inorder Traversal
│
└── Priority Queue
    └── Top Rated Car Recommendations
```

## 🎯 Learning Outcomes

Through this project, I strengthened my understanding of:

- Structs and Object-Based Data Modeling
- Vectors and Dynamic Arrays
- Binary Search Trees
- Heaps / Priority Queues
- Searching and Filtering Algorithms
- Recursive Tree Traversals
- Problem Solving using DSA
- Designing Real-World Console Applications in C++

  
## 💡 Motivation

As someone passionate about cars and technology, I wanted to build a project that combined both interests while reinforcing my Data Structures and Algorithms knowledge.

The idea was inspired by automotive recommendation concepts I explored online, and I used it as an opportunity to apply DSA concepts to a practical use case rather than implementing algorithms in isolation.

## 📸 Sample Output

### Welcome Screen
![Welcome Screen](images/welcome)

### Filtering Cars
![Filtering Cars](images/filters)

### Top Rated Cars
![Top Rated Cars](images/top-rated)

### Cars Sorted by Price (BST)
![BST Sorting](images/bst-sorting)

## 🚀 Future Improvements
- AVL Tree implementation for balanced price indexing
- Trie-based model search and autocomplete
- Advanced recommendation scoring
- File-based data storage
- Graphical User Interface (GUI)
- Database integration

## Author

Javeria Amir

Built in 3rd Semester 

Focused on Data Structures & Algorithms, Software Development, and Problem Solving through practical projects.

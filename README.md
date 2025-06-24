# Sorting Algorithms in C

This repository contains C implementations of fundamental sorting algorithms, including:

- 🔁 Bubble Sort  
- 🧩 Insertion Sort  
- 📥 Selection Sort  
- 🔄 Substitution Sort

Each algorithm is implemented in a clean and understandable way, intended for educational purposes and for those who want to better understand the mechanics of sorting at a low level.

## 📁 Structure

The repository is organized as follows:

```
sort-algorithms/
│
├── include/                  
│   ├── bubble_sort.h
│   ├── selection_sort.h
│   ├── substitution_sort.h
│   ├── insertion_sort.h
│   ├── test_bubble_sort.h
│   ├── test_selection_sort.h
│   ├── test_substitution_sort.h
│   ├── test_insertion_sort.h
│   └── util.h
│
├── src/                         # Source implementations
│   ├── bubble_sort.c
│   ├── selection_sort.c
│   ├── substitution_sort.c
│   └── insertion_sort.c
│
├── tests/                       # Unit tests
│   ├── main_test.c
│   ├── test_bubble_sort.c
│   ├── test_selection_sort.c
│   ├── test_substitution_sort.c
│   └── test_insertion_sort.c
│
├── README.md                    # Project overview, usage, build instructions
└── CMakefileLists.txt

```

## 🚀 Getting Started

### ✅ Prerequisites

You’ll need a C compiler like `gcc`.

## 🧠 Algorithms Explained

* **Bubble Sort**: Repeatedly steps through the list, compares adjacent elements, and swaps them if they are in the wrong order.
* **Insertion Sort**: Builds the sorted array one item at a time by comparing with the left side.
* **Selection Sort**: Repeatedly selects the smallest element and moves it to the sorted part.
* **Substitution Sort**: *(Custom or lesser-known algorithm — clarify implementation details here if applicable).*

## 📚 Educational Purpose

This project is designed to:

* Help students understand core sorting algorithms.
* Provide a playground to test and visualize sorting behavior.
* Encourage algorithm comparison and performance analysis.

## 🧑‍💻 Author

**Abegà Razafindratelo**

# Introduction to Programming — CSE141

![C++](https://img.shields.io/badge/Language-C%2B%2B17-blue?style=flat-square)
![IBA](https://img.shields.io/badge/Institute-IBA%20Karachi-yellow?style=flat-square)
![Course](https://img.shields.io/badge/Course-CSE141-lightgrey?style=flat-square)

My lab work and assignments from Introduction to Programming at IBA Karachi. This was my first proper C++ course — it started from the absolute basics and built up to pointers, structs, and linked lists by the end.

Looking back at Lab 1 versus Lab 13 is a pretty good indicator of how much ground the course covered.

---

## 📂 Structure

```
itp-cs101/
├── Labs/
│   ├── Lab01/    → basics, I/O, escape sequences
│   ├── Lab02/    → variables, data types, arithmetic
│   ├── Lab03/    → conditionals and branching
│   ├── Lab04/    → loops
│   ├── Lab05/    → functions
│   ├── Lab06/    → arrays
│   ├── Lab07/    → strings
│   ├── Lab08/    → pointers
│   ├── Lab09/    → structs
│   ├── Lab10/    → file handling
│   ├── Lab11/    → dynamic memory
│   └── Lab12/    → more pointers and memory
│
└── Assignments/
    ├── Assignment01/
    ├── Assignment02/
    ├── Assignment03/
    └── Assignment04/
```

---

## 🧠 Topics Covered

| Topic | What I Practiced |
|:------|:----------------|
| **Basics** | Variables, data types, I/O, escape sequences |
| **Control Flow** | If/else, switch, loops (for, while, do-while) |
| **Functions** | Parameters, return types, modular design |
| **Arrays & Strings** | 1D/2D arrays, string manipulation |
| **Pointers** | Pointer arithmetic, dynamic memory, heap vs stack |
| **Structs** | Custom data types, operator overloading |
| **File Handling** | Reading and writing files in C++ |
| **Linked Lists** | Node structs, insertion, deletion, traversal, recursion |

---

## 📌 A Few Things Worth Noting

The linked list labs at the end were the most interesting — writing `insertEnd()`, reversing a list iteratively, and removing duplicates using operator overloading pushed me to actually think about memory instead of just writing code that runs.

The pointer labs were also where things started clicking. Understanding why `Node* next` works the way it does made building my [Snake Game](https://github.com/kartar-singh-cs/snake-game-cpp) using a custom linked list much more intuitive later.

---

## ⚙️ How to Run Any Task

All tasks are standard C++ — no external libraries needed.

```bash
g++ -std=c++17 task1.cpp -o task1
./task1
```

---

## 👨‍💻 Developer

**Kartar Singh**
CS Student @ IBA Karachi
[github.com/kartar-singh-cs](https://github.com/kartar-singh-cs)

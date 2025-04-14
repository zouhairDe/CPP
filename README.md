# 🧠 42 C++ Modules

This repository contains solutions and notes for the **C++ Modules** at [42 School](https://42.fr/). These modules cover C++98 concepts with an emphasis on object-oriented programming, memory management, and language internals.

## 📚 Overview

| Module | Topic                          | Key Concepts |
|--------|--------------------------------|--------------|
| 00     | Basics                         | I/O, namespaces, compiling |
| 01     | OOP Basics                     | Memory allocation, references, pointers |
| 02     | Ad-hoc Polymorphism & Fixed-Point | Overloading, Canonical form, Fixed-point class |
| 03     | Inheritance                    | Access specifiers, inheritance tree |
| 04     | Abstract Classes & Interfaces  | Virtual methods, interfaces |
| 05     | Exceptions                     | Error handling, try/catch, custom exceptions |
| 06     | Type Casting                   | `static_cast`, `reinterpret_cast`, `dynamic_cast`, `const_cast` |
| 07     | Templates                      | Function/class templates |
| 08     | Templated Containers           | Custom containers, iterators |
| 09     | Advanced Algorithms            | Ford-Johnson sort, Jacobsthal sequence, Reverse Polish Notation |

---

## 🧩 Modules

### 📦 Module 00 — Basics
- I/O (`iostream`)
- Compilation model
- Namespaces and headers

### 🧠 Module 01 — Memory & References
- Pointers and references
- Stack vs Heap
- Shallow vs Deep copy

### 🔢 Module 02 — Overloading & Fixed-Point Representation
- Operator/function overloading
- Canonical class form
- `Fixed` class to simulate fixed-point numbers

### 🧬 Module 03 — Inheritance
- Classical inheritance
- Visibility (`public`, `protected`, `private`)
- Constructor/destructor order

### 🧪 Module 04 — Abstract Classes & Polymorphism
- Abstract base classes
- Virtual and pure virtual methods
- Polymorphic behavior via inheritance

### 🚨 Module 05 — Exceptions
- `try/catch/throw` mechanics
- Custom exception classes
- Error boundary control

### 🔄 Module 06 — Type Casting
- `static_cast`
- `reinterpret_cast`
- `const_cast`
- `dynamic_cast`
- Practical use cases and safety

### 🧰 Module 07 — Templates
- Function templates
- Class templates
- Generic programming principles

### 🧳 Module 08 — Templated Containers
- Custom container implementation
- STL-style iterators
- Performance & complexity

### ⚙️ Module 09 — Advanced Algorithms
- Ford-Johnson merge-insertion sort
- Jacobsthal sequence-based insertion pattern
- Reverse Polish Notation (RPN) calculator
- Time measurement and performance benchmarking

---

## ⚙️ Build & Run

Inside each module directory:
```bash
cd cppXX/
cd exXX/
  make
    ./binary #can be found on the Makefile [NAME variable]

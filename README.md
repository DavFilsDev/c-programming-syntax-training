# C Programming Syntax Training

[![Language](https://img.shields.io/badge/language-C-blue.svg)](https://en.wikipedia.org/wiki/C_(programming_language))
[![License](https://img.shields.io/badge/license-MIT-green.svg)](LICENSE)

A comprehensive collection of C programming exercises, examples, and learning resources. This repository serves as my personal journey to master the C programming language through hands-on practice and systematic learning.

## 📚 Table of Contents

- [About](#about)
- [Repository Structure](#repository-structure)
- [Prerequisites](#prerequisites)
- [Getting Started](#getting-started)
- [Learning Path](#learning-path)
- [Topics Covered](#topics-covered)
- [How to Use This Repository](#how-to-use-this-repository)
- [Compilation and Execution](#compilation-and-execution)
- [Contributing](#contributing)
- [Resources](#resources)
- [License](#license)

## 🎯 About

This repository documents my journey learning C programming. Starting from basic syntax to advanced concepts, each topic is reinforced with practical exercises and real-world examples. The goal is to build a strong foundation in C programming through consistent practice and problem-solving.

## 📁 Repository Structure

```
c-learning/
│
├── README.md                 # This file
├── LICENSE                   # MIT License
│
├── basics/                   # Fundamental concepts
│   ├── hello_world.c
│   ├── variables.c
│   ├── data_types.c
│   ├── operators.c
│   └── input_output.c
│
├── control_flow/             # Control structures
│   ├── if_else.c
│   ├── switch_case.c
│   ├── loops/
│   │   ├── for_loop.c
│   │   ├── while_loop.c
│   │   └── do_while.c
│   └── break_continue.c
│
├── functions/                # Function concepts
│   ├── basic_functions.c
│   ├── recursion.c
│   ├── scope_lifetime.c
│   └── function_pointers.c
│
├── arrays_pointers/          # Arrays and pointers
│   ├── arrays/
│   │   ├── 1d_arrays.c
│   │   ├── 2d_arrays.c
│   │   └── array_operations.c
│   └── pointers/
│       ├── pointer_basics.c
│       ├── pointer_arithmetic.c
│       └── pointers_arrays.c
│
├── strings/                  # String manipulation
│   ├── string_functions.c
│   ├── string_operations.c
│   └── string_arrays.c
│
├── structures_unions/        # User-defined types
│   ├── structures.c
│   ├── nested_structures.c
│   ├── unions.c
│   └── typedef.c
│
├── dynamic_memory/           # Memory management
│   ├── malloc_calloc.c
│   ├── realloc_free.c
│   └── memory_leaks.c
│
├── file_io/                  # File operations
│   ├── file_read_write.c
│   ├── file_append.c
│   └── binary_files.c
│
└── exercises/                # Practice problems
    ├── easy/
    ├── medium/
    └── hard/
```

## 🔧 Prerequisites

To compile and run C programs, you'll need:

- **Linux/Mac**: GCC compiler
  ```bash
  sudo apt-get install gcc    # Ubuntu/Debian
  brew install gcc            # macOS
  ```

- **Windows**: 
  - MinGW-w64
  - Or use WSL (Windows Subsystem for Linux)
  - Or use an IDE like Code::Blocks, Dev-C++

## 🚀 Getting Started

1. **Clone the repository**
   ```bash
   git clone https://github.com/DavFilsDev/c-programming-syntax-training.git
   ```

2. **Navigate to any directory and compile a program**
   ```bash
   cd c-programming-syntax-training/basics
   gcc hello_world.c -o hello_world
   ./hello_world
   ```

3. **Start learning!** Follow the topics in order or jump to areas you want to practice.

## 📖 Learning Path

### Phase 1: Fundamentals
- Basic syntax and structure
- Variables and data types
- Operators and expressions
- Input/Output operations

### Phase 2: Control Flow
- Conditional statements (if, else, switch)
- Loops (for, while, do-while)
- Break and continue

### Phase 3: Functions & Modularity
- Function declaration and definition
- Parameter passing (by value vs by reference)
- Recursion
- Scope and lifetime

### Phase 4: Arrays & Pointers
- One and multi-dimensional arrays
- Pointer fundamentals
- Pointer arithmetic
- Relationship between arrays and pointers

### Phase 5: Advanced Topics
- Strings and string functions
- Structures and unions
- Dynamic memory allocation
- File handling

## 💻 How to Use This Repository

### For Learning
1. **Read the code**: Each file contains commented explanations
2. **Compile and run**: See the output and experiment
3. **Modify**: Change values and observe results
4. **Practice**: Solve the exercises in the `exercises/` directory

### For Practice
```bash
# Navigate to exercises
cd exercises/easy

# Solve a problem
# Create your solution file
nano problem1.c

# Compile and test
gcc problem1.c -o problem1
./problem1
```

## 🔨 Compilation and Execution

### Basic Compilation
```bash
gcc program.c -o program
./program
```

### With Warnings (Recommended)
```bash
gcc -Wall -Wextra -Werror program.c -o program
./program
```

### Debug Mode
```bash
gcc -g program.c -o program
gdb ./program
```

### Multiple Files
```bash
gcc file1.c file2.c -o program
./program
```

## 📚 Resources

### Books
- **"The C Programming Language"** - Kernighan & Ritchie (K&R)
- **"C Programming: A Modern Approach"** - K.N. King
- **"Head First C"** - David Griffiths

### Online Resources
- [GeeksforGeeks C Programming](https://www.geeksforgeeks.org/c-programming-language/)
- [C Programming Tutorial (TutorialsPoint)](https://www.tutorialspoint.com/cprogramming/)
- [Learn-C.org](https://www.learn-c.org/)
- [C Reference (cppreference.com)](https://en.cppreference.com/w/c)

### Practice Platforms
- [LeetCode](https://leetcode.com/)
- [HackerRank](https://www.hackerrank.com/domains/c)
- [CodeChef](https://www.codechef.com/)
- [Exercism](https://exercism.org/tracks/c)


## 🎯 Goals

- Complete 100+ C programming exercises
- Master memory management concepts
- Understand system-level programming
- Prepare for technical interviews

## 📄 License

This project is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.


**Happy Coding!** 🚀

*"The only way to learn a new programming language is by writing programs in it." - Dennis Ritchie*
# C Tutorial

A collection of C programming tutorials covering fundamental concepts with practical examples.

## 📚 Tutorials

### 1. Variables (`variables.c`)
Learn about different data types in C:
- **int** - Whole numbers (4 bytes)
- **float** - Single-precision decimal numbers (4 bytes)
- **double** - Double-precision decimal numbers (8 bytes)
- **char** - Single characters (1 byte)
- **char[]** - Arrays of characters (strings)
- **bool** - Boolean values (true/false, requires `<stdbool.h>`)

This tutorial demonstrates variable declaration, initialization, and usage with `printf()` statements.

### 2. Format Specifiers (`formatSpecifiers.c`)
Explore printf format specifiers and their modifiers:
- Basic format specifiers: `%d`, `%f`, `%lf`, `%c`, `%s`
- Width formatting: `%3d`, `%4d`, etc.
- Left alignment: `%-3d`
- Leading zeros: `%03d`
- Sign display: `%+d`
- Precision: `%.2f`, `%.1f`
- Combined flags: `%+-8.2f`

## 🚀 Getting Started

### Prerequisites
- A C compiler (GCC, Clang, or similar)
- A terminal/command prompt

### Compilation

To compile any C file, use:

```bash
gcc filename.c -o output_name
```

For example:
```bash
gcc variables.c -o variables
gcc formatSpecifiers.c -o formatSpecifiers
```

### Running

After compilation, run the executable:

```bash
./variables
./formatSpecifiers
```

Or on Windows:
```cmd
variables.exe
formatSpecifiers.exe
```

## 📝 Example Usage

### Compile and run variables.c:
```bash
gcc variables.c -o variables
./variables
```

### Compile and run formatSpecifiers.c:
```bash
gcc formatSpecifiers.c -o formatSpecifiers
./formatSpecifiers
```

## 📂 Repository Structure

```
C-Tutorial/
├── README.md
├── variables.c
├── formatSpecifiers.c
└── .gitignore
```

## 🎯 Learning Objectives

- Understanding C data types and their sizes
- Variable declaration and initialization
- Using printf() for output
- Format specifiers and their modifiers
- String handling in C
- Boolean operations

## 📖 Notes

- All programs include detailed comments explaining each concept
- Examples are designed to be clear and educational
- Feel free to modify and experiment with the code

## 🤝 Contributing

This is a personal learning repository. Feel free to fork and use these examples for your own learning!

## 📄 License

This repository is for educational purposes.

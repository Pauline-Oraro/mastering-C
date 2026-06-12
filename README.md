# 🧠 Mastering C

A personal weekly learning journal for mastering the C programming language — from fundamentals to advanced systems programming.

---

## 📌 About This Repo

This repository tracks my structured, week-by-week journey through C. Each week focuses on a specific topic, with notes, exercises, and small projects to reinforce learning.

---

## 📅 Weekly Progress

| Week | Topic | Status |
|------|-------|--------|
| Week 01 | Setting Up & Hello World | ✅ Done |
| Week 02 | Variables, Data Types, Type Conversion, Constants, Booleans and Operators. | ✅ Done |

---

## 🗂️ Folder Structure

```
mastering-c/
├── README.md
├── week-01/
│   ├── notes.md
│   ├── exercises/
│   └── project/
├── week-02/
│   ├── notes.md
│   ├── exercises/
│   └── project/
└── ...
```

Each week's folder contains:

- `notes.md` — Key concepts and summaries
- `exercises/` — Practice problems and solutions
- `project/` — A small hands-on project for the week

---

## 🛠️ Tools & Setup

- **Compiler:** GCC (`sudo apt install gcc` on Linux/WSL, or Xcode CLI on macOS)
- **Editor:** VS Code with the C/C++ extension (or any editor you like)
- **Debugger:** GDB (`gcc -g file.c -o file && gdb file`)

Compile and run a file:
```bash
gcc hello.c -o hello && ./hello
```

Compile with warnings (recommended):
```bash
gcc -Wall -Wextra -o hello hello.c && ./hello
```

---

## 📚 Resources

- [W3Schools](https://www.w3schools.com/c/index.php) *(the classic book)*
- [CS50x by Harvard](https://cs50.harvard.edu/x/) *(great free course)*
- [Beej's Guide to C Programming](https://beej.us/guide/bgc/) *(free, beginner-friendly)*
- [cppreference.com](https://en.cppreference.com/w/c) *(language reference)*

---

## 🎯 Goal

Complete all 8 weeks and build a strong foundation in C — including memory management, pointers, and data structures — as preparation for systems programming and deeper computer science topics.

---

*Started: [Monday 1st June 2026] • Learning one week at a time.*
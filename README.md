````md
# 📂 Learning File Handling Using C

<div align="center">

### 🚀 A Beginner-Friendly Journey into C File Handling

Learn **Text File Handling** and **Binary File Handling** in C through simple examples, practice, and a real-world mini project.

<br>

![C](https://img.shields.io/badge/Language-C-blue?style=for-the-badge)
![File Handling](https://img.shields.io/badge/Topic-File%20Handling-green?style=for-the-badge)
![Level](https://img.shields.io/badge/Level-Beginner-orange?style=for-the-badge)

</div>

---

## 📖 About This Repository

This repository is created to learn **File Handling in C** step by step.

The learning journey starts with the basics of **Text File Handling** and gradually moves toward more advanced concepts such as **Binary File Handling**.

The main goal is to understand how files work in C and how file handling can be used to build practical applications.

---

# 🗺️ Learning Roadmap

## 📝 Part 1 — Basic Text File Handling

Learn the fundamentals of working with text files.

| # | File | Concept |
|---|------|---------|
| 01 | `01_write_in_file.c` | Writing data into a file |
| 02 | `02_read_from_file.c` | Reading data from a file |
| 03 | `03_append_in_file.c` | Appending data to a file |
| 04 | `04_fclose.c` | Closing a file using `fclose()` |
| 05 | `05_read_and_view_multiple_data_using_while.c` | Reading multiple records |
| 06 | `06_insert_and_view_multiple_data_using_struct.c` | Structure + File Handling |
| 07 | `07_search_data_in_file.c` | Searching data |
| 08 | `08_update_data_using_temp_file.c` | Updating data using a temporary file |
| 09 | `09_remove_and_rename_file.c` | `remove()` and `rename()` |
| 10 | `10_delete_data_from_file.c` | Deleting data |

---

## 💾 Part 2 — Binary File Handling

Coming soon...

This section will cover how to store and manage data using **binary files**.

Planned concepts:

- Binary file introduction
- `fwrite()`
- `fread()`
- Writing structures to binary files
- Reading structures from binary files
- Searching binary files
- Updating binary records
- Deleting binary records
- Binary file CRUD operations
- Practical binary file project

> 🚧 This section will be added gradually as I continue learning.

---

# 🧠 What You Will Learn

### 📌 File Opening Modes

| Mode | Purpose |
|------|---------|
| `r` | Read |
| `w` | Write |
| `a` | Append |
| `r+` | Read + Write |
| `w+` | Write + Read |
| `a+` | Append + Read |

> ⚠️ Be careful with `w` mode because it can remove the previous contents of a file.

---

## 📄 Text File Handling

Text files store data in a human-readable format.

Example:

```text
101 Sowrav 22
102 Sakib 23
103 Rahim 21
````

Common functions:

```c
fopen()
fclose()
fprintf()
fscanf()
fgets()
fputs()
fgetc()
fputc()
```

---

## 💾 Binary File Handling

Binary files store data in binary format instead of human-readable text.

Common functions:

```c
fopen()
fclose()
fwrite()
fread()
```

Example:

```c
fwrite(&person, sizeof(person), 1, fp);
```

and:

```c
fread(&person, sizeof(person), 1, fp);
```

Binary File Handling will be covered in a separate section after completing the basic text file concepts.

---

# 🧱 Structure with File Handling

Structures allow us to combine different types of data into one record.

Example:

```c
struct node {
    int id;
    char name[30];
    int age;
};
```

A structure can be used with both **text files** and **binary files**.

---

# 🔎 Search

Search data from a file using an ID or another unique value.

```text
file.txt
   ↓
Read data
   ↓
Take ID
   ↓
Compare ID
   ↓
Found?
 ↙     ↘
YES     NO
 ↓       ↓
View   Not Found
```

---

# ✏️ Update

For text-file based update operations, a temporary file can be used.

```text
file.txt
   ↓
Read record
   ↓
Find ID
   ↓
Update data
   ↓
temp.txt
   ↓
remove("file.txt")
   ↓
rename("temp.txt", "file.txt")
```

---

# 🗑️ Delete

Delete a record by skipping the matching record while creating a new file.

```text
file.txt
   ↓
Read record
   ↓
Find ID
   ↓
Skip matching record
   ↓
Write remaining records
   ↓
temp.txt
   ↓
remove("file.txt")
   ↓
rename("temp.txt", "file.txt")
```

---

# 🚀 Mini Project

After learning the basic concepts, apply them to a practical project.

## 👨‍💼 Employee Record Management System

A simple **C-based File Handling Project** for managing employee records.

### Features

* ➕ Add Employee
* 👀 View Employees
* 🔍 Search Employee
* ✏️ Update Employee
* 🗑️ Delete Employee
* 🚪 Exit

### Concepts Used

* File Handling
* Structure
* Insert Data
* View Data
* Search Data
* Update Data
* Delete Data
* Temporary File
* `fopen()`
* `fclose()`
* `fscanf()`
* `fprintf()`
* `remove()`
* `rename()`

### 📄 Project Question

Try to solve the project yourself before checking the completed solution.

👉 **[Open the Mini Project Question](11_mini_project/Employee_Record_Management_System.pdf)**

### 💻 Completed Project

I have already built this project as a practical example.

👉 **[View the Employee Record Management System](https://github.com/sowravbyte/Employee-Record-Management-System-A-C-based-File-Handling-Project)**

> 💡 Try to build the project yourself first. Check the completed project only when you need help.

---

# 🎯 Learning Path

```text
C Basics
   ↓
Text File Handling
   ↓
Structures + Files
   ↓
Search / Update / Delete
   ↓
Mini Project
   ↓
Binary File Handling
   ↓
Binary File CRUD
   ↓
Advanced Practice
```

---

# 🛠️ Requirements

To practice the programs, you need:

* C Compiler
* VS Code / Code::Blocks / Dev-C++
* Basic knowledge of C programming

---

# 📚 Topics Covered

### Text File Handling

* [x] Write
* [x] Read
* [x] Append
* [x] Close File
* [x] Multiple Data
* [x] Structure
* [x] Search
* [x] Update
* [x] Delete
* [x] Temporary File
* [x] `remove()`
* [x] `rename()`

### Binary File Handling

* [ ] Binary File Basics
* [ ] `fwrite()`
* [ ] `fread()`
* [ ] Structure with Binary Files
* [ ] Search
* [ ] Update
* [ ] Delete
* [ ] Binary CRUD
* [ ] Binary File Project

---

# 👨‍💻 Author

<div align="center">

### _sadakuzzaman

Software Engineering Student

Learning C • C++ • DSA • Problem Solving

</div>

---

<div align="center">

⭐ If this repository helps you learn, consider giving it a star!

**Keep Learning • Keep Practicing • Keep Building 🚀**

</div>
```

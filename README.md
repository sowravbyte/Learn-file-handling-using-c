````md
# 📂 Learning File Handling Using C

<p align="center">
  <img src="https://img.shields.io/badge/Language-C-blue?style=for-the-badge" alt="C">
  <img src="https://img.shields.io/badge/Topic-File%20Handling-green?style=for-the-badge" alt="File Handling">
  <img src="https://img.shields.io/badge/Level-Beginner-orange?style=for-the-badge" alt="Beginner">
</p>

<p align="center">
  <b>A beginner-friendly journey into File Handling using C.</b>
</p>

---

## 📖 About This Repository

This repository is created to learn **File Handling in C** step by step.

The learning journey starts with basic **Text File Handling** and gradually moves toward **Binary File Handling**.

The goal is to understand file operations through simple examples and then apply those concepts to a practical real-world project.

---

# 🗺️ Learning Roadmap

## 📝 Part 1 — Text File Handling

| # | File | Concept |
|---|------|---------|
| 01 | `01_write_in_file.c` | Write data into a file |
| 02 | `02_read_from_file.c` | Read data from a file |
| 03 | `03_append_in_file.c` | Append data to a file |
| 04 | `04_fclose.c` | Close a file |
| 05 | `05_read_and_view_multiple_data_using_while.c` | Read multiple records |
| 06 | `06_insert_and_view_multiple_data_using_struct.c` | Structure + File Handling |
| 07 | `07_search_data_in_file.c` | Search data |
| 08 | `08_update_data_using_temp_file.c` | Update data using temporary file |
| 09 | `09_remove_and_rename_file.c` | `remove()` and `rename()` |
| 10 | `10_delete_data_from_file.c` | Delete data |

---

## 💾 Part 2 — Binary File Handling

> 🚧 **Coming Soon**

This section will cover Binary File Handling from the basics to practical CRUD operations.

### Planned Topics

- [ ] Introduction to Binary Files
- [ ] Opening Binary Files
- [ ] `fwrite()`
- [ ] `fread()`
- [ ] Writing Structures
- [ ] Reading Structures
- [ ] Searching Binary Records
- [ ] Updating Binary Records
- [ ] Deleting Binary Records
- [ ] Binary File CRUD
- [ ] Binary File Project

---

# 🧠 Core Concepts

## 📄 Text File Handling

Text files store data in a human-readable format.

Example:

```text
101 Sowrav 22
102 Sakib 23
103 Rahim 21
````

### Common Functions

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

Binary files store data in binary format rather than normal readable text.

Some important functions are:

```c
fwrite()
fread()
```

Example:

```c
fwrite(&person, sizeof(person), 1, fp);
```

```c
fread(&person, sizeof(person), 1, fp);
```

---

# 🧱 Structure with File Handling

Structures allow us to store different types of data together as one record.

Example:

```c
struct node {
    int id;
    char name[30];
    int age;
};
```

A structure can be used with both:

* Text Files
* Binary Files

---

# 🔍 Search Operation

Searching allows us to find a specific record using a unique value such as an ID.

```text
file.txt
   ↓
Read record
   ↓
Take Search ID
   ↓
Compare ID
   ↓
   Found?
  ↙      ↘
 YES      NO
  ↓        ↓
View    Not Found
Data
```

---

# ✏️ Update Operation

For text-file based updates, a temporary file can be used.

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

# 🗑️ Delete Operation

For deleting a record:

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

### ✨ Features

* ➕ Add Employee
* 👀 View Employees
* 🔍 Search Employee
* ✏️ Update Employee
* 🗑️ Delete Employee
* 🚪 Exit

### 🧩 Concepts Used

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

---

## 📄 Project Question

Try to solve the project yourself before checking the completed solution.

📌 **[Open the Mini Project Question PDF](11_mini_project/Employee_Record_Management_System.pdf)**

---

## 💻 Completed Project

I have already built this project as a practical example.

🔗 **[View Employee Record Management System](https://github.com/sowravbyte/Employee-Record-Management-System-A-C-based-File-Handling-Project)**

> 💡 **Learning Tip:** Try to build the project yourself first. Check the completed project only when you need help.

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

# 📚 Progress

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

# 🛠️ Requirements

To practice the programs, you need:

* C Compiler
* VS Code / Code::Blocks / Dev-C++
* Basic knowledge of C programming

---

# 👨‍💻 Author

<p align="center">

### _sadakuzzaman

Software Engineering Student

<b>C • C++ • DSA • Problem Solving</b>

</p>

---

<p align="center">

⭐ If this repository helps you learn, consider giving it a star!

### Keep Learning • Keep Practicing • Keep Building 🚀

</p>
```

# Employee Record Management System

### A C-Based File Handling Project

---

## Problem Statement

Create an **Employee Record Management System** using the C programming language.

The main purpose of this project is to practice **file handling and structure concepts** by creating a simple real-world employee management system.

The program should allow the user to store employee information in a file and perform different operations such as adding, viewing, searching, updating, and deleting employee records.

---

## Employee Information

Each employee record should contain the following information:

* Employee ID
* Employee Name
* Employee Age
* Employee Salary

You may add more information if needed.

---

## Required Features

The program should provide a menu with the following options:

1. **Add Employee**
   Take employee information from the user and store it in a file.

2. **View Employees**
   Display all employee records stored in the file.

3. **Search Employee**
   Search for an employee using the Employee ID and display the employee's information.

4. **Update Employee**
   Search for an employee using the Employee ID and update the required information.

5. **Delete Employee**
   Search for an employee using the Employee ID and delete the employee record.

6. **Exit**
   Close the program safely.

---

## Requirements

* Use the **C programming language**.
* Use a `struct` to store employee information.
* Use **file handling** to store employee records.
* Use a `FILE` pointer for file operations.
* Use appropriate file modes such as `r`, `w`, and `a`.
* Use `fopen()` and `fclose()`.
* Use `fscanf()` / `fprintf()` or other suitable file functions.
* Use a temporary file when necessary for update and delete operations.
* Use `remove()` and `rename()` where required.
* Display appropriate messages when an employee is found or not found.

---

## Example Menu

```text
========== Employee Record Management System ==========

1. Add Employee
2. View Employees
3. Search Employee
4. Update Employee
5. Delete Employee
6. Exit

Enter your choice:
```

---

## Instructions

* Keep the program simple and beginner-friendly.
* Use meaningful variable and function names.
* Make sure files are properly opened and closed.
* Handle the case when the file cannot be opened.
* Display a suitable message when an employee ID is not found.
* Try to prevent duplicate Employee IDs.
* Store the employee records permanently using file handling.
* Do not use a database for this project.

---

## Learning Objective

This project is designed to help you practice the file handling concepts learned throughout this repository and apply them to a practical real-world problem.

You should try to build the project yourself before looking at the completed solution.

---

## Reference Project

I have already built this project so that you can understand how the basic file handling concepts can be applied in a practical project.

**Employee Record Management System — C-Based File Handling Project**

👉 [View the Project on GitHub](https://github.com/sowravbyte/Employee-Record-Management-System-A-C-based-File-Handling-Project)

---

## Concepts Used in the Project

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

## Purpose

The purpose of this mini project is to combine the file handling concepts learned in this repository into one practical application.

**Try to solve the problem yourself first, then check the reference project if you need help.**

# Course 1 — Problem 2  
## **Magrathea Prototype — Modular Splash Screen System (Functions + Files)**  
**Week 5 — Structured C Programming**

### 🌟 Objective
This assignment continues directly from **Problem 1**, where students created the first version of Magrathea’s splash screen.  
In **Problem 2**, the goal is to **refactor and upgrade the splash system** using:

- Multiple `.c` + `.h` files  
- Clean function decomposition  
- Basic string handling  
- Screen formatting  
- Optional ASCII patterns  
- A more professional project folder layout  

This is the first task where students transition from **"single C file"** to a **multi-file C project**.

---

## 📘 Background Story
After Arthur successfully presented the initial Magrathea splash screen prototype (Problem 1), the CTO encouraged him to restructure the prototype into a **modular codebase** so the team can expand the project quickly.

Arthur spent the morning rewriting the prototype following real software engineering practices:

- dedicated utility functions  
- separate modules for splash rendering  
- a file for optional text I/O  
- structured header files  
- no duplication of code  

This assignment simulates what Arthur built — a clearer, more maintainable Magrathea splash component.

---

## 🧩 Problem Description

### You must implement the upgraded Magrathea splash program with:

### ✔ **1. Prompt for user name and date**
```
[Enter the current date in "YYYY-MM-DD" format]:  
[Enter your name]:  
```

### ✔ **2. After input, display confirmation**
```
**Your input has been processed successfully.**
```

### ✔ **3. Clear the screen (1–3 seconds delay)**
Use:
- `system("cls")` for Windows  
- `system("clear")` for Linux/macOS  

### ✔ **4. Display the formatted Magrathea Splash Screen**
```
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
                      [Magrathea ver 0.2]
           A place where planets are crafted from nothing.
      Hidden potential becomes brilliance under expert hands.
                     Welcome to Magrathea.
++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
[User]: Arthur Dent                [Execution Date]: 2023-08-20
==============================================================
```

### ✔ **5. Functions MUST be used**
At minimum, implement:

| File | Function |
|------|----------|
| splash.c | `void render_splash(const char* name, const char* date);` |
| utils.c | `void print_line(char c, int count);` |
| fileio.c | optional I/O helpers |

### ✔ **6. Project MUST use multiple files**
```
main.c → orchestration
splash.c / splash.h → render logic  
utils.c / utils.h → helper functions  
fileio.c / fileio.h → optional text loading  
```

### ✔ **7. BONUS (Recommended)**
- Add left + right aligned triangle patterns using `"*"`  
- Store splash text in `/assets/splash.txt` and load via `fileio.c`  
- Add `sleep(1)` before clearing the screen

---

## 📁 Project Structure

```
Course-1-Problem-2-Splash/
│
├── README.md
├── .github/workflows/autograding.yml
│
├── src/
│   ├── main.c
│   ├── splash.c
│   ├── splash.h
│   ├── utils.c
│   ├── utils.h
│   ├── fileio.c
│   └── fileio.h
│
├── assets/
│   └── splash.txt
│
└── tests/
    └── instructor_expected_output.txt
```

---

## 🧪 Grading Checklist

| Requirement | Points |
|------------|--------|
| Multi-file build compiles without warnings | 20 |
| Uses functions (not all logic in main) | 20 |
| Clean screen before splash | 10 |
| Proper string input | 10 |
| Accurate formatted splash screen | 20 |
| BONUS: triangles, file loading, timing | 20 |

---

# 🚀 **Good Luck! Continue building the Magrathea prototype!**

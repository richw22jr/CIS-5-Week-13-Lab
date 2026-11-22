# Lab 13 · Names and a roster

**Week 13 · Strings and structs**  
**Theme:** Join a name, then walk a roster of records  
**Type:** Lesson week


## Demo video (required)

Paste a link to a short video of you running this assignment (tool + code + run).
Work without a working video link is incomplete.

The video is half the grade. Show the run, then explain why `printStudent` takes `const Student&` and how `roster[i].gpa` picks one field.

**Your demo:** https://youtu.be/jo5xwyIZYxs

## Scenario

A `std::string` holds text and knows its own `size()`. A `struct` bundles fields that belong together. A helper that only reads a record takes it by `const &`, so nothing is copied.

## Goals

- Join `first` and `last` with a space. Print the full name and its `size()`
- Finish `printStudent(const Student& s)`
- Print every student in the roster, then only the ones with `gpa` 3.0 or above, then how many
- Push + short demo + Canvas

## Starter

Use `main.cpp`. Put your name in the file-top comment. The `Student` struct and a roster of three are already there.

## Environment

VS 2022 · **GitHub Codespaces** · Replit · library machines

## Procedure

1. Join `first + " " + last` into one string named `full`
2. Print `Full name:` and `full`, then `Length:` and `full.size()`
3. Finish `printStudent`: id, name, and gpa on one line
4. Loop over `roster` and call `printStudent` for each one
5. Loop again. Print only `roster[i].gpa >= 3.0`, and count them
6. Commit, push, short demo, Canvas

## Sample output

```
First: Sam
Last: Lee
Full name: Sam Lee
Length: 7
All students:
1 Ada 3.9
2 Ben 2.7
3 Cy 3.2
Honors (gpa 3.0 or above):
1 Ada 3.9
3 Cy 3.2
2 of 3
```

## Definition of done

- The full name and its length print correctly
- `printStudent` takes `const Student&`
- Both roster loops run, and the count is right
- Repo + short demo + Canvas

## Rubric (100)

| Criterion | Pts |
|-----------|----:|
| Code submitted that does the work | 50 |
| Video explanation | 50 |

## Scope fence

`std::string` and `struct` only. No classes, no `getline` needed, no `new` / `delete`.

## Tips

- The space is yours to add: `first + " " + last`
- `roster[i]` picks the student. `.gpa` picks the field
- Forgot the `;` after the struct's closing brace? The compiler error points at the next line

## Help (`/ring`)

After a real try, include: goal · what you tried · exact error · screenshot/repo · OS + tool.


## Getting started

1. Fork this repo on GitHub.
2. Clone your fork.
3. Compile and run:

```bash
g++ -std=c++17 -o program main.cpp && ./program
```

On Windows (Visual Studio), open the `.cpp` file and use **Local Windows Debugger**.
4. Record a short demo that shows your tool, your code, and a real run.
5. Paste the video link in the **Demo video** section above.
6. Submit your fork URL on Canvas.

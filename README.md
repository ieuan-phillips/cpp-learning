# C++ Learning

**A record of my ongoing C++ study, exercises, and programming practice.**

I'm learning C++ through a structured programme built around *Programming: Principles and Practice Using C++ (3rd Edition)* by Bjarne Stroustrup, supplemented by [LearnCpp](https://www.learncpp.com/), additional exercises, and small personal projects as my skills develop.

I use this repository to keep track of my work, practise solving problems independently, and revisit earlier solutions as I improve. My longer-term goal is to build the C++ and computer science foundations needed for game programming.

**Started:** 17 August 2026  
**Current focus (October 2026):** Chapter 3 of *Programming: Principles and Practice Using C++*.

## Repository structure

```text
ppp3/
├── ch01/       # Chapter 1 exercises
├── ch02/       # Chapter 2 exercises
├── ch03/       # Chapter 3 exercises and drills (in progress)
└── support/    # Supporting files used with the book's exercises
```

The repository will grow as I progress through the book and work on other exercises or independent programs.

## What I'm working on

- **C++ fundamentals:** types, variables, expressions, input/output, control flow, and functions.
- **Problem-solving:** breaking problems into smaller steps and writing solutions myself.
- **Debugging:** understanding compiler errors, testing behaviour, and correcting mistakes.
- **Programming practice:** building fluency through repeated exercises rather than only reading about concepts.

These are areas I'm studying, not claims of professional-level proficiency.

## How I study

1. Read a section or chapter and work through its examples.
2. Attempt the drills and exercises independently.
3. Compile, run, debug, and revise my solutions.
4. Commit my progress to Git so I can track changes and revisit older work.

Some files may contain imperfect or early-stage solutions. I'm keeping them as a record of my learning rather than presenting every exercise as production-quality code.

## Development environment and workflow

I primarily work through my C++ studies on a laptop running **Omarchy (Arch Linux-based)**, using a terminal-driven development environment.

- **Editor:** Neovim with LazyVim
- **Terminal:** tmux
- **Compiler:** GCC (`g++`), targeting C++23
- **Version control:** Git through the command line
- **Operating system:** Linux (Omarchy)

I write, compile, run and debug exercises from the terminal, using Git to track my progress and push completed work to GitHub.

Alongside learning C++, I'm deliberately working to improve my Linux proficiency, Vim motions, shell usage and understanding of the compilation process.

I also use **Windows and Visual Studio** when appropriate, particularly for game development projects.

## Building and running exercises

This repository contains individual C++ programs rather than a single application. Most exercises have their own `main()` function and are compiled separately.

For a standalone exercise, a typical compilation command is:

`g++ -std=c++23 -Wall -Wextra -Wpedantic exercise.cpp -o exercise`

Followed by:

`./exercise`

Some exercises require additional headers or support files provided with the textbook and in the *support/* folder of *ppp3/*, so compilation options may vary.

## Learning resources and attribution

- **Primary textbook:** Bjarne Stroustrup, *Programming: Principles and Practice Using C++* (3rd Edition).
- **Supplementary reference:** [LearnCpp](https://www.learncpp.com/).

The exercises are based on these educational resources. The solutions here document my own practice; where I use supplied support code or other third-party material, it should be credited accordingly. This repository is not affiliated with or endorsed by the textbook author or LearnCpp.

## Related project

- [C Bullet Hell](https://github.com/ieuan-phillips/c-bullet-hell) - a tutorial-guided game built in C with raylib, followed by debugging and gameplay improvements.

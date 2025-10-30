/* 
What is Programming?
Programming is the process of creating a set of instructions that tells a computer how to perform a task. It involves planning and coding, where logical sequences are created to perform specific operations.

What is a Programming Language?
A programming language is a formal language comprising a set of instructions that produce various kinds of output. They are used to implement algorithms and facilitate communication between humans and machines.

What is C++ and Why Do We Need It?
C++ is a general-purpose programming language created by Bjarne Stroustrup as an extension of the C programming language. It is known for its flexibility, performance, and efficiency. We need C++ because it supports object-oriented programming, which allows for code reusability and makes complex software development more manageable.

Uses of C++ in the Real World:-
1) Game Development: Due to its high performance.
2) Desktop Applications: Applications like Adobe Photoshop.
3) Operating Systems: Components of Windows OS is written in C++.
4) Web Browsers: Rendering engines of major browsers like Chrome are built using C++.

Compilation Process in Laymen Terms
The compilation process in C++ can be visualized as follows:
flowchart TD
    A[Source Code] --> B(Preprocessor)
    B --> C(Compiler)
    C --> D(Assembler)
    D --> E{Object File}
    E --> F(Linker)
    F --> G(Executable File)

Preprocessor: Handles directives like #include and #define.
Compiler: Translates code into assembly language.
Assembler: Converts assembly code into machine code.
Linker: Combines multiple object files into a single executable, using libraries as needed.
Binary Files, Obj Files, and Compilation in Java
Binary Files: Machine-readable files produced by the assembler.
Object Files: Intermediate files containing machine code but not linked.
Java Compilation: Java doesn't compile to machine code directly. Instead, it compiles to bytecode which is interpreted by the Java Virtual Machine (JVM), making it slower compared to C++'s direct compilation.

Why C++ Output is Fast
C++ provides fine-grained control over system resources and memory. It directly compiles to machine code, bypassing any intermediate interpretation layer, leading to faster execution times compared to languages like Java where an interpreter is used.

C++ is considered a high-level programming language. However, it has features that allow for low-level memory manipulation, which gives it the flexibility to be used for both high-level application development and low-level system programming. This dual capability is one of the reasons why C++ is often described as a middle-level language, bridging the gap between high-level and low-level programming.

High-level features include object-oriented programming, abstraction, and strong type checking, while low-level features include direct memory access through pointers and manual memory management. This combination allows developers to write efficient and performance-oriented code.

High-level and low-level programming languages differ primarily in their level of abstraction from the hardware and their ease of use for developers.

High-Level Programming Languages
Abstraction: High-level languages provide a greater level of abstraction from the machine's hardware. They are designed to be easy for humans to read and write.
Syntax: They have a syntax that is closer to human languages, making them more intuitive and easier to learn.
Portability: Code written in high-level languages is generally portable across different types of computer systems, as it is not tied to the architecture of any specific machine.
Examples: Python, Java, C++, and JavaScript.
Low-Level Programming Languages
Abstraction: Low-level languages provide little or no abstraction from a computer's instruction set architecture. They are closer to machine code, which is directly executed by the computer's CPU.
Syntax: They have a syntax that is more difficult for humans to read and write, often requiring detailed management of hardware resources.
Control: They offer more control over hardware resources, such as memory and processor instructions, which can lead to more efficient and optimized code.
Examples: Assembly language and machine code.
In summary, high-level languages are designed to be user-friendly and abstract away the complexities of the hardware, while low-level languages provide more control and efficiency at the cost of complexity and ease of use.

C++ compiles directly into machine code which is executed by the OS, avoiding the additional step required in Java where the code is first converted to bytecode and then interpreted by the Java Virtual Machine (JVM). This difference often makes C++ faster because there is no additional layer of interpretation at runtime. */

// #include <iostream>

// using namespace std;
// int main(){
//     float a=2.5;
//     float b=3.5;
//     cout<<a%b;
//     return 0;
// }
---
layout: post
title: "C++ 的字符串字面量拼接机制"
subtitle: "C++'s string literal concatenation"
author: "Kafka"
date: 2023-06-22
header-style: text
# multilingual: true
mathjax: true
tags:
  - Notes
  - C++
---

在 C++ 中，这种将相邻的字符串字面量自动连接在一起的机制被称为 "字符串字面量拼接" 或 "字符串字面量连接"。这是一种编译器特性，它允许程序员在多行上书写较长的字符串，通过将相邻的字符串字面量拼接在一起，形成一个完整的字符串。

在 C++11 标准中，这一特性被称为 "拼接字符串字面量"（concatenated string literals）或 "字符串字面量拼接"（string literal concatenation）。通过在字符串字面量之间插入（任意多的）空格或换行，c++会自行为我们实现字面量的拼接。

这种特性的引入主要是为了提高代码的可读性和维护性，使得长字符串的书写更加方便。你可以根据需要在字符串之间添加空格、换行符等，而这些空格会被自动忽略。

示例代码：
```cpp
string splitStringLiterals = "HI!"
			     "This is kafka"
			     " speaking to you~";
std::cout << splitStringLiterals;
```
> TERMINAL: HI!This is kafka speaking to you~
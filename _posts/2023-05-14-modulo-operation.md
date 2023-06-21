---
layout: post
title: "Difference Between Modulo&Remainder Operation"
subtitle: "modulo(remainder) operation"
author: "Kafka"
date: 2023-05-14
header-style: text
# multilingual: true
mathjax: true
tags:
	- Trivial?
---

> reference: [BaiduBaike](https://baike.baidu.com/item/%E5%8F%96%E6%A8%A1%E8%BF%90%E7%AE%97/10739384?fr=aladdin#:~:text=%E5%BA%94%E7%94%A8-,%E5%8F%96%E4%BD%99%E8%BF%90%E7%AE%97%E5%8C%BA%E5%88%AB,-%E7%BC%96%E8%BE%91)

The difference between modulo and remainder operation
------

Begin with the conclusion: 
* The *sign* & specific *result* of the operation depend on the specific type of operation. 
* E.g. the sign of modulo rely on *divisor*, yet the sign of remainder depend on *dividend*.
* The result of modulo depend on integer quotient calculation with `floor()` function, as to the remainder, otherwise depend on the same calculation but using `fix()`.

For integer $\text{a}$ and $\text{b}$, steps of modulo operation or remainder operation are both as follows:

1. Find integer quotient: $\text{c}$ = [$\text{a}$ $\div$ $\text{b}$];

2. Calculate modulo or remainder: r = $\text{a}$ $-$ $\text{c}$ $\times$ $\text{b}$.

Modulo operation differ from remainder operation in the first step: 
* In modulo operation, the value of $\text{c}$ is rounded towards negative infinity(`floor()`) as calculating its value.
* In remainder operation, the value of $\text{c}$ is rounded towards $0$(`fix()`) as calculating its value.

Example 1. Calculate: -7 Mod 4

then: $\text{a}$ = -7; $\text{b}$ = 4; 

First step: evaluate integer quotient $\text{c}$

①modulo operation: $\text{c}$ = [$\text{a}$ $\div$ $\text{b}$] = -7  $\div$  4 = -2(rounded towards negative infinity), 

②remainder operation: $\text{c}$ = [$\text{a}$ $\div$ $\text{b}$] = -7  $\div$  4 = -1(rounded towards $0$); 

Step two: same formula with different value of $\text{c}$

①modulo operation: r = $\text{a}$ $-$ $\text{c}$ $\times$ $\text{b}$ =-7 $-$ (-2) $\times$ 4 = 1, 

②remainder operation: r = $\text{a}$ $-$ $\text{c}$ $\times$ $\text{b}$ = -7 $-$ (-1) $\times$ 4 =-3。

![1](/img/posts-img/modulo_1.png)
***
![2](/img/posts-img/modulo_2.png)
***
![3](/img/posts-img/modulo_3.png)

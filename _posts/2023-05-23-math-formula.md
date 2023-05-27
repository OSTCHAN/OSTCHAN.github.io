---
layout: post
title: "Math Formula"
subtitle: "memo"
author: "Kafka"
date: 2023-05-23
header-style: text
# multilingual: true
mathjax: true
tags:
  - Trivial?
---

$$
\begin{align*}
    &1-1     &\text{/* may be referred to as }(1^{0}+0)-1\text{ */} \\
    \Rightarrow &e^{ln1}-1 \\
    \Rightarrow &ln1 \\
    \Rightarrow &ln(1+\alpha(x)) \Big|_{\alpha(x) \to 0} \\
    \Rightarrow &\alpha(x) \Big|_{\alpha(x) \to 0} \\
\end{align*}
$$

---

$$
\begin{align*}
    &(1+x)^{a}-1 \sim ax \Big|_{x \to 0}\\
    Generalization: &(1+\alpha(x))^{\beta(x)} - 1 \sim \alpha(x)\beta(x) \Big|_{\alpha(x) \to 0,~\alpha(x)\beta(x) \to 0}
\end{align*}
$$

---

$$
\begin{align*}
    1^{\infty} \text{ Problem Common Way}:& \\
    &(1+\alpha(x))^{\beta(x)} = e^{\alpha(x)\beta(x)} = e^{C} \\
    \text{Condition}:& \\
    &1.~\alpha(x) \to 0; \\
    &2.~\beta(x)\to\infty \| \frac{1}{0}; \\
    &3.~\alpha(x)\beta(x)=C; \\
    \text{Breakdown}:& \\
    &(1 + \alpha(x))^{\frac{\alpha(x)\beta(x)}{\alpha(x)}} = e^{C} \\
\end{align*}
$$

---

$$
\begin{align*}
    &\text{If limit} \lim_{x \to 0} \frac{sin(x)}{e^x - a}(cos(x) - b) = 5 \text{, then a = \_ b = \_.} \\
    &\text{The reason of why } a \text{ being 1 is because:} \\
    &\text{The numerator } \{sin(x)(cos(x) - b)\} \text{ is approaching 0 as x going to 0, yet the entire result turn out to be a constant 5.} \\
    &\text{It points out that the denominator } \{e^x - a\} \text{ must be 0 too. I.e., } e^x - a \Big|_{x \to 0} = 0\text{.} \\
    &\text{Therefore, a is 1. (b is -4, btw)} \\
    \\
    &\text{Conclusion derived from the above is quite useful and common:} \\
    &\text{Say if a limit of a fraction is a constant, and the numerator of that fraction happen to be 0 or } \infty \text{.} \\
    &\text{In that case, the denominator corresponds with 0 or } \infty \text{.} \\
\end{align*}
$$

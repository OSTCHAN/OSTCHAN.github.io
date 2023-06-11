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

$1-1$ pattern:
$$
\begin{align*}
    &1-1 \qquad \text{/* may be considered as }(1+0)-1\text{ */} \\
    \Rightarrow &e^{ln1}-1 \\
    \Rightarrow &ln1 \\
    \Rightarrow &ln(1+\alpha(x)) \Big|_{\alpha(x) \to 0} \\
    \Rightarrow &\alpha(x) \Big|_{\alpha(x) \to 0} \\
\end{align*}
$$

---

$(1+x)^{a}-1$ pattern:
$$
\begin{align*}
    &(1+x)^{a}-1 \sim ax \Big|_{x \to 0}\\
    \text{Generalization: } &(1+\alpha(x))^{\beta(x)} - 1 \sim \alpha(x)\beta(x) \Big|_{\alpha(x) \to 0,~\alpha(x)\beta(x) \to 0}
\end{align*}
$$

---

$1^{\infty}$ Problem:
$$
\begin{align*}
    \text{Common Way}:& \\
    &(1+\alpha(x))^{\beta(x)} = e^{\alpha(x)\beta(x)} = e^{C} \\
    \text{Condition}:& \\
    &1.~\alpha(x) \to 0; \\
    &2.~\beta(x)\to\infty \| \frac{1}{0}; \\
    &3.~\alpha(x)\beta(x)=C; \\
    \text{Breakdown}:& \\
    &(1 + \alpha(x))^{\frac{\alpha(x)\beta(x)}{\alpha(x)}} = e^{C} \\
\end{align*}
$$

**碎碎念：**
* $1^{\infty}$ 的limit是 $1$；
* $(\text{Greater Than 1})^{\infty}$ 的limit是 $\infty$；
* $(\text{Fraction})^{\infty}$ 的limit是 $0$；
* $(1 + \frac{1}{\infty})^{\infty}$ 的limit是自然对数 $e$；
* $(1 + \frac{1}{-\infty})^{\infty}$ 的limit是 $\displaystyle \frac{1}{e}$ // 用上面的$\text{Common Way}$即可推出。

**intuition:** 

1加的数，可以看作是一种*利率*，即 $(1+\text{rate})^{\infty}$，利率是positive时，无穷次增长自然会得到无穷；同理利率是negative时，则会亏损。当利率被限制在0-1之间时，数学上讲，无穷次亏损后结果应该是0，因为你总是亏比本金少的钱，类似于无限细分。

$(1 + \frac{1}{\infty})^{\infty}$ 这个特殊之处在于：无穷次增长的同时，它的*利率/增长率*是趋近于0的。换句话说是，它到最后就基本不（负）增长了，会趋向一个定值。也就是自然对数 $e$ 或 $\displaystyle \frac{1}{e}$（如果是负增长的话）。


---

If limit $\displaystyle \lim_{x \to 0} \frac{sin(x)}{e^x - a}(cos(x) - b) = 5$, then $a$ $=$ \_, $b$ $=$ \_.

The reason of why a being $1$ is because:

The numerator $\{sin(x)(cos(x) - b)\}$ is approaching $0$ as $x \to 0$, yet the entire result turn out to be a constant $5$.

It points out that the denominator $\{e^x - a\}$ must be $0$ too. I.e., $e^x - a \Big\|_{x \to 0} = 0$.

Therefore, $a$ is $1$. ($b$ is $-4$, btw)

Conclusion derived from the above is quite useful and common: 
Say if a limit of a fraction is a constant, and the numerator of that fraction happen to be $0$ or $\infty$. 
In that case, the denominator corresponds with $0$ or $\infty$. 

---

Find the limit: $\displaystyle \lim_{n \to \infty} \frac{n^{n+1}}{(n+1)^{n}} sin(\frac{1}{n})$

Solution:
* given equation $\displaystyle = \lim_{n \to \infty} \frac{n^{n}}{(n+1)^{n}}nsin(\frac{1}{n}) = \lim_{n \to \infty} \frac{1}{(1+\frac{1}{n})^{n}} \frac{sin(\frac{1}{n})}{\frac{1}{n}} = \frac{1}{e}$

Note：
* $\displaystyle \lim_{n \to \infty} \frac{n^{n}}{(n+1)^{n}} = 1 \textbf{ is typical mistake, } \lim_{n \to \infty} \frac{n^{n}}{(n+1)^{n}} = \lim_{n \to \infty} \frac{1}{(1+\frac{1}{n})^{n}} = \frac{1}{e}$

**Takeaways:**
1. "+1" matter!!! in both position $\displaystyle (\frac{n^{n+1}}{(n+1)^{n}}) \bigg\|_{n \to \infty}$. We should take it serious! Do not omit +1 in this case even as n approaches infinity.
2. $\displaystyle \infty \cdot 0 \to \frac{1}{0} \cdot 0 \to \frac{1}{\frac{1}{\infty}} \cdot 0$ (which shows how you can convert $\infty \cdot 0$ to $\displaystyle \frac{0}{0}$ pattern using $\infty$ and $0$ to represent(or as the "input") based on an obvious fact: $\displaystyle \frac{1}{\infty} = 0$, and $\displaystyle \frac{1}{0} = \infty$, where $0$ is limit but not the value $0$) 
3. Remember: $\displaystyle \frac{n}{n+1} \bigg\|\_{n \to \infty}$ approaches 1, while $\displaystyle (\frac{n}{n+1})^{n} \bigg\|_{n \to \infty}$ is $1^{\infty}$ pattern whose limit will be $\displaystyle e/\frac{1}{e}$.


---

Let $f(x)$ be twice differentiable (or say second derivative exists), $f(0) = 0, f'(0) = 1, f^{(2)}(0) = 2$. Find the limit $\displaystyle \lim_{x \to 0} \frac{f(x) - x}{x^{2}}$.

**Solution:**

* *Method 1:*
$$
\begin{align*}
    \lim_{x \to 0} \frac{f(x) - x}{x^{2}} &= \lim_{x \to 0} \frac{f'(x) - 1}{2x} \qquad \qquad \text{(L'Hôpital's rule)} \\
        &= \frac{1}{2} \lim_{x \to 0} \frac{f'(x) - f'(0)}{x} \\
        &= \frac{f^{(2)}(0)}{2} \qquad \qquad \text{(derivative's definition)} \\
        &= 1.
\end{align*}
$$
* *Method 2:* Second-order Maclaurin's series with Peano remainder of $f(x)$:
$$
\begin{align*}
    &f(x) = f(0) + f'(0)x + \frac{f^{(2)}(0)}{2!}x^2 + o(x^2), \\
    i.e. \qquad &f(x) = x + x^2 + o(x^2). \\
    then \qquad &\lim_{x \to 0} \frac{f(x) - x}{x^2} = \lim_{x \to 0} \frac{x^2 + o(x^2)}{x^2} = 1. \\
\end{align*}
$$

**Note:** *Typical Mistake:* $\displaystyle \lim_{x \to 0} \frac{f(x) - x}{x^2} = \lim_{x \to 0} \frac{f'(x) - 1}{2x} = \lim_{x \to 0} \frac{f^{(2)}(x)}{2} = \frac{f^{(2)}(0)}{2} = 1.$

*fatal:* $\displaystyle \lim_{x \to 0} \frac{f^{(2)}(x)}{2} \neq \frac{f^{(2)}(0)}{2}$ &nbsp; (twice differentiable (or say second derivative exists) does not mean second derivative is consistent!)

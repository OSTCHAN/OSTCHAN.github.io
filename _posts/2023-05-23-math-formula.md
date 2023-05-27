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

### 带皮亚诺余项的泰勒展开式

在数学中，带皮亚诺余项的泰勒展开式是一种更准确的近似表示方式，它使用泰勒展开的前几项来逼近一个函数，并给出了估计误差的上界。下面是常见函数的带皮亚诺余项的泰勒展开式示例：

#### 正弦函数的带皮亚诺余项的泰勒展开式

正弦函数的带皮亚诺余项的泰勒展开式可以表示为：

$$
\sin(x) = x - \frac{{x^3}}{{3!}} + \frac{{x^5}}{{5!}} - \frac{{x^7}}{{7!}} + \cdots + \frac{{(-1)^n x^{2n+1}}}{{(2n+1)!}} + R_n(x)
$$

其中 $R_n(x)$ 是皮亚诺余项，表示估计误差的上界。

#### 指数函数的带皮亚诺余项的泰勒展开式

指数函数的带皮亚诺余项的泰勒展开式可以表示为：

$$
e^x = 1 + x + \frac{{x^2}}{{2!}} + \frac{{x^3}}{{3!}} + \frac{{x^4}}{{4!}} + \cdots + \frac{{x^n}}{{n!}} + R_n(x)
$$

#### 自然对数函数的带皮亚诺余项的泰勒展开式

自然对数函数的带皮亚诺余项的泰勒展开式可以表示为：

$$
\ln(1 + x) = x - \frac{{x^2}}{{2}} + \frac{{x^3}}{{3}} - \frac{{x^4}}{{4}} + \cdots + \frac{{(-1)^{n-1} x^n}}{{n}} + R_n(x)
$$

#### 正切函数的带皮亚诺余项的泰勒展开式

正切函数的带皮亚诺余项的泰勒展开式可以表示为：

$$
\tan(x) = x + \frac{{x^3}}{{3}} + \frac{{2x^5}}{{15}} + \frac{{17x^7}}{{315}} + \cdots + \frac{{B_{2n} (-4)^n (1 - 4^n)}}{{(2n)!}} x^{2n-1} + R_{2n}(x)
$$

其中 $B_{2n}$ 是伯努利数，$R_{2n}(x)$ 是皮亚诺余项。


---
layout: post
title: "My First Zhihu Article"
subtitle: "Hooray~ 好耶!"
author: "Kafka"
date: 2023-06-02
header-style: text
# multilingual: true
mathjax: true
tags:
  - Trivial?
---

就“若 $\displaystyle \lim_{x \to 0} \frac{sin6x+xf(x)}{x^3}=0$, 则 $\displaystyle \lim_{x \to 0} \frac{6+f(x)}{x^2}$为？” 此题简单解释为什么等价无穷小代换不能在加减中使用的【一个原因】，提供我自己的视角和想法
---

<br>

> btw: [同时也发在知乎了](url)

######前置知识（prerequisites）：
* Taylor formula展开到三阶： 

$$
\begin{align*}
    \text{}\\
    \displaystyle &sinx = x - \frac{x^3}{3!} + o(x^3) \\
    \therefore~~&sin6x = 6x -36x^3 +o(x^3) \\
\end{align*}
$$

* 等价无穷小代换是忽略某项以后的无穷项的Taylor展开

以上就是前置知识。

进入正题：
**错误的做法**（直接用等价无穷小替换 $sin6x$ 为 $6x$）：
$$
\begin{align*}
    \text{given equation = } \lim_{x \to 0} \frac{6x +xf(x)}{x^3} = \lim_{x \to 0} \frac{6 + f(x)}{x^2} = 0 \qquad \text{*Which's Wrong!*} \tag{1}
\end{align*}
$$

然后用Taylor展开看看在代换的过程中我们具体做(错)了什么：
$$
\begin{align*}
    \text{given equation = } \lim_{x \to 0} \frac{(6x - 36x^3 + o(x^3)) + xf(x)}{x^3} \tag{2}
\end{align*}
$$

我们可以看到，展开后的分子还挺长的。你可能已经注意到了：*当我们直接把 $sin6x$ “等价无穷小代换”成了 $6x$ 时，我们实际上是忽略了 $-36x^3 + o(x^3)$ 这部分。*
重点来了，如果我们就是想忽略它怎么办？换个问法，当 $6x - 36x^3 + o(x^3) \Big|_{x \to 0} \rightarrow~6x \Big|_{x \to 0}$ 时，发生了什么？

我们知道，$x \to 0$ 是一个过程，$x \to 0$ 时，$x^3$ 是 $x$ 的高阶无穷小，即 $x^3$ 趋近于 $0$ 的速度远远大于 $x$ 趋 $0$ 的速度。所以，当我们这样做时，实际上是在说：好的，此刻及此后，$x^3$ 已经可以看成是0了，或者说，已经取到极限 $0$ 了，而 $x$ 仍在趋向 $0$ （的过程中）。

回到 $\text{(1)}$，错误点在 $\displaystyle \lim_{x \to 0} \frac{6x + xf(x)}{x^3}$
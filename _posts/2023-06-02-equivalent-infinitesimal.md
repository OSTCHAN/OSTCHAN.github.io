---
layout: post
title: "One Perspective of Why Equivalent Infinitesimal Fails"
subtitle: "And Grumble..."
author: "Kafka"
date: 2023-06-02
header-style: text
# multilingual: true
mathjax: true
tags:
	- Trivial?
---

就“若 $\displaystyle \lim_{x \to 0} \frac{sin6x+xf(x)}{x^3}=0$, 则 $\displaystyle \lim_{x \to 0} \frac{6+f(x)}{x^2}$为？” 此题简单解释为什么等价无穷小代换会出错的【一个视角】
---

<br>

###### 前置知识（prerequisites）：
* Taylor formula展开到3阶： 
$$
\begin{align*}
	\text{}\\
	\displaystyle &sinx = x - \frac{x^3}{3!} + o(x^3) \\
	\\
	\therefore~~&sin6x = 6x -36x^3 +o(x^3) \\
\end{align*}
$$

* 等价无穷小代换是忽略某项以后的无穷项的Taylor展开

以上就是前置知识。

###### 进入正题：
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

我们可以看到，展开后的分子还挺长的。你可能已经注意到了：当我们直接把 $sin6x$ “等价无穷小代换”成了 $6x$ 时，我们实际上是忽略了 $-36x^3 + o(x^3)$ 这部分。
重点来了，如果我们就是想忽略它怎么办？换个问法，当 $6x - 36x^3 + o(x^3) \Big|_{x \to 0} \rightarrow~6x \Big\|\_{x \to 0}$ 时，发生了什么？

我们知道，$x \to 0$ 是一个过程，$x \to 0$ 时，$x^3$ 是 $x$ 的高阶无穷小，即 $x^3$ 趋近于 $0$ 的速度远远大于 $x$ 趋 $0$ 的速度。所以，当我们这样做时，实际上是在说：好的，此刻及此后，$x^3$ 已经可以看成是0了，或者说，已经取到极限 $0$ 了，而 $x$ 仍在趋向 $0$ （的过程中）。

回到 $\text{(1)}$，错误点在 $\displaystyle \lim_{x \to 0} \frac{6x + xf(x)}{x^3}$ 这，仔细看看，分母是不是还有一个 $x^3$，但是我们刚承认了 $x^3$ 是 $0$ 了，即 $\displaystyle \lim_{x \to 0} \frac{6x + xf(x)}{0}$，这才是我们做了这个代换后原式会变成的样子。你已经不能再对分母 $x^3$ 做任何操作了（在 $\text{(1)}$ 中我们分子分母同时约去了个 $x$，但实际上不行，因为 $x^3$ 都没了（为 $0$，已经不存在了），你提不出 $x$）。另一方面，分母为 $0$， 这个分式也已经没有定义了。

或许你还剩一点点疑惑，“你说得对，但是 $\displaystyle \frac{0}{0}$ 型的分子分母不都是 $0$ 吗？为什么好像我以前刷题的时候好像是可以把那些为 $0$ 的公因子给约去的？”

因为你不自觉地偷换了概念，只要你没注意到这一点，你所有的思考都是基于这个错误的前提。$\displaystyle \frac{0}{0}$ 型的分子分母*都不是 $0$*，是*趋近（approaching）于 $0$*，但是*永远不会*等于 $0$。“趋于 $0$”是一个变化的过程（函数），“$0$”是我们手动取的极限。

再拿一个简单的实例来讲讲。（宁要冗长，也拒绝一知半解，纸上谈兵。这也是我欣赏英语教材的地方，中文教材给人的感觉总是作者惜笔墨，戛然而止的故作高深。（原谅我的偏见，我也看到了很多人在中文教程上所做的付出，他们是值得尊敬的。但是我在这里还是想吐槽，为了曾经被半吊子老师否定的自己和所有人。（PS:再再多说一嘴，我觉得学生学不会，老师占最大责任。每个人的知识储备和认知方式是完全不同的，做不到因材施教可以理解，但是自己没有能力因材施教还把【学不会】归咎于学生的智商，（此处本来想骂，但是还算了，毕竟人各有难处，换位思考确实是国内教学压力很大，我不觉得自己上的话就能十年如一日。人毕竟是还是人，理解，但是不接受。所幸生成式AI已经在崩坏人类陈旧的教育体制了）

比如：$\displaystyle \lim_{x \to 0} \frac{sinx}{2x}$


一般做法是用等价无穷小直接把 $sinx$ 替换成 $x$，然后分子分母同时约去公因子 $x$：
$\displaystyle \lim_{x \to 0} \frac{sinx}{2x} = \lim_{x \to 0} \frac{x}{2x} = \lim_{x \to 0} \frac{1}{2} = \frac{1}{2}$

然后我们用Taylor展开到3阶看看（真正的过程）：
$\displaystyle \lim_{x \to 0} \frac{sinx}{2x} = \lim_{x \to 0} \frac{x - \frac{x^3}{3!} + o(x^3)}{2x} = \lim_{x \to 0} \frac{x + 0 + 0}{2x} = \lim_{x \to 0} \frac{1}{2} = \frac{1}{2}$

可以看到，只有 $\displaystyle \frac{x^3}{3!}$ 和 $\displaystyle o(x^3)$ 变成 $0$了，$x$ 仍在趋于 $0$ 的过程中（$x \to 0$），所以 $x$ 确实可以作为公因子被消去，没有问题。

回到一开始prerequisites的第二点：“等价无穷小代换是忽略某项以后的无穷项的Taylor展开”，就是因为我们认为某一时刻以后那些无穷多项已经取到极限 $0$ 了，所以可以忽略它们了。

<br>

###### coda
中学时代因为字太丑，写错题本自己也看的糟心，于是就懒得写了。现在发现真的写下来和只在脑子里想是很不一样的：

我的思考是网状的，表达输出则是将网状的思路转译成结构化的线性字符串。我并不是一开始就知道下一句话有哪些词、是什么样的，脑海中只有缠绕交错的思路，写下后再作修改，就像是自己与自己聊天、讲解、辩论。

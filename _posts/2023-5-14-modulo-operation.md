---
layout: post
title: "取模/求余运算的区别（未检查|未完成）"
subtitle: "modulo(remainder) operation"
author: "Kafka"
header-style: text
tags:
  - Trivial?
---

> 核心文字内容出处：[百度百科](https://baike.baidu.com/item/%E5%8F%96%E6%A8%A1%E8%BF%90%E7%AE%97/10739384?fr=aladdin#:~:text=%E5%BA%94%E7%94%A8-,%E5%8F%96%E4%BD%99%E8%BF%90%E7%AE%97%E5%8C%BA%E5%88%AB,-%E7%BC%96%E8%BE%91)

取模/求余运算的区别
------

对于整型数a，b来说，取模运算或者求余运算的方法都是：

1.求整数商： c = [a/b];

2.计算模或者余数： r = a - c*b.

求模运算和求余运算在第一步不同: 取余运算在取c的值时，向0 方向舍入(fix()函数)；而取模运算在计算c的值时，向负无穷方向舍入(floor()函数)。

例1.计算：-7 Mod 4

那么：a = -7；b = 4；

第一步：求整数商c：

①进行求模运算时：c = [a/b] = -7 / 4 = -2（向负无穷方向舍入），

②进行求余运算时：c = [a/b] = -7 / 4 = -1（向0方向舍入）；

第二步：计算模和余数的公式相同，但因c的值不同，

①求模时：r = a - c*b =-7 - (-2)*4 = 1，

②求余时：r = a - c*b = -7 - (-1)*4 =-3。

例2.计算：7 Mod 4

那么：a = 7；b = 4

第一步：求整数商c：

①进行求模运算c = [a/b] = 7 / 4 = 1

②进行求余运算c = [a/b] = 7 / 4 = 1

第二步：计算模和余数的公式相同

①求模时：r = a - c*b =7 - (1)*4 = 3，

②求余时：r = a - c*b = 7 - (1)*4 =3。

归纳：当a和b正负号一致时，求模运算和求余运算所得的c的值一致，因此结果一致。

当正负号不一致时，结果不一样。

另外各个环境下%运算符的含义不同，比如c/c++，java 为取余，而python则为取模。

补充：

7 mod 4 = 3（商 = 1 或 2，1<2，取商=1）

-7 mod 4 = 1（商 = -1 或 -2，-2<-1，取商=-2）

7 mod -4 = -1（商 = -1或-2，-2<-1，取商=-2）

-7 mod -4 = -3（商 = 1或2，1<2，取商=1）

这里模是4，取模其实全称应该是取模数的余数，或取模余。

增加补充内容（以上五行）后，被修改商值，但是括号内容不变，出现奇怪矛盾。

在python下 % 运算符代表取模，如要修改，请先用python做

-7 % 4

运算，或其它语言做取模运算验证，理解后再动手。
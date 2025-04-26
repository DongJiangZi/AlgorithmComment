# P3056 [USACO12NOV] Clumsy Cows S

## 题目描述

Bessie the cow is trying to type a balanced string of parentheses into her new laptop, but she is sufficiently clumsy (due to her large hooves) that she keeps mis-typing characters.  Please help her by computing the minimum number of characters in the string that one must reverse (e.g., changing a left parenthesis to a right parenthesis, or vice versa) so that the string would become balanced.

奶牛贝茜正试图在她的新笔记本电脑上输入一个括号匹配的字符串，但由于她蹄子太大笨手笨脚的，总是输错字符。请帮她计算一下，最少需要将字符串中的多少个字符反转（例如，将左括号变为右括号，反之亦然），才能使字符串变得匹配。

There are several ways to define what it means for a string of parentheses to be "balanced".  Perhaps the simplest definition is that there must be the same total number of ('s and )'s, and for any prefix of the string, there must be at least as many ('s as )'s.  For example, the following strings are all balanced:

对于括号字符串来说，有几种方法可以定义其“平衡”的含义。也许最简单的定义是：左括号和右括号的总数必须相同，并且对于字符串的任何前缀，左括号的数量必须至少与右括号的数量相同。例如，以下字符串都是平衡的：

()
(())
()(()())

while these are not:

)(
())(
((())))

给出一个偶数长度的括号序列，问最少修改多少个括号可以使其平衡。

## 输入格式

\* Line 1: A string of parentheses of even length at most 100,000 characters.

## 输出格式

\* Line 1: A single integer giving the minimum number of parentheses that must be toggled to convert the string into a balanced string.

## 输入输出样例 #1

### 输入 #1

```
())(
```

### 输出 #1

```
2
```

## 说明/提示

The last parenthesis must be toggled, and so must one of the two middle right parentheses.

# 题目要求
有n个带数字的格子排成一行，一个人从左边第一个格子开始根据格子上的数不断做后空翻。
假设格子上的数是m，m为正时向右翻m格，m为负时向左翻m格。

输入一共两行，第一行为一个整数n，代表n个格子；第二个为n个整数，代表每个格子上标的数。
如果后空翻时翻出了场地，输出翻的次数；如果翻不出去，输出“FALSE”
# 示例输入1
```
5
1 2 3 4 5
```
# 示例输出1
3
# 示例输入2
```
5
1 3 1 3 -2
```
# 示例输出2
5
# 示例输入3
```
5
1 1 -2 3 4
```
# 示例输出3
FALSE

学习笔记
7范型递归/树的递归
1. 树的面试题解法，一般都是递归来做。因为树的节点是递归定义的，而且有重复性（自相似性）
2. 递归的本质就是循环，通过函数体来进行循环。
3. 递归特点：1. 向下进入下一层，逐步向上返回上一层，不允许跳跃。对称性; 2.通过全局变量，来同步每一层的状态或数据变化；3.每一层的代码和局部变量都是拷贝的。但是全局变量可以在各个层传递。
4. 递归代码模版（熟记）
def recursion(level, param1, param2):
# 1递归终结条件
if level > MAX_LEVEL:
process result
return
             #2处理当前逻辑层
process(level, data....)
#3.下探到下一层
self.recursion(level + 1, param1, param2)
 	      #4清理当前层的数据，比如一些全局数据等，非必须
              #4.reverse the current level status if needed
5. 思维要点：
1. 不要人肉递归：看函数本身就开始写
2. 找最近重复子问题：将其拆解为可重复解决的问题（重复子问题）
3. 数学归纳法：最开始最简单的条件是成立的（n=1,n=2成立）；且当n成立时，可以推导出n+1的时候也是成立的。即递归是成立的。 
注意：归纳结果，要考虑结果有没有重复的和有没有漏算的
6. 题目




8分治回溯
【分治】
1. 分治和回溯是递归的一个分类
2. 最近子重复问题-->递归解决；最优子重复问题-->动态规划解决
3. 复杂问题，细分为子问题，引出分治的概念。找重复性，分解问题，组合子问题的结果
4. 代码模版：
def divide_conquer(problem, param1, param2):
#1.recursion terminator
if problem is None:
print_result
return
#2.prepare data
data = prepare_dada(problem)
subproblems = split_problem(problem, data)
#3. conquer subproblems
subresult1 = self.divide_conquer(subproblem[0], p1, ...)
subresult2 = self.divide_conquer(subproblem[1], p1, ...)
subresult3 = self.divide_conquer(subproblem[2], p1, ...)
...
#4. process and generate the final result
# 相比泛型递归，多了整合结果这一步
result = process_result(subresult1, subresult2, subresult3, ...)

#5, reverse the current level status

5. 如何拆分子问题，是解决分治的关键问题；怎么merge结果

【回溯】
1.  也是递归的一种。不断下探试错，不满足结果则回退到上一层或上几层，直到找到答案或没有答案退出。

【习题】
1. 习题

硬币问题，爬楼梯问题，
2. 


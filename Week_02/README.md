学习笔记
5.哈希映射集合
1. 映射和集合的底层数据结构，是哈希。工程上经常使用哈希抽象出来的map和set。
2. c++ java python的hashtable api介绍，google：需要了解？ 
3. 做题四件套：1 clarification； 2. possible solutions（best time & space）3. code 4 test cases
4. c++的sort函数？
5. 2sum，3sum，4sum的题目：多次，多学别人的代码



https://shimo.im/docs/R6g9WJV89QkHrDhr/read


6.树二叉树二叉树搜素树
1. 树和图，是一维链表的升维，是二维的数据结构。树和图最大的区别是，有没有环。
2. 二叉树是无序的，实际中二叉树搜索树较常用
3. 前，中，后序遍历
4. 二叉搜索树：有序，所有左节点都小于右节点！
5.  
6. 删除二叉搜索树的子节点，一般取右子树中最小的节点。
7. 题目

8. 树的迭代版本遍历：一般是自己维护一个栈来实现
9. 尾递归？



6.堆二叉树和图
1. 堆：可以迅速找到一堆数中的最大值或最小值的数据结构。常见的堆有二叉堆和斐波那契堆。
2. 数组copy的api
3. 堆的实现方式很多，二叉堆比较容易实现，但是性能不是最好的。查找O（1），但是插入和删除是O（N）。工程上不是最优的。 -- ？ c++的堆是怎么实现的？priority_quque?
4. 二叉堆性质：是完全二叉树，任意节点堆值大于等于其子节点的值。和二叉树搜索树完全不一样。
5. 因为是完全二叉树，所有可以用数组实现。

6. 堆的insert插入操作：1. 新元素一律插入到堆的尾部；2.依次向上调整整个堆的结构Heapifyup（和父节点的值比较，如果比父节点值大， 则swap即可  --> 插入的时间复杂度是树的高度。lgn）
7. 堆的删除操作：1. 将堆尾元素交换到根节点（变相删除堆顶元素）；2. 依次向下调整整个堆堆结构（看左右儿子谁大，和大的交换。删除也是lgn的时间复杂度。heapifydown）
8. 例题讲解

9. top-k的问题非常重要，一定要学会。
10. 图的属性和分类，考察得少
图的表示方式有两种：邻接矩阵（行列值表示点之间的权重），邻接表（多级链表）
无向无权图，有向无权图等
11. 图的相关算法
BFS，DFS ：图可能存在环，所以算法中visited是必须的，检测是否重复访问

12. DFS代码模版（递归）
visited set();   # 与树的最大区别
def dfs(node, visited):
      if node in visited:
            return;    # already visited
      visited.add(node);
       # process current node here
        process(node)
      for next_node in node.children():
             if not next_node in visited:
                       dfs(next_node, visited)
   
13. BFS代码模板（手动维护队列）
def bfs(graph, start, end):
       queue=[];
       queue.append([start])
      visited = set();
      while(queue):
             node = queue.pop()
             visited.add(node);
             process(node)
             nodes = gerenate_related_not_visited_node();
             queue.push(nodes)             
14. 



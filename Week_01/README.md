学习笔记
3.数组链表跳表
数组： 查找更新复杂度O(1)， 删除插入O(n)
链表： 查找复杂度O(n), 删除插入O(1)
跳表：skiplist，基于链表，用于有序场景下。对标平衡二叉树和二分查找。原理简单，容易实现，方便扩展，效率更高。多级索引，空间换时间。维护成本较高。时间O(logn),空间O(n)
误区： 做题只做一遍
思路：升维思想 + 空间换时间
一维数据结构要加速，一般都是要升维，升为二维。这样就会多一层信息。

附录：
java arraylist源码分析 http://developer.classpath.org/doc/java/util/ArrayList-source.html
Linked list的标准实现： https://www.geeksforgeeks.org/implementing-a-linked-list-in-java-using-class/
redis使用跳表： https://www.zhihu.com/question/20202931

4.栈和队列
栈和队列：添加删除 O(1), 查询O(N)
双端队列Deque（double  end queue）  =  栈 + 队列
优先队列：插入O（1）， 查询O（lgn），用堆等复杂结构实现堆

解法：
1. 如果问题有最近相关性，就可以用栈来解决：比如括号匹配。需要结合现实！考虑解决这个问题
2. 现实中已有的东西，进行抽象，用计算机语言来表达
3. 括号问题，都想到栈
4. 滑动窗口，都使用双端队列


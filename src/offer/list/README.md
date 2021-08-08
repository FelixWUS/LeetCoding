# List

## offer06 从尾到头打印链表
- 思路：栈实现倒序
- 坑：最后返回的是vector，如果用for循环赋值,注意stack.size()是会变化的。应该先用int把size存下来

## offer24 反转链表
- 思路：最显然的方法是栈，但最简洁的还是用迭代。
- 实现：初始化 `cur = head` , `pre = nullptr` 在循环内定义临时 `next = cur->next` , 然后依次移动`pre`, `cur`，直到cur为空
- 坑：
  - 迭代：注意返回值，是pre
  - 如果用栈，注意每次取stack.top()后，要把该结点的next置为nullptr，否则可能会栈溢出（无限循环的指针）

## offer35 复杂链表的复制
- 思路：用哈希表存储原始链表的地址和new链表的地址
- 实现：先循环一次，建立旧链表与新链表的地址映射；再循环一次，把next和random都连接上
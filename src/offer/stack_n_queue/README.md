# Stack and queue

## Basic:
### std::stack methods
- push()
- pop()
- top()
- empty()
- size()

## offer09 用两个栈实现队列
- 思路：队列的原则是先进先出，而栈的原则是先进后出，因此如果有两个栈的话，可以先把全部数据按先进后出压入其中一个，在需要弹出的时候再从栈顶到栈底往另一个栈里压入，这样用两个栈就可以实现一个队列。
- 实现：因为是弹出的次序颠倒了，主要考虑deleteHead()的实现。当stack_out非空时，栈顶元素就是最先压入的元素，直接取top()返回。而当stack_out为空，需要把stack_in中所有的元素按次序压入stack_out中。
- 坑：考虑栈为空时deleteHead()的异常判断。

## offer30 包含min函数的栈
- 思路：构造一个非严格降序的辅助栈，保证其栈顶元素是min。
- 实现：两个栈，一个存数据，保证top()、pop()的正常执行；一个降序栈，保证栈顶是当前所有元素的最小值。每次push时，要将当前元素与stack_min.top()作对比，只有当其比stack_min.top()小才压入，否则说明还存在比它更小的数。
- 坑：本题不用考虑异常操作。注意每次pop()前，要判断stack_data().top()的值和stack_min.top()是否相等，从而达到及时更新stack_min

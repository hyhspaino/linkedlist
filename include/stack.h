/* 
 * File:   stack.h
 * Author: HYH
 *
 * Created on 2016年7月5日, 上午12:31
 */

#ifndef STACK_H
#define STACK_H

#ifdef __cplusplus
extern "C" {
#endif
    typedef struct Stack stack;

    stack* create_stack(); // create a new stack and initialize this stack! WARNING:You crate a new demon. DEMON :Your soul will be tortured (ง •̀_•́)ง
    int is_empty(stack * s);
    void push(stack * s, int data); // add the new data on head of stack (DEMON subordinates 1)
    int pop(stack* s); //get the first data and delete it from stack(DEMON subordinates 2)
    int peek(stack * s); //get the first data (DEMON subordinates 3)
    void delete_stack(stack * s);
    /*  "You are making d!e!s!t!r!c!t!i!o!n"  punchline from "pony island" or just I create,but who cares? GOOD BYE STACK! <(￣︶￣)> 
     * DEMON: what about me?
     * author: I am going to sleep.Leave me alone! free(DEMON) (～﹃～)~zZ
     * DEMON:NO!!!!!!! ヽ(ｏ`皿′ｏ)ﾉ
     */

#ifdef __cplusplus
}
#endif

#endif /* STACK_H */




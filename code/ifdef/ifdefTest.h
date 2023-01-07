//
// Created by pby21 on 2023/1/7.
//

/**
 *
 * 条件编译的case.
 */

// ifndef表示的意思是：如果C_DEMO_IFDEFTEST_H没有定义，那么就执行语句1
#ifndef C_DEMO_IFDEFTEST_H
//------语句1---------
#define C_DEMO_IFDEFTEST_H
//-------------------------
#endif //C_DEMO_IFDEFTEST_H


// ifdef表示的意思是：如果是TEST_IFDEF定义了，就执行语句1
#define TEST_IFDEF 1
#ifdef TEST_IFDEF
// --------语句1---------
#endif


#define TEST_IF 1
#define TEST_ELIF 1
// if表示的意思是：如果TEST_IF为true(即非0)，就执行语句1
#if TEST_IF
//--语句1--
#elif TEST_ELIF // elif表示的意思是：如果TEST_ELIF为true(即非0)，就执行语句2
//--语句2--
#endif


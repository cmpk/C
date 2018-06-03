//// ヘッダファイルの書き方について
//// Ref : http://c-lang.sevendays-study.com/day7.html

#ifndef _LIBRARY_H_
#define _LIBRARY_H_

typedef int (*FUNCP)(int);
void print_calculation(int a, FUNCP func);

#endif // _LIBRARY_H_
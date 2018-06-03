# 関数ポインタ

ポインタには変数や関数のアドレスが格納されていますが、特に関数のアドレスが格納されたポインタを関数ポインタと言います。  

関数ポインタのメリットは、関数そのものを関数の引数として使用できることです。  
（引数として渡されるポインタが示す関数を Call Back 関数と呼びます。）

これにより、処理の一部を共通化して、処理の一部を個別に実装した関数に任せるということができます。
例：sample0705.c http://www.itsenka.com/contents/development/c/pointer.html

では、関数ポインタを使用したプログラムを組んでみましょう。  
以下の処理を実行する関数が既にあるものとします。
# 引数で受け取った数値を標準出力に出力する
# 任意の関数に計算を任せる
# 任意の関数から受け取った計算結果を標準出力に出力する


```c:library.h
#ifndef _LIBRARY_H_
#define _LIBRARY_H_

typedef int (*FUNCP)(int);
void print_calculation(int a, FUNCP func);

#endif // _LIBRARY_H_
```

```c:library.c
#include <stdio.h>
#include "library.h"

void print_calculation(int a, FUNCP func) {
    printf("Input : %d\n", a);
    int b = func(a);
    printf("Output : %d\n", b);
}
```

この関数を呼び出して任意の計算をするようなプログラムを、main関数とともに作成してください。

参考URL : http://shiroibanana.blogspot.com/2012/09/callback.html

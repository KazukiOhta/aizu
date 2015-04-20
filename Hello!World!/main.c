//
//  main.c
//  Hello!World!
//
//  Created by 太田　一毅 on 2015/04/15.
//  Copyright (c) 2015年 太田一毅. All rights reserved.
//

#include <stdio.h>

int main() {
    int i;
    int j;
    for (i = 1; i <= 9; i ++) {
        for (j = 1; j <= 9; j ++) {
            printf("%dx%d=%d\n",i,j,i*j);
        }
    }
    return 0;
}

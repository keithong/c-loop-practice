//
//  main.c
//  LoopingStatements
//
//  Created by Keith Samson on 6/4/14.
//  Copyright (c) 2014 Keith Samson. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
    //let's start counting at zero
    int i = 0;
    
    //let's stop counting at 10 (use '<=' instead of '<')
    while (i <= 10) {
        
        printf("The value of i now is %d\n", i);
        i++;

    }
    return 0;
}


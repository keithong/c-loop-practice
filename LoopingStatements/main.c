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
    printf("This is using the while loop:\n");       //introduce while loop
    int i = 0;                                      //let's start counting at zero
    while (i <= 4) {                                //let's stop counting at 4 (use '<=' instead of '<')
        printf("The value of i now is %d\n", i);    //print the value of i per iterate
        i++;                                        //increment i to avoid infinite loop
    }
    
    printf("This is using the for loop:\n");        //introduce for loop
    for (int j = 0; j<=4; j++) {                    //initialize the iterator 'j', add the range '<=4', increment after
        printf("The value of j now is %d\n", j);    //executing the statement
    }
    
    printf("This is using do-while loop:\n");       //introduce do-while loop
    int k = 0;                                      //let's start at zero again
    do {
        printf("The value of k now is %d\n", k);    //print the value of k per iterate
        k++;                                        //increment k to avoid infinite loop
    } while (k <= 4);                               //let's stop counting at 4
    
    return 0;
}


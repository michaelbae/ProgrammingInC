//
//  Created by Michael Bae on 2015-07-06.
//  Copyright (c) 2015 Michael Bae. All rights reserved.
//

#include <stdio.h>

int factorial(int n){
    int r, i;
    r = 1;
    for (i = 2; i<=n; i++) {
        r = r*(i);
    }
    return r;
}

int factorial_recursive(int n){
    //base case
    if (n == 1){
        return n;
    }
    return n * factorial_recursive(n-1);
}

int main(int argc, const char * argv[]) {
    
    int r = factorial_recursive(4);
    printf("%d\n", r);
    return 0;
}

/*
 */




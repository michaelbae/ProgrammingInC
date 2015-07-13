//
//  pointer
//  test
//
//  Created by Michael Bae on 2015-07-06.
//  Copyright (c) 2015 Michael Bae. All rights reserved.
//

#include <stdio.h>

void wrong_swap(int a, int b){
    int temp;
    
    temp = a;
    a = b;
    b = temp;
}

void correct_swap(int *a, int *b){
    int temp;
    
    temp = *a;
    *a = *b;
    *b = temp;
}

int main(int argc, const char * argv[]) {
    int x = 1, y = 2;
    correct_swap(&x, &y);
    printf("%d %d\n", x, y);
    return 0;
}






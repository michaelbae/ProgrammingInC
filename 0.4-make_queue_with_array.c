//
//  Created by Michael Bae on 2015-07-06.
//  Copyright (c) 2015 Michael Bae. All rights reserved.
//

#include <stdio.h>

#define QUEUE_CAPACITY 8 

int queue[8];
int head = 0;
int tail = -1;
int queue_size = 0;

void enqueue(int n){
    if (queue_size == QUEUE_CAPACITY){
        printf("queue full!\n");
        return;
    } else {
        tail++;
        queue_size++;
        queue[tail] = n;
    }
}

int dequeue(){
    int r;
    
    if (queue_size == 0) {
        printf("queue empty!\n");
    } else {
        r = queue[head];
        head++;
        queue_size--;
    }
    return r;
}

int main(int argc, const char * argv[]) {
    int a;
    
    while (a >= 0){
        scanf("%d", &a);
        printf("input number: %d\n", a);
        if (a == 0){
            int r = dequeue();
            printf("[%d]\n", r);
        }
        else enqueue(a);
    }
    
    printf("exit program");
    return 0;
}

/*
 */




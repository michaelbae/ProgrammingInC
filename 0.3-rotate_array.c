//
//  Created by Michael Bae on 2015-07-06.
//  Copyright (c) 2015 Michael Bae. All rights reserved.
//

#include <stdio.h>

void right_rotate(int arr[], int i, int j){

    int last = arr[j];
 
    while (j>i) {
        arr[j] = arr[j-1];
        j--;
    }
    
    arr[j] = last;
}

int main(int argc, const char * argv[]) {
    int arr[] = {1,2,3,4,5,6,7,8};
    right_rotate(arr, 2, 6);
    printf("%d, %d, %d, %d, %d, %d, %d, %d\n", arr[0], arr[1], arr[2],arr[3],arr[4],arr[5],arr[6],arr[7]);
    return 0;
}

/*
 */




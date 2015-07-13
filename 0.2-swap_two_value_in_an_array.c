//
//  Created by Michael Bae on 2015-07-06.
//  Copyright (c) 2015 Michael Bae. All rights reserved.
//

#include <stdio.h>

void swap_arr(int arr[], int i, int j){
    int temp;
    
    temp=arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

int main(int argc, const char * argv[]) {
    int arr[] = {1,2,3};
    swap_arr(arr, 0, 1);
    printf("%d, %d\n", arr[0], arr[1]);
    return 0;
}

/*
 In C, array's address is passed on instaed of array's value.
 */




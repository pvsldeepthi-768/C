#include <stdio.h>
#define MAX 20

int top = -1;
int s[MAX];

int isFull() {
    return top == MAX - 1;
}

int isEmpty() {
    return top == -1;
}

void push(int x) {
    if (!isFull()) {
        s[++top] = x;
    }
}

int pop() {
    if (!isEmpty()) {
        return s[top--];
    }
    return -1;
}

int main() {
    int arr[] = {4, 5, 2, 25};
    int len = sizeof(arr) / sizeof(arr[0]);
    int outarr[len];

    for (int i = 0; i < len; i++) {
        outarr[i] = -1;
    }

    for (int i = 0; i < len; i++) {
        while (!isEmpty() && arr[i] > arr[s[top]]) {
            int idx = pop();
            outarr[idx] = arr[i];
        }
        push(i); // store index
    }

    printf("Input array: ");
    for (int i = 0; i < len; i++) {
        printf("%d\t", arr[i]);
    }

    printf("\nOutput array: ");
    for (int i = 0; i < len; i++) {
        printf("%d\t", outarr[i]);
    }

    return 0;
}
/*
output:
Input array:4	5	2	25	
Output array:5	25	25	-1	*/

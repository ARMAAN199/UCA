/* Custom implementaion of queues using arrays
 *
 *Author - Armaan Jain 1910990432
 *Assignment: Day_2_Coding_Assignment
 */

#include<stdio.h>
#include<limits.h>



int size = 7;
/* Size could be any. But in the figure shown in the assignment it is 7 */
int queue[7];
int back = -1;
int isLastEnque = 0;


void enque(int value) {

    if(isFull()) {

        printf("Queue is Full\n");
        return;
    }
    if(front == -1) {
        front = 0;
    }

    isLastEnque = 1;

    back = (back + 1) % size;

    queue[back] = value;
}

int deque() {

    if(isEmpty()) {
  
        printf("Queue is Empty\n");
        return INT_MAX;
    } 

    isLastEnque = 0;

    int value = queue[front];

    front = (front + 1) % size;

    return value;
}

int peek() {

    if(isEmpty()) {
     
        printf("Queue is Empty\n");
	return INT_MIN;
    }

    return queue[front];
}

int isFull() {

    // if front becomes 1 greater than back and the last operation was enque than the queue is full
    if(isLastEnque && (back + 1) % size == front) {
        return 1;
    }

    return 0;
}

int isEmpty() {

    if(front == -1) {
        return 1;
    }
    // if front becomes 1 greater than back and the last operation was deque than the queue is empty
    else if( (!isLastEnque) && (back + 1) % size == front ) {
        return 1;
    }

    return 0;
}

int main() {
    return 0;
}
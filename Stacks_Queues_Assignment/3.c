// COPIED FROM MY LEETCODE SUBMISSION


typedef struct {
    int arr1[200];
    int tail1, tail2, head1, head2;
    int arr2[200];
    int arr;
} MyStack;

/** Initialize your data structure here. */

void enqueue(int arr[], int x, int tail) {
    arr[tail] = x;
}
int dequeue(int arr[], int head){
    return arr[head];
}

MyStack* myStackCreate() {
    MyStack* obj = malloc(sizeof(MyStack));
    obj->tail1 = 0;
    obj->tail2 = 0;
    obj->head1 = 0;
    obj->head2 = 0;
    obj->arr = 1;
    return obj;
}

/** Push element x onto stack. */
void myStackPush(MyStack* obj, int x) {
  if(obj->arr == 1)
  {
      enqueue(obj->arr1, x, obj->tail1);
      (obj->tail1)++;
      while(obj->head2 < obj->tail2)
      {
          enqueue(obj->arr1, dequeue(obj->arr2, obj->head2), obj->tail1);
          (obj->tail1)++;
          (obj->head2)++;
      }
      obj->tail2 = 0;
      obj->head2 = 0;
      obj->arr = 2;
  }
  else
  {
      enqueue(obj->arr2, x, obj->tail2);
      (obj->tail2)++;
      while(obj->head1 < obj->tail1)
      {
          enqueue(obj->arr2, dequeue(obj->arr1, obj->head1), obj->tail2);
          (obj->tail2)++;
          (obj->head1)++;
      }
      obj->tail1 = 0;
      obj->head1 = 0;  
      obj->arr = 1;
  }
}


/** Removes the element on top of the stack and returns that element. */
int myStackPop(MyStack* obj) {
  if(obj->arr == 1)
  {
      int val = dequeue(obj->arr2, obj->head2);
      (obj->head2)++;
      return val;
  }
  else
  {
      int val = dequeue(obj->arr1, obj->head1);
      (obj->head1)++;
      return val;  
  }
}

/** Get the top element. */
int myStackTop(MyStack* obj) {
  if(obj->arr == 1)
  {
      int val = dequeue(obj->arr2, obj->head2);
      return val;
  }
  else
  {
      int val = dequeue(obj->arr1, obj->head1);
      return val;  
  }
}

/** Returns whether the stack is empty. */
bool myStackEmpty(MyStack* obj) {
  if(obj->arr == 1)
  {
      if(obj->head2 >= obj->tail2)
      {
          return 1;
      }
      return 0;
  }
  else
  {
      if(obj->head1 >= obj->tail1)
      {
          return 1;
      }
      return 0; 
  }
}

void myStackFree(MyStack* obj) {
    free(obj);
}

/**
 * Your MyStack struct will be instantiated and called as such:
 * MyStack* obj = myStackCreate();
 * myStackPush(obj, x);
 
 * int param_2 = myStackPop(obj);
 
 * int param_3 = myStackTop(obj);
 
 * bool param_4 = myStackEmpty(obj);
 
 * myStackFree(obj);
*/
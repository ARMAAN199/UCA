// COPIED FROM MY LEETCODE SUBMISSION

#include <limits.h>

typedef struct {
    long long int arr[31000];
    int top;
    long long int min;
} MinStack;

/** initialize your data structure here. */

MinStack* minStackCreate() {
    MinStack* obj = malloc(sizeof(MinStack));
    obj->top = -1;
    obj->min = INT_MAX;
    return obj;   
}

void minStackPush(MinStack* obj, int val) {
    (obj->top)++;
    if(obj->top == 0)
    {
        obj->min = val;
        obj->arr[obj->top] = val;
    }
    else if(val < obj->min)
    {
        obj->arr[obj->top] = val-(obj->min);
        obj->min = val;
    }
    else
    {
      obj->arr[obj->top] = val-(obj->min);  
    }
}

void minStackPop(MinStack* obj) {

  if((obj->arr[obj->top] + obj->min) < obj->min)
  {
      obj->min = obj->min - obj->arr[obj->top];
  }
  (obj->top)--;
}

int minStackTop(MinStack* obj) {
  if((obj->arr[obj->top] + obj->min) < obj->min)
  {
      return obj->min;
  }
  else if(obj->top == 0){
      return obj->arr[obj->top];
  }
  return obj->arr[obj->top] + obj->min;
}

int minStackGetMin(MinStack* obj) {
  return obj->min;
}

void minStackFree(MinStack* obj) {
    free(obj);
}

/**
 * Your MinStack struct will be instantiated and called as such:
 * MinStack* obj = minStackCreate();
 * minStackPush(obj, val);
 
 * minStackPop(obj);
 
 * int param_3 = minStackTop(obj);
 
 * int param_4 = minStackGetMin(obj);
 
 * minStackFree(obj);
*/
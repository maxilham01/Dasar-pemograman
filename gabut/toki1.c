#include <stdio.h>
int arr[10001];
int front = -1, back =-1;

void push_front (int val){
    if (front == -1)
    {
        front++;
        back++;
        arr[front] = val;
    }
    else if (front == 0)
    {
        for (int i = back; i >= front; i--)
            arr[i + 1] = arr[i];
        arr[front] = val;
        
        
    }
    else{
        front--;
        arr[front]
    }
    
}

int main (){


}
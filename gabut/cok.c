#include <stdio.h>
#include <string.h>

int nom[10000];
int top -1;


void push_front(int nomor)
{
    move_back();
    top++;
    nom[0]= nomor;
}

void push_back(int nomor){
    top++;
    nom[top] = nomor;
}

void pop_back(){
    nom[top] = nom[top+1];
    top--;
}
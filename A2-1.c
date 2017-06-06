#include<stdio.h>
void push(),show();
int pop(),empty();
int t=-1,b=0;
int stack[100];
int main(void){
   push(1);
   push(2);
   push(pop());
   push(3);
   pop();
   show();
}

void push(int x){
   stack[++t]=x;
}

int pop(){
   return stack[t--];
}

int empty(){
   return (t<b);
}

void show(){
   int i;
   for(i=0;i<=t;i++){
   printf("%d\n",stack[i]);
   }
}


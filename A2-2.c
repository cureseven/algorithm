#include<stdio.h>
void push(),show();int pop(),empty(),fibo();
int stack[100];
int t = -1, b = 0;
int main(void)
{
   printf("f=%d\n",fibo(4));
}

void push(int x){
   stack[++t] = x;
}

int pop(){
    return stack[t--];
}

int empty()
{
    return (t<b);
}

void show()
{
   int i;
   for(i=0;i<=t;i++){
      printf("%d\n",stack[i]);
   }
   printf("\n");  
}

int fibo(int n){

   int f = 0;
   push(n);
   while(!empty()){
        n = pop();
        if(n == 0) f += 0;
        if(n == 1) f += 1;
        if(n >= 2) {push(n - 1);push(n - 2);};
        show();
    };
    return  f;
} 
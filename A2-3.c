#include<stdio.h>
#include<string.h>
void push(),show();int pop(),empty(),fibo(int j);
int stack[100];
int t = -1, b = 0;
char x[]={'[','[',']','[','[',']',']',']','[',']','\0'};
int main(void)
{
   int i=0,j=1,p;
   while(x[i]!='\0'){
        printf("%c",x[i]);
        if(x[i]=='['){
          push(j);
          printf("%d",j);
          j++;
        }
        if(x[i]==']'){
          p=pop();
          printf("%d",p);
        }
        i++;
}
   printf("\n");
   
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
   for(i=t;i<=0;i++){
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

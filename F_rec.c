#include<stdio.h>
int cnt=0;
int fibo(int n){
   if(n==0) return 0;
   if(n==1) return 1;
   if(n>=2) cnt++; return fibo(n-1)+fibo(n-2);
}
int main(void){
   int N;

   printf("n=");
   scanf("%d",&N);  
   
   printf("F=%d ",fibo(N));

   printf("cnt=%d\n",cnt);
}
 
/*出力結果
[wxa_rx72@localhost ~]$ ./F_rec.out
n=10
F=55 cnt=88
[wxa_rx72@localhost ~]$ ./F_rec.out
n=20
F=6765 cnt=10945
[wxa_rx72@localhost ~]$ ./F_rec.out
n=30
F=832040 cnt=1346268
[wxa_rx72@localhost ~]$ ./F_rec.out
n=40
F=102334155 cnt=165580140

[wxa_rx72@localhost ~]$ ./F_rec.out
n=0
F=0 cnt=0
[wxa_rx72@localhost ~]$ ./F_rec.out
n=1
F=1 cnt=0
[wxa_rx72@localhost ~]$ ./F_rec.out
n=2
F=1 cnt=1
[wxa_rx72@localhost ~]$ ./F_rec.out
n=3
F=2 cnt=2
[wxa_rx72@localhost ~]$ ./F_rec.out
n=4
F=3 cnt=4
[wxa_rx72@localhost ~]$ ./F_rec.out
n=5
F=5 cnt=7
[wxa_rx72@localhost ~]$ ./F_rec.out
n=6
F=8 cnt=12
[wxa_rx72@localhost ~]$ ./F_rec.out
n=7
F=13 cnt=20
[wxa_rx72@localhost ~]$ ./F_rec.out
n=8
F=21 cnt=33
[wxa_rx72@localhost ~]$ ./F_rec.out
n=9
F=34 cnt=54
[wxa_rx72@localhost ~]$ ./F_rec.out
n=10
F=55 cnt=88
*/
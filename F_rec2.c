#include<stdio.h>
int F[100];
#define UNCOMPUTED -1
int cnt=0;
int fibo(int n){
   if(F[n]!=UNCOMPUTED)  return F[n];
   if(n==0) return F[0]=0;
   if(n==1) return F[1]=1;
   if(n>=2) cnt++;return F[n]=fibo(n-1)+fibo(n-2);
}

int main(void){
   int N,i;
   printf("n=");
   scanf("%d",&N);
   for(i=0;i<=100;i++){
	   F[i]=UNCOMPUTED;
   }
   if(N>=0){ 
	 printf("F=%d ",fibo(N)); 

         printf("cnt=%d\n",cnt);
   }
}


/*出力結果
[wxa_rx72@localhost ~]$ ./F_rec2.out
n=10
F=55 cnt=9
[wxa_rx72@localhost ~]$ ./F_rec2.out
n=20
F=6765 cnt=19
[wxa_rx72@localhost ~]$ ./F_rec2.out
n=30
F=832040 cnt=29
[wxa_rx72@localhost ~]$ ./F_rec2.out
n=40
F=102334155 cnt=39
[wxa_rx72@localhost ~]$ ./F_rec2.out
n=50
F=-298632863 cnt=49

[wxa_rx72@localhost ~]$ ./F_rec2.out
n=0
F=0 cnt=0
[wxa_rx72@localhost ~]$ ./F_rec2.out
n=1
F=1 cnt=0
[wxa_rx72@localhost ~]$ ./F_rec2.out
n=2
F=1 cnt=1
[wxa_rx72@localhost ~]$ ./F_rec2.out
n=3
F=2 cnt=2
[wxa_rx72@localhost ~]$ ./F_rec2.out
n=4
F=3 cnt=3
[wxa_rx72@localhost ~]$ ./F_rec2.out
n=5
F=5 cnt=4
[wxa_rx72@localhost ~]$ ./F_rec2.out
n=6
F=8 cnt=5
[wxa_rx72@localhost ~]$ ./F_rec2.out
n=7
F=13 cnt=6
[wxa_rx72@localhost ~]$ ./F_rec2.out
n=8
F=21 cnt=7
[wxa_rx72@localhost ~]$ ./F_rec2.out
n=9
F=34 cnt=8
[wxa_rx72@localhost ~]$ ./F_rec2.out
n=10
F=55 cnt=9
*/
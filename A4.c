#include<stdio.h>
#include<math.h>
#define Tw(n) (int)((n)*ceil(log(n)/log(2))-pow(2,ceil(log(n)/log(2)))+1)

#define N 8
int cnt = 0;
void msort(),merge(),show_addr(),show();

void msort(int X[],int n,int Y[]){
	int n1=n/2,n2=n-n1,i;
	int X1[n1],X2[n2],Y1[n1],Y2[n2];
	printf("X1[%d]のアドレス:" ,n1);
	show_addr(X1,n1);
	printf("X2[%d]のアドレス:" ,n2);
	show_addr(X2,n2);
	printf("Y1[%d]のアドレス:" ,n1);
	show_addr(Y1,n1);
	printf("Y2[%d]のアドレス:" ,n2);
	show_addr(Y2,n2);
	for(i=0; i<n1; i++)	X1[i] = X[i];
	for(i=0; i<n2; i++)	X2[i] = X[(n1+i)];
	if(n > 2){
		msort(X1, n1, Y1);
		msort(X2, n2, Y2);
	}else{
		if(n1 > 0)	Y1[0] = X1[0];
		if(n2 > 0)	Y2[0] = X2[0];
	}
	merge(Y1, n1, Y2, n2, Y);
}

void merge(int Y1[], int n1, int Y2[], int n2, int Y[]){
	int i=0, j=0, k=0;
	while(i<n1 && j<n2){
		if(Y1[i] < Y2[j])	Y[k++] = Y1[i++];
		else	Y[k++] = Y2[j++];
		cnt++;
	}
	if(i == n1){
		while(j != n2)	Y[k++] = Y2[j++];
	}
	if(j == n2){
		while(i != n1)	Y[k++] = Y1[i++];
	}
}

void show_addr(int X[], int n){
	int i;
	for(i=0; i<n; i++)	printf("%d " ,&X[i]);
	printf("\n");
}

void show(int X[], int n){
	int i;
	for(i=0; i<n; i++)	printf("%d " ,X[i]);
	printf("\n");
}


int main(){
	int X[N] = { 37, 7, 18, 14, 19, 12, 21, 6};
	int Y[N];
	printf("X[%d]のアドレス:" ,N);
	show_addr(X,N);
	printf("Y[%d]のアドレス:" ,N);
	show_addr(Y,N);
	msort(X,N,Y);
	printf("Y[%d]:" ,N);
	show(Y,N);
	printf("cnt=%d : Tw(%d)=%d\n" ,cnt,N,Tw(N));
	
}

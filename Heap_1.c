#include <math.h>
#include <stdio.h>       
#include <stdlib.h>     
#include <string.h>     
#include <time.h>    
int N =1000000;  
#define INIARRAYSIZE N+1  
int* pA;                
int sA;                 
int size;               
void create(),insert(),show();
int deletemin(),empty();

void create() {
	sA = INIARRAYSIZE;    
	if ((pA = (int  *)malloc(sizeof(int ) * sA)) == NULL) exit(1);
	size = 0;             
}

void insert(int x) {
	if(size == sA -1) {       
		int* oldpA = pA;  
		sA = sA * 2;
		if((pA = (int *) malloc(sizeof(int) * sA)) == NULL) exit(1);
		memcpy(pA, oldpA, sizeof(int) * (size + 1));    
		free(oldpA);
	}
	pA[size] = x;
	int p = -1, c;
	for (c = size; p != 0; c = p) {
		p = (c - 1) / 2;
		if (pA[p] > pA[c]) {
			int temp = pA[p];
			pA[p] = pA[c];
			pA[c] = temp;
		}
		else {
			break;
		}
	}
	size++;
}

int deletemin(void) {

	int min = pA[0];
        pA[0] = pA[size-1];
        size--;
	int p, c_r, c_l, c_min;
	for (p = 0; p < size; p = c_min) {
		c_l = p * 2 + 1;
		c_r = c_l + 1;
		if (c_l >= size) {
			break;
		}
		c_min = (pA[c_l] <= pA[c_r]) ? c_l : c_r;
		if (pA[p] > pA[c_min]) {
			int temp = pA[p];
			pA[p] = pA[c_min];
			pA[c_min] = temp;
		}
		else {
			break;
		}
	}

	return min;
}

void show() {
	int i;
	for(i = 0 ; i < size ; i++){ 
		printf("pA[%d]=%d\n", i, pA[i]);
	}
}

int empty() {
	if(size > 0) 
		return 0;
	else
		return -1; 
}

int main(void){
	int n=15;
	create();
	while(n>0){ 
		insert(rand()%100);
		n--;
	}
        show();
        while(empty()==0){
              printf("%d\n", deletemin());
        }
	
	show();
}

/*実行結果
[wxa_rx72@localhost ~]$ gcc Heap_1.c -o Heap_1.out
[wxa_rx72@localhost ~]$ ./Heap_1.out
pA[0]=15
pA[1]=21
pA[2]=27
pA[3]=77
pA[4]=49
pA[5]=35
pA[6]=59
pA[7]=92
pA[8]=86
pA[9]=93
pA[10]=62
pA[11]=83
pA[12]=90
pA[13]=86
pA[14]=63
15
21
27
35
49
59
62
63
77
83
86
86
90
92
93

*/
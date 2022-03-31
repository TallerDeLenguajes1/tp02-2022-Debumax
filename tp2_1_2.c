#include<stdio.h>
#define N 20
int main(){
	int i;
	int vt[N];
	for(i = 0;i<N; i++)
	{
		vt[i]=1+rand()%100;
		printf("%d\n", *(vt+i)); // aritmetica de punteros
		/* 
		*(pt +i) muestra el elmento en esa posicion 
		*(pt++) mueve a donde apunto el puntero
		*/
	}
	return 0;	
}

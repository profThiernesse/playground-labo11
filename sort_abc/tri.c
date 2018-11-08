#include <stdio.h>
#include <stdlib.h>

void echange(int *, int *);

int main() {
  int a, b, c;
  
  scanf("%d",&a);
  scanf("%d",&b);
  scanf("%d",&c);
  
  //Ajouter votre code ici
  
  printf("%d\n%d\n%d\n",a,b,c);
  
  return 0;
}

void echange(int *a,int *b) {
	int tmp;
	tmp = *a;
	*a=*b;
	*b=tmp;
}
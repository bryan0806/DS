#include <stdio.h>

void triangle1(void);
void triangle2(void);
void triangle3(void);
void triangle4(void);

int main(void){
triangle1();
triangle2();
triangle3();
triangle4();
return 0;
}

void triangle1(){
    int i,j;
    for(i=1;i<=5;i++){
	for(j=1;j<=i;j++){
    	printf("%d",i);
	
	}
	printf("\n");
    }
}
void triangle2(){
    int i,j;
    for(i=1;i<=5;i++){
	for(j=1;j<=5;j++){
	    if(j<6-i){
		printf(" ");
		}else{    	
		printf("%d",i);
		}
	}
	printf("\n");
    }
}
void triangle3(){
    int i,j;
    for(i=1;i<=5;i++){
	for(j=1;j<=6-i;j++){
    	printf("%-d",i);
	
	}
	printf("\n");
    }
}

void triangle4(){
    int i,j;
    for(i=1;i<=5;i++){
	for(j=1;j<=5;j++){
	    if(j<i){
		printf(" ");
		}else{    	
		printf("%d",i);
		}
	}
	printf("\n");
    }
}


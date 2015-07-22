#include<stdio.h>

int factorial(int a){	//we calculate the possibilities using the factorial function
    if(a==0)
    return 1;
    
    return factorial(a-1)*a;
}

int main(void){

	int a,b; //the 2 integers as inputs
	int poss, sum;	//the number of possibilities and the sum
	int m,n;		//where we store the factorials of each integer
	
	while(1){
    
    	scanf("%d%d",&a,&b);
    
    	if(a==-1 && b==-1) //if both the inputs are equal to -1, we end the execution
    	break;
	
		sum = a+b;		//define the sum
		m= factorial(a);
		n= factorial(b);
		poss= factorial(sum)/(m*n);		//we calculate the factorials of the sum, a, b
		
		
		if(a==0 || b==0){
			printf("%d+%d!=1", a,b);
			printf("\n");
		}
		else if( a==1 || b==1){
			printf("%d+%d=%d",a,b,sum);
			printf("\n");
		}
		else if((a+b)==poss){		//if the condition is true, then the sum is equal to the number of possibilities
  			printf("%d+%d=%d",a,b,sum);
  			printf("\n");
    	}
	
	 	else{
        	printf("%d+%d!=%d",a,b,poss);	//if the condition is not true, we print it.
        	printf("\n");
    	}
    }
    
    return 0;
}

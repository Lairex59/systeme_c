#include <stdio.h>
#include <math.h>
float f (float x);

int main(void){
  float a, b, x, fa, fb, fx;
  char y;
  y = 'j';
  int test = 0;

  while (y != 'n'){
    printf("\nBitte geben Sie den Anfangsintervall ein: ");
    scanf(" %f", &a);
    printf("\nBitte geben Sie den Endintervall ein: ");
    scanf(" %f", &b);
    x = (a+b)/2;
    fa = f(a);
    fb = f(b);
    fx = f(x);
    if (a-b>0){
      while (a-b>1){
        if(fa*fb<0) {  
          b = x;
        }
        else {
        b = b;
        }
        if (fa*fb<0){
        a = a;
        }
        else{
          a = (a+b)/2;
        }
      }
    }else {
      while(a-b<-1){
        if(fa*fb<0){
	  b = x;
	}
	else {
	  b = b;
	}
	if (fa*fb<1){
	  a = a;
	}
	else {
	  a = (a+b)/2;
	}
      }
    }
    printf("\na = %f ", a);
    printf("\nb = %f ",b);
    printf("\nm = %f ", x);
    printf("\nMittelpunk = %f", x);
    printf("\nf(a) = %f", fa);
    printf("\nf(b) = %f", fb);
    printf("\nf(x) = %f", fx);
    printf("\nNochmal?[j/n] ");
    scanf(" %c", &y);
    	
  }
}
float f(float x){
	return(exp(x)+1-x*x);
}

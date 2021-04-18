#include <stdio.h>    
  
int main(){	
	//Array wird vom Typ integer deklariert			
  int a[10],n,i;
	//Ausgaeb der Überschrift
  printf("Geben Sie die Zahl ein: ");    
	//Benutzer gibt die Zahl ein
  scanf("%i",&n);    
	//Wandelt die Zahl im Binärsystem um
  for(i=0;n>0;i++)    
  {    
    a[i]=n%2;    
    n=n/2;    
  }    
	//Ausgabe der Überschrift
  printf("\nDie Zahl im Binärsystem lautet: ");    
	//GIbt die umgewandelte Zahl im Binärsystem aus
  for(i=i-1;i>=0;i--)    
  {    
    printf("%i",a[i]);    
  }    
  printf("\n");
return 0;  
}  

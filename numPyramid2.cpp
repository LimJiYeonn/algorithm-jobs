#include <stdio.h> 

 int main() { 
	 int n,s,start=0;
	 scanf("%d %d", &n, &s);
	 
	 for(int i=1; i<=n; i++){
		 //홀수
		 if(i%2==1){
			 if(i>=3)s=s-(i*2-1);
			 if(s <= 0) s+=9;
			 start=s;
		 for(int j=0; j< i*2-1; j++){
			 printf("%d", start);
			 start--;
			 if(start==0) start=9;
		 }
		printf("\n");
		 }
		 //짝수
		 if(i%2==0){
			 s=s+1;
			 for(int j=0; j< i*2-1; j++){
			 printf("%d", s);
			 s++;
			 if(s==10) s=1;
		 }
		 printf("\n");
	 }
	 
 } 
 return 0;
}
#include <stdio.h>

int main() {

	int n,s;
	scanf("%d %d", &n, &s);
	
	int space = n-1, number=1;
	int previousFirst, previousLast;
	
	
	for(int i=1; i<=n; i++){
		for(int j=0; j<space; j++) printf(" ");
		space--;
		
		if(i%2 == 0){ //짝수 줄, 증가하면서 출력
			int currentFirst = previousFirst + 1;
			if(currentFirst <= 10) currentFirst = 1;
			
			for(int j=0; j<number; j++){
				printf("%d", currentFirst);
				previousLast = currentFirst;
				currentFirst += 1;
				if(currentFirst >= 10) currentFirst = 1;
			}
		}
		
		else{ //홀수 줄, 감소하면서 출력
			int currentFirst;
			
			if(i == 1) currentFirst = s;
			else{
				currentFirst = previousLast;
				for(int j=0; j<number; j++){
					currentFirst += 1;
					if(currentFirst >= 10) currentFirst=1;
					
				}
				previousFirst = currentFirst;
				
				for(int j=0; j<number; j++){
					printf("%d", currentFirst);
					currentFirst -= 1;
					if(currentFirst <= 0) currentFirst =9;
				}
				
			}
			
		}
		
		number += 2;
		printf("\n");
	}

  return 0;
}
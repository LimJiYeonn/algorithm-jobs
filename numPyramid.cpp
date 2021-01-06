#include <stdio.h>

int main() {

  int n,s,start=0;
  scanf("%d %d", &n, &s);
  
  int data[2*n];
  
  for(int i=1; i<=n; i++){
    for(int j=0; j<i*2-1; j++){
      data[j]=s;
      s++;
      if(s==10)s=1;
    }
    //빈칸 출력
    for(int l=n-i; l>0; l--){
      printf(" ");
    }
    
    //짝수
    if(i%2==0){
      for(int k=0; k<i*2-1; k++){
        printf("%d", data[k]);
      }
      printf("\n");
    }else if(i%2==1){ //홀수
      for(int k=i*2-2; k>=0; k--){
        printf("%d", data[k]);
      }
      printf("\n");
    }
  }

  return 0;
}
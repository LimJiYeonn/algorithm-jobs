#include <stdio.h>

int main() {

  int n,cnt=1;
  scanf("%d", &n);
  
  int data[n][n];
  int x,y;
  
  //j와y는 세로 i와 x는 가로 
  for(int i=0; i<n; i++){
    y=0; x=i; //i 즉 x는 각 화살표의 시작점
    for(int j=0; j<=i; j++){
     data[y][x] = cnt++;
     y++; x--;
    }
  }
  
  for(int i=0; i<n; i++){
    for(int j=0; j<n-i; j++){//j+i<n;
     printf("%d ",data[i][j]);
    }
    printf("\n");
  }


  return 0;
}
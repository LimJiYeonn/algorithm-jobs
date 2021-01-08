#include <stdio.h>

int main() {

  int m[7][7];
  
  //테두리에 숫자 추가
  for(int i=0; i<7; i++){
    m[0][i]=10;
    m[6][i]=10;
    m[i][0]=10;
    m[i][6]=10;
  }
  
  for(int i=1; i<6; i++){
    for(int j=1; j<6; j++){
      scanf("%d", &m[i][j]);
    }
  }
  

  //나눠서 숫자비교X, 한번에 비교
  for(int i=1; i<6; i++){
    for(int j=1; j<6; j++){
      if( m[i][j] < m[i][j-1] && m[i][j] < m[i-1][j] && m[i][j] < m[i][j+1] && m[i][j] < m[i+1][j]){
        printf("* ");
      }
      else {
        printf("%d ", m[i][j]);
      }
    }
    printf("\n");
  }

  
  return 0;
}
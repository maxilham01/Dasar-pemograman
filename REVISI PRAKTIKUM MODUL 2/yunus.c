 #include <stdio.h>

int main(){
   int A, B;
   scanf("%d %d",&A, &B);
      for (int i = 1; i <= A; i++)
      {
            for (int j = 1; j <= B; j++)
            {
                  if ( i == 1 || i == A  ||  j == 1 || j == B )
                  {
                        
                        printf("#");
                  }
                  else{

                        printf("-");
                  }
                  
            }
            printf("\n");
      }
      


   return 0;
}



#include<stdio.h>
#include<string.h>
void main(){
    char ch[40];
    printf("Enter Th string : ");
    scanf("%s",ch);
    int size=strlen(ch);
    
    int i,f= 1;
    for(i=0; i<size; i++){
          if(!(ch[0]=='a' ||  ch[size-1]=='b') || ch[0]=='b'){
                f= 0;
            }
        }
    if(f){
      printf("Q0\n");
      for(i=0; i<size; i++){
          if(ch[i]=='a'){
            printf("a ----> Q1\n"); 
          }
          else{
            printf("b ----> Q2\n"); 
          }
      } 
      if(ch[size-1]=='b')  
        printf("This string Accepted by DFA \n"); 
    }
    else{
            printf("Initial State  Q0\n");
            printf("Death State  Q3\n ");
            printf("This string is not accepted by DFA \n");
    }
}

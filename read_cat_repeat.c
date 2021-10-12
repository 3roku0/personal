#include<stdio.h>
#include<stdlib.h> // for malloc
#include<string.h> // for string funs

int main(){
     
  char *combined;
  combined=malloc(1);
  combined[0] = '\0';

   
    //create input array
    char input1[257];

    //read in input1 array
    printf("Enter words that you would like to concatentate until hashtag: ");
    scanf("%256s", input1);

while(input1[0] != "#"){
    combined = char*strcat
      {
          break;
      }
      if (input1[i] !=' '){
          combined[b]=input1[i];
          b++;
          
      }

    //find out length of array
    int len1;
    len1 =strlen(input1);

    // allocate an array big enough for both
 
  combined=malloc(sizeof(char)*(len1+1));
  int b =0;

  
  }

    // print
  printf("%s\n",combined);

  free(combined);
    }
    return 0;
}
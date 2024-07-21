//welcome to online voting system made By Ayaan.
#include <stdio.h>
#include <cs50.h>
#include <string.h>


typedef struct {
    char name[50];
    char party[50];
    int vote;
} candidate;

int main(){
int passo,passcodeo,passi,passcodei,i,;
char p,o;
 candidate candidates[5]; // declare an array of 5 candidate structs

    // Assigning the standing candidates
    strcpy(candidates[0].name,"owasis");
    strcpy(candidates[0].party,"MIM");
    candidates[0].vote = 0;
      strcpy(candidates[1].name,"modi");
    strcpy(candidates[1].party,"BJP");
    candidates[1].vote = 0;
  strcpy(candidates[2].name,"KCR");
    strcpy(candidates[2].party,"BRS");
    candidates[2].vote = 0;
      strcpy(candidates[3].name,"RAHUL");
    strcpy(candidates[3].party,"CONGRESS");
    candidates[3].vote = 0;
      strcpy(candidates[4].name,"ALI");
    strcpy(candidates[4].party,"INDEPENT");
    candidates[4].vote = 0;
      strcpy(candidates[5].name,"NOTA");
    strcpy(candidates[5].party,"NOTA");
    candidates[5].vote = 0;

   //printf("\nName: %s\nParty: %s\nVote: %d\n", candidates[0].name, candidates[0].party, candidates[0].vote);

  printf("welcome to digital voting system\n");
  passo=939263;
  passcodeo=get_int("enter your passcode:");
  //printf("enter your passcode\n");
  //scanf("%d",&passcode);
  if(passcodeo==passo)
  {
 printf("welcome to voting platform");
    printf("\nto cast vote type v\n to known result tpye d\n");
    p=get_char("\ntpye now:\n");
    switch (p)
    {
    case 'v':
      printf("\nwelcome cast vote  box\n");
      for ( i = 0; i <=5; i++)
      {
         printf("\n%d\nName: %s\nParty: %s\n", i, candidates[i].name, candidates[i].party);
      }
      o=get_int("\nenter your choice\n");
      switch (o)
      {
      case '0':
      candidates[0].vote++;
      break;
      case '1':
      candidates[1].vote++;
      break;
      case '2':
        candidates[2].vote++;
      break;
      case '3':
      candidates[3].vote++;
      break;
      case '4':
        candidates[4].vote++;
      break;
      case '5':
        candidates[5].vote++;
      break;
      default:
      printf("invalid choice");
      for ( i = 0; i <=5; i++)
      {
       printf("\nName: %s\nParty: %s\nVote: %d\n", candidates[i].name, candidates[i].party, candidates[i].vote);
      }
      
        break;
      }
      
    break;
    case 'd':

    break;
    default:
        break;
    }
  }
  else
  printf("wrong passcode plz contact devoloper");


  
}
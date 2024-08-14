#include <cs50.h>
#include <stdlib.h>
#include <stdio.h>

//DEFINING STRUCT
typedef struct
{
  string name;
  string party;
  int vote;
} candidate;

//WRITING MAIN FUCTIONS
int main()
{
  candidate candidates[5];
  int pass, passcode;


  // Assigning the candidates
  candidates[0].name = "rehan";
  candidates[0].party = "MIM";
  candidates[0].vote = 0;

  candidates[1].name = "makilk";
  candidates[1].party = "ncp";
  candidates[1].vote = 0;

  candidates[2].name = "mani";
  candidates[2].party = "bjp";
  candidates[2].vote = 0;

  candidates[3].name = "bona";
  candidates[3].party = "cdp";
  candidates[3].vote = 0;

  candidates[4].name = "dr.athar";
  candidates[4].party = "independent";
  candidates[4].vote = 0;
//main part
  here:
  printf("welcome to digital voting system\n");
  pass = 939263;
  // passcode=get_int("enter your passcode:");
  printf("enter your passcode\n");
  scanf("%d", &passcode);
  if (passcode == pass)
  {
    poa:
    system("clear");
    printf("welcome to voting platform");
//chosing 
    printf("\nTo cast vote type v\nTo know result type d\n");
    char p;
    printf("\nType now:\n");
    scanf(" %c", &p);
    
// switch case for choose
    switch (p)
    {
    case 'v':
      printf("\nWelcome to the cast vote box\n");
      //showing list of candidaties
      for (int i = 0; i < 5; i++)
      {
        printf("\n%d\nName: %s\nParty: %s\n", i, candidates[i].name, candidates[i].party);
      }
      int o;
      //voting
       printf("\nEnter your choice\n");
       scanf("%d", &o);
      if (o >= 0 && o < 5)
      {
        candidates[o].vote++;
      }
        system("clear");   //clear screen feature for terminal of any ide
        //system("cls");    //clear screen feature for windows

        
        printf("\n DO YOU WANT CONTIUNE \n Y FOR YES ||N FOR NO\n");
        char k;
        scanf(" %c", &k);
        if (k == 'y' || k == 'Y')
        {
         goto poa;
        }
        else{
            break;
            }
      }

      else
      {
        printf("Invalid choice\n");
      }
      break;
    case 'd':
      system("clear");
      printf("welcome to digital voting system result\n");
      pass = 9618;
      // passcode=get_int("enter your passcode:");
      printf("enter your passcode\n");
      scanf("%d", &passcode);
      if (passcode == pass)
      {
        for (int i = 0; i < 5; i++)
        {
          printf("\n%d\nName: %s\nParty: %s\n vote: %d\n", i, candidates[i].name, candidates[i].party, candidates[i].vote);

        }
        printf("\n DO YOU WANT CONTIUNE \n Y FOR YES ||N FOR NO\n");
        char k;
        scanf(" %c", &k);
        if (k == 'y' || k == 'Y')
        {
         goto poa;
        }
        else{
            break;
            }
      }
      else
        printf("wrong passcode plz contact devoloper");

    break;

    default:
    printf("Invalid option\n");

    goto here;
    break;
  }
  }
else printf("wrong passcode plz contact devoloper");
  //thanKing user.....
printf("\n thank for using voting system\n to use again run again")
}

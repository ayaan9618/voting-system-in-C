#include <cs50.h>
#include <stdlib.h>
#include <stdio.h>
typedef struct
{
  string name;
  string party;
  int vote;
} candidate;

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

    printf("\nTo cast vote type v\nTo know result type d\n");
    char p;
    printf("\nType now:\n");
    scanf(" %c", &p);

    switch (p)
    {
    case 'v':
      printf("\nWelcome to the cast vote box\n");
      for (int i = 0; i < 5; i++)
      {
        printf("\n%d\nName: %s\nParty: %s\n", i, candidates[i].name, candidates[i].party);
      }
      int o;
       printf("\nEnter your choice\n");
       scanf("%d", &o);
      if (o >= 0 && o < 5)
      {
        candidates[o].vote++;
        system("clear");
        //system("cls");
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

/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int
main ()
{
  // Write C code here
  int dipamt, pin, choice, amt, copy;
  printf ("\n\n\t\t\tWelcome to bakning system\n");
  printf("\t\t\tregister your ATM card\n");
  printf ("\n\t\t\t1.Enter how many amount is your are diposited in your bank\n");
  scanf ("\t%d", &dipamt);
  printf ("\t2.enter 4 digit pin security:-\n");
  scanf ("\t%d", &pin);
  printf ("\t2.enter pin for confirmation:-\n");
  scanf ("%d", &copy);
  if (pin >= 1000 && pin <= 9999)
    {
      if (pin == copy)
	{
	 
	  printf ("your ATM card is registerd now\n");
	  printf ("press enter for next process\n");
	  printf
	    ("\n1.cash withdrawal\n 2.check account balace\n 3.change pin\n 4.cash diposit\n 5.other services\n");
	  scanf ("%d", &choice);
	  switch (choice)
	    {
	    case 1:
	      printf ("cash withdrawal process is on\n");
	      printf ("enter minimum 100Rs/- amount:-\n");
	      scanf ("%d", &amt);
	      printf ("enter pin\n");
	      scanf ("%d", &pin);
	      if (copy == pin)
		{
		  printf ("collect your cash and receipt\n");
		  dipamt = dipamt - amt;
		  printf ("clear balance:%d", dipamt);

		}
	      else
		{
		  printf
		    ("enter correct pin\n if you forgot pin contact your bank\n");
		}
	      break;

	    case 2://bank balance
	      printf ("enter pin\n");
	      scanf("%d",&pin);
	      if (copy == pin)
		{
		  printf ("Clear balance is :- %d", dipamt);
		}
	      else
		{
		  printf
		    ("enter correct pin\n if you forgot pin contact your bank\n");

		}
	      break;

	    case 3://change pin option
	      printf ("enter pin\n");
	      scanf("%d",&pin);
	      
	      if (copy == pin)
		{
		  printf ("enter new 4 digit pin\n");
		  scanf ("%d", &pin);
		}
	      else
		{
		  printf
		    ("enter correct pin\n if you forgot pin contact your bank\n");

		}
	      break;
	    
	    case 6:
	      printf ("EXIT\n");
	      printf ("ATM process is ended\n");
	      break;
	      
	    case 4:
	    {
	      printf("cash deopisit process is on\n");
	      
	      printf ("enter minimum 100Rs/- amount:-\n");
	      scanf ("%d", &amt);
	      printf ("enter pin\n");
	      scanf ("%d", &pin);
	      if (copy == pin)
		{
		  printf ("collect your cash and receipt\n");
		  dipamt = dipamt + amt;
		  printf ("clear balance:%d", dipamt);

		}
	      else
		{
		  printf
		    ("enter correct pin\n if you forgot pin contact your bank\n");
		}
	      break;
	        
	    }
	    
	    case 5:
	    {
	        
	    }
	    

	    default:
	      printf ("invalid choice\n");
	      break;


	    }


	}
      else
	{
	  printf ("incorret pin\n");
	}


    }
  else
    {
      printf ("enter 4 digits pin only and correct pin\n");
    }
  return 0;
}


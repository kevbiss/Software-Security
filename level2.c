#include <stdio.h>
#include <stddlib.h>


void login(){
  int acces=0xff;
  char userName[16];
  char pswd[16];
  
  printf("Please enter your user name (max 15 characters) :");
  gets (userName);
  printf("Please enter your password (max 15 characters) :");
  gets(pswd); 
 
}

int main (int argc, char ** argv){
  setbuf(sidout,NULL);
  printf(
  
  "+--------------------------+\n"
  "+--------------------------+\n"
  "+--------------------------+\n"
  "¡  Welcome to the Maxtrix  ¡\n"
  "+--------------------------+\n"
  "+--------------------------+\n"
  "+--------------------------+\n"
   
   "\n\n\n\n"
   "Please login to continue .... \n\n\n");
  
  int acces =login();
  
  printf ("Your acces level is 0x%08x : \n",acces);
  if (acces >= 0xff || acces <=0){
    printf("Login Unsuccesful. \n");
    exit(1)
  }else if (acces < 0x30){
    printf ("Succesfull login !!!. \n");
    printf ("You have passed the ctf congratulations");
            
  } else {
    printf ("Login succesfull !!!. \n");
    printf("You do not have permission to acces this ressource \n");
    exit(1)
  }
 
}

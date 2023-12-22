#include<iostream>
#include<cstdlib>
#include<time.h>
using namespace std;

bool NUM_GUESSING_GAME(int n)
{ 

  int your_guess;
  bool flag=false;
  while(!flag){
   
  std::cout<<"Enter your guess = ";
  std::cin>>your_guess;
  if(your_guess > n)
  {
    std::cout<<"Your guess is to high\n";
    flag = false;
  }
  else if(your_guess < n)
  {
    std::cout<<"Your guess is too low\n";
    flag = false;
  }
  else
  {
    std::cout<<"Congratulations you won";
    flag = true;
  }
  }
  return flag;
}

int main()
{
  char ch;
  do
  {  cout<<"We have generated a random number you have to guessit correctly\n";
    int n = rand()%100;
    NUM_GUESSING_GAME(n);
    std::cout<<"Enter 'Y' to play again :- ";
    std::cin>>ch;
  } while (ch=='y' || ch=='Y');
  return 0;
}
#include<iostream>
#include<string>
#include<math.h>


int is_valid(std::string text_out, std::string str1, std::string str2) 
{
  std::string temp; 
  std::cout<<text_out; 
  std::cin>>temp;

  while(std::cin.fail() || (temp != str1 && temp != str2)) 
  {    
    std::cin.clear(); 
    std::cin.ignore(); 
    std::cout<<"enter valid value: "; 
  // Clear fail bit and ignore bad input

    std::cin>>temp;
  }

  if (temp == str1)
  {
    return 0;
  }
  if (temp == str2)
  {
    return 1;
  }
  return 0;
}

int is_valid(std::string text_out) 
{
  int temp; 
  {
  std::cout<<text_out; 
  std::cin>>temp;

  while(std::cin.fail()) 
  {    
    std::cin.clear(); 
    std::cin.ignore(); 
    std::cout<<"enter valid value: "; 
    // Clear fail bit and ignore bad input

      std::cin>>temp;
  }
  }
  return temp;
}

int main()
{

  std::cout<<"Eij = 13.6*Z^2*(nj^(-2)-ni^(-2))eV"<<std::endl;
   int loop;
   loop = 1;
   while (loop == 1)
  {
    int    Z;
    Z=is_valid("Z=");
    int    n_i;
    n_i=is_valid("n_i=");
    int    n_j;
    n_j=is_valid("n_j=");
    int    unit;
    unit=is_valid("eV or J\n", "eV", "J");
    double energy;
    energy=13.6*Z*Z*(pow(n_j,-2)-pow(n_i,-2));

    if (unit==0)
    {
      std::cout<<energy<<"eV"<<std::endl;
    }
    if (unit==1)
    {
      energy=energy*1.6*pow(10,-19);
      std::cout<<energy<<"J"<<std::endl;
    }

    loop=is_valid("continue?\nn to stop and y to continue\n", "n", "y");
  }
  return 0;
}
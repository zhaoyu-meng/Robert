//Calcualtion of photon energies of electron transition from Bohr model
//week one course work
//Zhaoyu Meng, student ID:10832580, 8 JAN 2024
#include<iostream>
#include<string>
#include<math.h>
std::string is_valid(std::string text_out, std::string str_1, std::string str_2)
{
  //To check if input is valid for string input
  std::string temp;
  std::cout<<text_out;
  std::cin>>temp;
  while(std::cin.fail() || (temp != str_1 && temp != str_2))
  {
    std::cin.clear();
    std::cin.ignore();
    std::cout<<"enter valid value: ";
  // Clear fail bit and ignore bad input
    std::cin>>temp;
  }
  return temp;
}
int is_valid(std::string text_out)
{
  //To check if input is valid for int input
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
  //main function
  std::cout<<"Eij = 13.6*Z^2*(nj^(-2)-ni^(-2))eV"<<std::endl;
  std::string loop;
  loop="y";
  while(loop=="y")
  {
    int    Z;
    Z=is_valid("Z=");
    int    n_i;
    n_i=is_valid("n_i=");
    int    n_j;
    n_j=is_valid("n_j=");
    std::string   unit;
    unit=is_valid("unit in eV or J\n", "eV", "J");
    double energy;
    energy=13.6*Z*Z*(pow(n_j,-2)-pow(n_i,-2));//compote energy in eV
    if (unit=="eV")
    {
      std::cout<<energy<<"eV"<<std::endl;
    }
    if (unit=="J")
    {
      energy=energy*1.6*pow(10,-19);//convert energy into J
      std::cout<<energy<<"J"<<std::endl;
    }
    loop=is_valid("continue?\nn to stop and y to continue\n","n","y");
  }
}

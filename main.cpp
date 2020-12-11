#include <iostream>
#include<fstream>
#include<string>
#include <vector>
#include<stdlib.h>
#include "hexadecimal.h"
using namespace std;
//function prototypes

int main()
{
  //variables 
  string hexa; 
  hexadecimal hex;
  

  do{ //main do while loop will always be true so that it will always ask for new hex
    hexa = hex.HexIn();
    if(hexa.size() == 6){ //making sure that it is as long as a hexadecimal
      hex.HexToFile(hexa); //call to input hexadecimal input into hexadecimal.txt
      hex.ColorAnalysis();//reads hexadecimal values from .txt file and changes to integer
    }
    if(hexa == "Q" || hexa == "q"){
      hex.HexQuitDisplay();
      exit(0);
    }
    if(hexa.size() < 6){
      cout<<"That was an invalid hexadecimal please try again.\n";
    }
  }while(hexa != "Q" || hexa != "q");
  
  
  
  
  
  return 0;
}

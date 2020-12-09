#include <iostream>
#include<fstream>
#include<string>
#include <vector>
#include<stdlib.h>
#include "hexadecimal.h"
using namespace std;
//function prototypes
void HexToFile (string);
long int ColorAnalysis();
string HexIn();

int main()
{
  //variables 
  string hexadecimal; 
  

  do{ //main do while loop will always be true so that it will always ask for new hex
    hexadecimal = HexIn();
    if(hexadecimal.size() == 6){ //making sure that it is as long as a hexadecimal
      HexToFile(hexadecimal); //call to input hexadecimal input into hexadecimal.txt
      ColorAnalysis();//reads hexadecimal values from .txt file and changes to integer
    }
    if(hexadecimal.size() == 1){
      return 0;
    }
    if(hexadecimal.size() < 6){
      cout<<"That was an invalid hexadecimal please try again.\n";
    }
  }while(HexIn() == HexIn());
  
  
  
  
  
  return 0;
}
string HexIn(){//Main input function that asks and recieves the hexadecimal the user wants to analyze
  string Hex6;
  cout<< "What hexadecimal would you like to anaylze, or enter Q to quit.\n";
  cin >> Hex6;
  return Hex6;
}
void HexToFile (string hex){//using fstream writer to write the input hexadeimcal onto hexadecimal.txt and separate them by color.
  std::ofstream out("hexadecimal.txt");
  out << hex[0] << hex[1] << endl;
  out << hex[2] << hex[3] << endl;
  out << hex[4] << hex[5] << endl;
}

long int ColorAnalysis(){
  //fstream file reading and display of hexadecimal color values
  fstream fileR;
  string red,green,blue;
  fileR.open("hexadecimal.txt");
  if(fileR.is_open()){
    getline(fileR,red);
    getline(fileR,green);
    getline(fileR,blue);
    cout<<"The hexadecimal value for each color is:\n"<<"Red: "<<red<<endl<<"Green: "<<green<<endl<<"Blue: "<<blue<<endl;
  }
  fileR.close();
  //passes string read from file through strtol to change it to an RGB integer
  long int redint = strtol(red.c_str(),NULL,16);
  long int greenint = strtol(green.c_str(),NULL,16);
  long int blueint = strtol(blue.c_str(),NULL,16);
  
  cout<<"The RGB value of each color is:\n"<< "Red: "<<redint<<endl<<"Green: "<<greenint<<endl<<"Blue: "<<blueint<<endl;
  
  //decides what message to display about the hex based on int values
  if(redint >= 250 && greenint >= 250 && blueint <= 100){
    cout<<"This shade of green and ones lighter than it are impossible for people with Protanopia,Deutanopia, and Tritanopia to tell the difference of.\n";
  }
  if(redint >= 250 && greenint == 0 && blueint <= 50){
    cout<<"This shade of red and lighter is incredbly difficult for people Deutanopia and Tritanopia to tell the difference in colors.\n";
  }
  if(redint <= 100 && greenint >= 250 && blueint <= 100){
    cout<<"Shades of green yellow like this are difficult for people with all 3 types of color blindness to see mainly because of its high green color value.\n";
  }
  if( blueint >= (redint + greenint)){
    cout<<"This is a potenitally suitable color for people with Protanopia and Duetanopia colorblindness. \n";
  }
  if((redint + greenint) >= blueint){
    cout<<"This color is unacceptable to all three types color blindness due to its high levels of green and red.\n";
  }

  return 0;
}
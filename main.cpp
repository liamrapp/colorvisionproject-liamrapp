#include <iostream>
#include<fstream>
#include<string>
using namespace std;

int main()
{
  std::string hexfile;
  fstream fileR;
  int red1,red2,blue1,blue2,green1,green2,color1,color2,color3,count;
  string line0,line1,line2,line3,line4,line5,hex;
  char choice;
    
    //gaining hexadecimal via cin but can be changed to read from file
    cout<< "What hexadecimal would you like to check for suitability?\n";
    std::cin>> hexfile;
    std::ofstream out("hexadecimal.txt");
    out << hexfile[0]<<endl;
    out << hexfile[1]<<endl;
    out << hexfile[2]<<endl;
    out << hexfile[3]<<endl;
    out << hexfile[4]<<endl;
    out << hexfile[5]<<endl;
    // check to if the characters are within bound of hexadecimal
      
      //red color calculations
      fileR.open("hexadecimal.txt");
      if(fileR.is_open())
      {
        getline(fileR,line0);
        getline(fileR,line1);
        getline(fileR,line2);
        getline(fileR,line3);
        getline(fileR,line4);
        getline(fileR,line5);

        
        red1 = std::stoi (line0);
        red2 = std::stoi (line1);
        green1 = std::stoi (line2);
        green2 = std::stoi (line3);
        blue1 = std::stoi (line4);
        blue2 = std::stoi (line5);
        
        
        color1 = ( red1* 16) + red2;
        color2 = (green1 * 16) + green2;
        color3 = (blue1 * 16) + blue2;
        
        cout<<"The color levels in R.G.B. are "<<endl<<"Red: "<<color1<<endl<<"Green: "<<color2<<endl<<"Blue: "<<color3<<endl;
        {
          if((color1 + color2) > color3)
          {
            cout<<"This would not be a suitable color for someone who is red/green colorblind.\n";
          }
          if((color1 + color2) <= color3)
          {
            cout<<"This color has high levels of blue, easily visible to someone red/green colorblind.\n";
          }
        }
      }
        else
      {
        cout<<"That is an unreadable hexadecimal.\n";
      }
      
  return 0;
}

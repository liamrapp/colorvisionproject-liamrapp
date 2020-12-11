#ifndef HEXADECIMAL_H
#define HEXADECIMAL_H
#include <string>
#include <vector>

using std::string;
using std::vector;

class hexadecimal
{
  private:
    string hex;
    vector <string> hexlist;
  
  public:
    string HexIn();
    void HexToFile (string);
    long int ColorAnalysis();
    void hexquit(&string quit);
};

#endif
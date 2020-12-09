#indef HEXADECIMAL_H
#define HEXADECIMAL_H
#include <string>
#include <vector>

using std::string;
using std::vector;

class student
{
  private:
  string hex;
  vector <string> HexList;
  
  public:
  string HexIn();
  void HexToFile (string hex);
  long int ColorAnalysis();

};

#endif
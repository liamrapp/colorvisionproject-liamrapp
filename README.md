# Colorblindness Text Corrector

## Description

In this porgram I decided that I wanted to create a program that takes in a certain hexadecimal number and will decide wether or not that was a good color for someone red/green colorblind. I did this by file writing the hexadecimal into a text file I called hexademical.txt. Here I listed every number on its own line so that I could manipulate specific characters with it easier with loops later on.I then used getline to read every number and store that in a string. Then i converted those strings to integers. With some simple hexadecimal math showed the color levels of each color by multiplying the first numbers of each color by 16 and adding the second number. Unfortunately I was unable to show asnwers for the alphabetical characters so its not exactly hexadecimal, but I tried my best to create a working program for hexadecimals without letters. 

# v0.2 Updates

My major flaw was that my original program could not take in the letter portions of hexadecimals, I am certain I know how to do this now with using std:;strtol to assign new integer values to strings. I also streamlined all of my file reading to a function caled "HexToFile" because in my original project I read it line by line in int main. Most of the changes for this deliverable are in the function ColorAnalysis. On this deliverable I was able to read the hexadecimal values from the .txt file much more professionally as I did not assign a value to everysingle number and instead separated them by color on each line. I then used those variables in the same function to switch them to RGB values and decifer whether those RGB shades were suitable to be seen by people with colorblindness. I also specified what colors and levels are able to be seen and by people of each type of colorblindness.

## Developer

Liam Rapp

## Example

To run the program, give the following commands:

```
g++ --std=c++11 main.cpp -o cvp
./cvp
```

Here is an example of the program running:

```
What Hexadecimal would you like to analyze, or enter Q to quit?
445566
The hexadecimal value for each color is: 
Red: 44
Green: 55
Blue: 66
The RGB value of each color is:
Red: 68
Green: 85
Blue: 102
This color is unacceptable to all three types color blindness due to its high levels of green and red.
```

## C++ Guide

### Variables and Data Types

I used variables such as strings, integers, and an fstream file reader. I used the strings for the most part to handle the intake and translation of the original hexadecimal string. Then I used my file reader to input strings into a text file and to read them back out later in the program. I used my long ints to convert my hexadecimal string to integer.  

### Input and Output

!!!Replace with a summary and examples of how input and output have been used effectively and appropriately!!!

### Decisions

I mainly on based my program off of three decisions even though it should be more since I am not making a decision for characters in the string and if they are correct. I used first an If statement to check if my file reader was actually open and could translate data. Then I used two if statements to make variable decisions on whether the hexadecimal had too much red or green in it my saying if red and green combind are more than blue its too much color.

### Iteration

I used a do while loop in the main function to make sure that the user is able to analyze multiple hexadecimals without having to run the program everytime. 

### File Input and Output

I used the std::string out function to write my hexadecimal string to a text file called "hexadecimal.txt". Within that I wrote every twp characters out onto each line so I could work with individual colors easier when it came to getting integers. To read from the file I used an fstream reader called fileR to read each line with the getline() function then store each line as its own string. Each string represented a color in RGB.

### Arrays/Vectors

 I have a vector to contain a list of all the hexadecimals that displays when the program has quit to remind the person which hexadecimals were analyzed within that run period.  

### Functions

In this program I used 3 functions in total called "void HexToFile (string)" , "long int ColorAnalysis()" , and "string HexIn();". I used 3 different return types, a void to write a sring to a .txt file, so that I could convert the strings in the .txt file to integers, and a string return so that I could an input hexadecimal to use in other functions. I used two functions that were lacking parameters because their main purpose was tow either cin a hexadecimal or cout the anaylzed color values. For my second parameter type I used a string to take whatever was written in HexIn() and write it to the .txt file. I passed the string in HexToFile by value so that the value of the string hexadecimal would change everytime a new value for HexIn() was called.

### Classes

In my class I used two private variables; string hex and a vector of strings called hexlist. I used these so that the values for which hexadecimals you input and have analyzed cannot be modified or used at all in the main function. I did this to have some control over which variables could be modified where. In my class I have four functions; string HexIn() void HexToFile (string) long int ColorAnalysis() and void HexQuitDisplay(). The HexIn() function and HexQuitDisplay() are the only two that handle private class member variables. 
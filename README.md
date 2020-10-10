# Colorblindness Text Corrector

## Description

In this porgram I decided that I wanted to create a program that takes in a certain hexadecimal number and will decide wether or not that was a good color for someone red/green colorblind. I did this by file writing the hexadecimal into a text file I called hexademical.txt. Here I listed every number on its own line so that I could manipulate specific characters with it easier with loops later on.I then used getline to read every number and store that in a string. Then i converted those strings to integers. With some simple hexadecimal math showed the color levels of each color by multiplying the first numbers of each color by 16 and adding the second number. Unfortunately I was unable to show asnwers for the alphabetical characters so its not exactly hexadecimal, but I tried my best to create a working program for hexadecimals without letters. 

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
What Hexadecimal would you like to check for suitabilty?
665544
The color levels in R.G.B are 
Red: 102
Green: 65
Blue: 68
This would not be suitable for someone who is red/green colorblind.
```

## C++ Guide

### Variables and Data Types

I used variables such as strings, integers, and an fstream file reader. I used the strings for the most part to handle the intake and translation of the original hexadecimal string. Then I used my file reader to input strings into a text file and to read them back out later in the program. I used my integers for arithmetic and was able to convert my strings to integers using the std::stoi function. 

### Input and Output

!!!Replace with a summary and examples of how input and output have been used effectively and appropriately!!!

### Decisions

I mainly on based my program off of three decisions even though it should be more since I am not making a decision for characters in the string and if they are correct. I used first an If statement to check if my file reader was actually open and could translate data. Then I used two if statements to make variable decisions on whether the hexadecimal had too much red or green in it my saying if red and green combind are more than blue its too much color.

### Iteration

None unfortunately.

### File Input and Output

I used the std::string out function to write my hexadecimal string to a text file called "hexadecimal.txt". Within that i printed each character to its own line. After that I used a file reader called "fileR" to read each line separately and store it in different strings. I know i should have used a for loop iteration to store the character and do math with each line but I could never get it to fully compile so I opted for this version that works only with numbers.
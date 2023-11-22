
#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <string.h>

using namespace std;

//The helper function used to take a character in and output the bacon code
const char* englishTobacon(char in)
{
  if(in == 'a' || in == 'A') {
    return "aaaaa\0";

  } else if(in == 'b' || in == 'B') {

    return "aaaab\0";

  } else if(in == 'c' || in == 'C') {

    return "aaaba\0";

  } else if(in == 'd' || in == 'D') {

    return "aaaba\0";

  } else if(in == 'e' || in == 'E') {

    return  "aaabb\0";

  } else if(in == 'f' || in == 'F') {

    return "aabaa\0";

  } else if(in == 'g' || in == 'G') {

    return "aabba\0";

  } else if(in == 'h' || in == 'H') {

    return ".aabbb\0";

  } else if(in == 'i' || in == 'I') {

    return "abaaa\0";

  } else if(in == 'j' || in == 'J') {

    return "abaab\0";

  } else if(in == 'k' || in == 'K') {

    return "abab\0"; 

  } else if(in == 'l' || in == 'L') {

    return "ababb\0";

  } else if(in == 'm' || in == 'M') {

    return "abbaa";

  } else if(in == 'n' || in == 'N') {

    return "abbab\0";

  } else if(in == 'o' || in == 'O') {

    return "abbba\0";

  } else if(in == 'p' || in == 'P') {

    return "abbbb\0";

  } else if(in == 'q' || in == 'Q') {

    return "baaaa\0";

  } else if(in == 'r' || in == 'R') {
    return "baaab\0";


  } else if(in == 's' || in == 'S') {

    return "baaba\0";

  } else if(in == 't' || in == 'T') {

    return "baabb\0";

  } else if(in == 'u' || in == 'U') {

    return "babaa\0";

  } else if(in == 'v' || in == 'V') {

    return "babab\0";

  } else if(in == 'w' || in == 'W') {

    return "babba\0";

  } else if(in == 'x' || in == 'X') {

    return "babbb\0";

  } else if(in == 'y' || in == 'Y') {

    return "bbaaa\0";

  } else if(in == 'z' || in == 'Z') {
    
    return "bbaab\0";
  } 
  return "!!!!!\0";
}

//This function takes the english line of char and translates it into the bacon code
char baconToEnglish(const char* line)
{
  if (line[0] == 'a' && line[1] == 'a' && line[2] == 'a' && line[3] == 'a' && line[4] == 'a') {
    return 'A';

  } else if(line[0] == 'a' && line[1] == 'a' && line[2] == 'a' && line[3] == 'a' && line[4] == 'b') {
    return 'B';

  } else if(line[0] == 'a' && line[1] == 'a' && line[2] == 'a' && line[3] == 'b' && line[4] == 'a') {
    return 'C';

  } else if(line[0] == 'a' && line[1] == 'a' && line[2] == 'a' && line[3] == 'b' && line[4] == 'b') {
    return 'D';

  } else if(line[0] == 'a' && line[1] == 'a' && line[2] == 'b' && line[3] == 'a' && line[4] == 'a') {
    return 'E';

  } else if(line[0] == 'a' && line[1] == 'a' && line[2] == 'b' && line[3] == 'a' && line[4] == 'b') {
    return 'F';

  } else if(line[0] == 'a' && line[1] == 'a' && line[2] == 'b' && line[3] == 'b' && line[4] == 'a') {
    return 'G';

  } else if(line[0] == 'a' && line[1] == 'a' && line[2] == 'b' && line[3] == 'b' && line[4] == 'b') {
    return 'H';

  } else if(line[0] == 'a' && line[1] == 'b' && line[2] == 'a' && line[3] == 'a' && line[4] == 'a') {
    return 'I';

  } else if(line[0] == 'a' && line[1] == 'b' && line[2] == 'a' && line[3] == 'a' && line[4] == 'b') {
    return 'J';

  } else if(line[0] == 'a' && line[1] == 'b' && line[2] == 'a' && line[3] == 'b' && line[4] == 'a') {
    return 'K';

  } else if(line[0] == 'a' && line[1] == 'b' && line[2] == 'a' && line[3] == 'b' && line[4] == 'b') {
    return 'L';

  } else if(line[0] == 'a' && line[1] == 'b' && line[2] == 'b' && line[3] == 'a' && line[4] == 'a') {
    return 'M';

  } else if(line[0] == 'a' && line[1] == 'b' && line[2] == 'b' && line[3] == 'a' && line[4] == 'b') {
    return 'N';

  } else if(line[0] == 'a' && line[1] == 'b' && line[2] == 'b' && line[3] == 'b' && line[4] == 'a') {
    return 'O';

  } else if(line[0] == 'a' && line[1] == 'b' && line[2] == 'b' && line[3] == 'b' && line[4] == 'b') {
    return 'P';

  } else if(line[0] == 'b' && line[1] == 'a' && line[2] == 'a' && line[3] == 'a' && line[4] == 'a') {
    return 'Q';

  } else if(line[0] == 'b' && line[1] == 'a' && line[2] == 'a' && line[3] == 'a' && line[4] == 'b') {
    return 'R';

  } else if(line[0] == 'b' && line[1] == 'a' && line[2] == 'a' && line[3] == 'b' && line[4] == 'a') {
    return 'S';

  } else if(line[0] == 'b' && line[1] == 'a' && line[2] == 'a' && line[3] == 'b' && line[4] == 'b') {
    return 'T';

  } else if(line[0] == 'b' && line[1] == 'a' && line[2] == 'b' && line[3] == 'a' && line[4] == 'a') {
    return 'U';

  } else if(line[0] == 'b' && line[1] == 'a' && line[2] == 'b' && line[3] == 'a' && line[4] == 'b') {
    return 'V';

  } else if(line[0] == 'b' && line[1] == 'a' && line[2] == 'b' && line[3] == 'b' && line[4] == 'a') {
    return 'W';

  } else if(line[0] == 'b' && line[1] == 'a' && line[2] == 'b' && line[3] == 'b' && line[4] == 'b') {
    return 'X';

  } else if(line[0] == 'b' && line[1] == 'b' && line[2] == 'a' && line[3] == 'a' && line[4] == 'a') {
    return 'Y';

  } else if(line[0] == 'b' && line[1] == 'b' && line[2] == 'a' && line[3] == 'a' && line[4] == 'b') {
    return 'Z';

  } else if(line[0] == '!' && line[1] == '!' && line[2] == '!' && line[3] == '!' && line[4] == '!') {
    return '#';

  } else if(line[0] == '/') {
    return ' ';

  }
  return '%';
}

int main(int a, char* b[]) 
{
  //prints the error for invalid file commands
  if(b[1] == NULL) 
  {
    cout << "Error -- usage: <exe> <input file> <-bc|-e> <output file> " << endl;
  }

  if((strcmp(b[2],"-bc") != 0) && (strcmp(b[2],"-e") != 0) && (strcmp(b[2],"-bcx") != 0) && (strcmp(b[2],"-ex") != 0)) 
  {
    cout << "Error -- usage: <exe> <input file> <-bc|-e> <output file> " << endl;
  }

  if(b[3] == NULL) 
  {
    cout << "Error -- usage: <exe> <input file> <-bc|-e> <output file> " << endl;
  }

  //when -bc is typed as the command the statement runs
  if(strcmp(b[2], "-bc") == 0 || strcmp(b[2], "-x") == 0)
  {

    ifstream infile1;    //this opens the input file and the output file
    infile1.open(b[1]);
    ofstream outfile1;
    outfile1.open(b[3]);
    
    char* str1 = new char[255]; // has a max of 255 characters
    while(infile1.getline(str1,255,'\n')) 
    {  
      int index = 0;
      int spaces = 0;
      
      for(int x = 0; x < strlen(str1); x++) //determines the number of spaces in a given line
      {
	if(str1[x] == ' ')
	{
	  spaces++;
        }
      }

      int count = strlen(str1) - spaces;
      char* wd;
      wd = strtok(str1," ");
      while(wd != NULL)
      {
	for(int x = 0; x < strlen(wd); x++)
	{
	  
	  if(strcmp(b[2], "-bc") == 0) 
	  {
	    outfile1 << englishTobacon(wd[x]);
	  }
	
	  index++;
	  if(index != count) // this statement adds a "|" after every word
       	  {
	    outfile1 << '|';
	  }
	}
        wd = strtok(NULL," ");
	if(index != count) // this statement adds a "/" for the spaces
        {
	  outfile1 << '/' << '|';
	}
      }
      outfile1 << '\n';
    }
    infile1.close();
    outfile1.close();
    delete[] str1;
    
    //this prints out the outputs required for the assignment
    cout << "> bacon " << b[1] << " " << b[2] << " " << b[3] << '\n';
    cout << "Translating " << b[1] << " to bacon code." << '\n';
    cout << b[3] << " file completed." << '\n';  
  }
  
  // this statement will run when -e and -ex command are typed
  if((strcmp(b[2], "-e") == 0) || (strcmp(b[2], "-ex") == 0)){
    ifstream infile2;  //can open the input or ouput file depending on command given
    infile2.open(b[1]); 
    ofstream outfile2;
    outfile2.open(b[3]);
//string starting with 255 chars
    char* str1 = new char[255]; 
    while (infile2.getline(str1, 1785, '\n')) 
    { //runs until no new lines are found
      char* wd1;
      wd1 = strtok(str1, "|"); 
      while (wd1 != NULL) //tokenizing string to bacon codes with delemiter | 
      {
//determines the function to turn from bacon code to string
	if(strcmp(b[2], "-e") == 0) {
	  outfile2 << baconToEnglish(wd1);
	}   

	wd1 = strtok(NULL, "|");
      }
      outfile2 << '\n';
    }
    infile2.close();
    outfile2.close();
    delete[] str1;
    
    // outputs the prompt required by the assignment
    cout << "> bacon " << b[1] << " " << b[2] << " " << b[3] << '\n';
    cout << "Translating " << b[1] << " to English.\n";
    cout << b[3] << " file completed." << '\n';
  }
  //end of function main.
  return 0; 
}

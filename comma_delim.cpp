#include<iostream>
#include<vector>
#include<sstream>
#include<fstream>

using namespace std;




int main() 
{
   ifstream myReadFile;
   
   myReadFile.open("/home/reshu/board.txt"); //open the file

   char output[100];
   char str[255];
   if(myReadFile.is_open()){
  

    while(myReadFile) {
    myReadFile.getline(output, 255, ',');  // delim defaults to '\n'

    

    if(myReadFile){
       vector<string> result;
       stringstream s_stream(output);
       result.push_back(output);
       std::cout << output<< endl;
          


    }
    
        
   }
    

  }
   }




  
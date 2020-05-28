#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>

using namespace std;
using std::ifstream;


std::vector<int> GetValues(std::wstring s, wchar_t delim)
{
    std::vector<int> v;
    std::wstring i;
    std::wstringstream ss(s);
    while(std::getline(ss,i,delim))
    {
        std::wstringstream c(i);
        int x;
        c >> x;
        v.push_back(x);
        cout << x;
    }

    return v;
}

void readBoardFile(string path)
{
    ifstream infile;
    infile.open(path);

    if(!infile.is_open())
    {
        std::cerr << "Error opening the file \n";
    }

    std::string str;

    while(infile){
        GetValues(std::wstring s, wchar_t delim);
    }

    // while(infile)
    // {
    //     //std::cout<<"IN";

    //     std::vector<string> v;
    //     std::wstring word;
    //     std::wstringstream ss(s);
    //     //string word;
    //     //int value;
    //     //std::vector <string> ParseLine;
    //     char delim = ',';
    //     //std::getline(infile, str);
    //     //std::cout << str <<"\n";
    //     //stringstream ss(str);

    //     //std::getline(ss, word, delim);

    //     while(std::getline(ss, delim))
    //     {
    //         std::wstringstream c(word);
    //         string x;
    //         cout << "something";
    //         //c >> x;
    //         v.push_back(x);
    //         std::cout << x << endl;
    //     }

    //     //ParseLine.push_back(word);

    //     //std::cout << word << "\n";

    // // std::vector<int> v;
    // // std::wstring i;
    // // std::wstringstream ss(s);
    // // while(std::getline(ss,i,delim))
    // // {
    // //     std::wstringstream c(i);
    // //     int x;
    // //     c >> x;
    // //     v.push_back(x);
    

    //return v;

        
    
}




int main()
{

    string read_file;
    read_file = "/home/reshu/board.txt";
    readBoardFile(read_file);

    char delim = ',';
    GetValues(std::wstring s, wchar_t delim);

}

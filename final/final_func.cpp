#

#include <iostream>
#include <bits/stdc++.h> 
#include <stdio.h>
#include <stdlib.h>
#include <cstdlib>
#include <fstream>
#include <sstream>
#include <string>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <math.h>
#include <thread>
#include <chrono>
#include <iterator>
#include <string>
#include <vector>
#include <fstream>
#include <sstream>
#include <stdexcept>
#include <cerrno>
#include <cstring>
#include <dirent.h>
#include <time.h>
#include <unistd.h>


using std::string;
using namespace std;


    /**
     *  @brief  function to remove char
     */


   char* RemoveChar(char* input)
    {
        char* dest = input;
        char* src = input;
     
        while(*src)
        {
            if (isdigit(*src)) {*dest++ = *src++; continue; }
     
            src++;
        }
        *dest = '\0';
        return input;
    }


      /**
     *  @brief  function to remove digits
     */

 
     
    char* RemoveDigits(char* input)
    {
        char* dest = input;
        char* src = input;
    
        while(*src)
        {
            if (isdigit(*src)) { src++; continue; }
            *dest++ = *src++;
        }
        *dest = '\0';
        return input;
    }
     
     

void getStream(string filename){

  std::ifstream ifs;

  ifs.open (filename, std::ifstream::in);

  char c = ifs.get();

  while (ifs.good()) {
    std::cout << c;
    c = ifs.get();
  }

  ifs.close();

}


     /**
     *  @brief  Bash based func.
     */


    void readwrite(){
        FILE *fp = fopen("/home/reshu/res.txt","rb");
        double x=0.0;
        std::vector<double> vect; 

        while(1){
            int r = fscanf(fp, "%lf\n",&x);
            if (r == EOF)
                break;

            vect.push_back(x);

            //cout << x << " "<<endl; 
        }

        return vect;
        fclose(fp);
}

void average_vector(std::vector vect){

    float average = accumulate( vect.begin(), vect.end(), 0.0)/vect.size();

    return average;

}


    /**
     *  @brief  CPU Monitoring
     */

   void CpuFreq_WithBash(char filepath){
       system("lscpu | grep 'CPU MHz' | awk '{ print $3 }' > 'filepath'");
       readwrite();
     }



    void getCoreIdleStatus_WithBash(char filepath){
        system("mpstat -P ALL | awk '{ print $13 }' | awk 'NR > 3 { print }' > 'filepath'");
        readwrite();



    }

    void getCoreTemp_WithBash(char filepath){
        system("sensors | grep 'Core' | cut -d' ' -f10- | sed 's?(.*??' | sed 's?°.*??' | cut -b 1-3 | cut -b 1 --complement > 'filepath'");
        readwrite();
}

    void getCoreIdlePercentage_WithBash(char filepath){
        system("grep 'cpu ' /proc/stat | awk '{usage=($2+$4)*100/($2+$4+$5)} END {print usage}' > 'filepath'");
        readwrite();
    }

    void AverageLoadStatus_WithBash(){
        system("uptime |  cut -b 1-45 --complement > 'filepath'");

        FILE *fp = fopen(filepath,"rb");
        double x=0.0;
        //std::vector<double> vect; 

   ifstream myReadFile;
   
   myReadFile.open(filepath); //open the file

   char output[100];
   char str[255];
   if(myReadFile.is_open()){
  

    while(myReadFile) {
    myReadFile.getline(output, 255, ',');  // delim defaults to '\n'

    

    if(myReadFile){
       vector<string> result;
       stringstream s_stream(output);
       result.push_back(output);
       //std::cout << output<< endl;
          


    }
    
    }
    
}
        
}

     /**
     *  @brief  HDD Monitoring
     */

    void getDiskSpaceReading_WithBash(char filepath){ //space in GB
        system("df -h --total | grep total | awk '{ print $2 }' | cut -b 1-3 > 'filepath'");
        readwrite();
    }

    void getDiskName_WithBash(char filepath){
        system("df | grep -o '^/dev[^ ]*' > 'filepath'");
        readwrite();
    }

    void getDiskSize(char filepath){
         system("df -h | awk '{ print $2 }' > 'filepath'"); //Remove M,G - convert all to G and average,

    }

    void getAvailableSize(char filepath){
        system("df -h | awk '{ print $4 }' | sed '1d > 'filepath'"); //Remove M,G - convert all to G and average,
    }
    
    void UsedSize(){
        string line;
        string name1 = "G";
        string name2 = "M";
        string name3 = " ";
        system("df -h | awk '{ print $3 }' | sed '1d' > /dev/null"); //Remove M,G - convert all to G and average
        freopen("/dev/null", "rb", stdin); 
        while(std::getline(cin, line)){
            //search line by line
            if (line.compare(0, name3.size(), name3) == 0){ //CASE 1
                //slice the strings
                istringstream buf(line);
                istream_iterator<string> beg(buf), end;
                vector<string> values(beg, end);
            
                result = (stof(values[0]));

                break;
            }

            else if (line.compare(0, name2.size(), name2) == 0){
                RemoveChar();
            }

            else (line.compare(0, name1.size(), name1) == 0){ //remove name1, multiply by 1024
                RemoveChar();
                //push into vectors
                istringstream buf(line);
                istream_iterator<string> beg(buf), end;
                vector<string> values(beg, end);
            
                result = (stof(values*1024));

                break;

                
                
            }

        }
        
    }

    void MountPoint(){
        system("df -h | awk '{ print $6 }' | sed '1d'"); //put in vector of strings
    }

    /**
     *  @brief  ntp monitoring
     */

    void getNTPOffset_WithBash(char filepath){

        system("ntpq -pn | cut -b 1-64 --complement | cut -b 1-6 | awk 'NR > 2 { print }' > 'filepath'");

          readwrite();

 }

    void getNtpVersion_WithBash(){
        char version = system("ntpd --version | cut -b 1-21");
        cout << version;



    }

    void getNtpTime_WithBash(){
        char time = system("ntpstat | awk 'NR > 1 { print }' | awk 'NR < 2 { print }'");
        cout<<time;
    }

    void getNtpLeap_WithBash(char filepath){
        system("ntpq -c 'rv 0 leap' | cut -b 1-5 --complement > 'filepath'");


          readwrite();
    }

    void getNtpRootDelay_WithBash(char filepath){
        system("ntpq -c 'rv 0 rootdelay' | cut -b 1-10 --complement > 'filepath'");

          readwrite();

        
    }

    void getNtpError(){

    }

      /**
     *  @brief  Network Monitor
     */

    void getMTU_WithBash(char filepath){
        system("cat /sys/class/net/enp2s0/mtu  > 'filepath'"); //other method with File I/O

        readwrite();
    }

    void getTxErrors(){
        system("")

    }

    void getRxErrors(){

    }

    void getSignalNoise(char filepath){
        system("cat /proc/net/wireless | sed '1d' | sed '1d' | awk '{ print $5 }' > 'filepath'");
        readwrite();

    }

    void  getSignalQuality(char filepath){ //signal quality level
        system("cat /proc/net/wireless | sed '1d' | sed '1d' | awk '{ print $4 }' > 'filepath'");
        readwrite();

    }

    void getNetworkState(){ //Whats it? //get network state , wheather connected to lan or not

    }

    void getWifiSignalStrength(){

        //Integrate with --> watch -n1 "awk 'NR==3 {print \"WiFi Signal Strength = \" \$3 \"00 %\"}''' /proc/net/wireless"


    }


  /**
     *  @brief Without bash script, direct cpp
     */

 /**
  *  @brief [ CPU Monitoring ]
*/

void CPUFreq(){

    string line;
    //Declaring search attribute for the file
    string name = "cpu MHz";
    string value;
    float result;
    ifstream file; 
    string filename; 
    

    freopen("/proc/cpuinfo", "rb", stdin);


    while(std::getline(cin, line)){
        //Search line by line
        //cout << line << endl;
        if (line.compare(0, name.size(), name) == 0) {
            //slicing string line on ws using sstream
            istringstream buf(line);
            istream_iterator<string> beg(buf), end;
            vector<string> values(beg, end);
            //result
            result = (stof(values[3]));
            //std::cout << result << endl;
            
            break;

        }
    }
   //return to_string(result);

}

void CoreClockSpeed(){

}


int main()
{    
   

    //string filepath = "/proc/cpuinfo";
    //getStream(filename);

    auto t1 = std::chrono::high_resolution_clock::now();
    
    //CPUFreq();
    //CpuFreq_WithBash();

    auto t2 = std::chrono::high_resolution_clock::now();

    auto duration = std::chrono::duration_cast<std::chrono::microseconds>( t2 - t1 ).count();

    std::cout << "duration is " << duration << endl;
    return 0;

   
}

#include<cstdio>
#include<iostream>

using namespace std;

int main(){
   freopen("/proc/cpuinfo", "rb", stdin);
   string line;
   while(getline(cin, line))
       cout << line << endl;
   return 0;
}

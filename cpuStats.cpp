 #include <iostream>
 #include <bits/stdc++.h> 
 using namespace std;
 #include <thread>





int main(int argc, char * argv[])
{
	std::vector<CPUData> entries1;
	std::vector<CPUData> entries2;

	// snapshot 1
	ReadStatsCPU(entries1);

	// 100ms pause
	std::this_thread::sleep_for(std::chrono::milliseconds(100));

	// snapshot 2
	ReadStatsCPU(entries2);

	// print output
	PrintStats(entries1, entries2);
	
	return 0;
}

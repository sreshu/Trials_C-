    #include <iostream>
    #include <bits/stdc++.h> 
    using namespace std;
    #include <thread>

    
     
    int main() {
     
    unsigned int nthreads = std::thread::hardware_concurrency();
     
    cout << nthreads <<endl; // gives no. of cores
    //create a dynamic arr of nthreads elem

    // Create a vector of size n with 
    // all values as 10
    vector<int> vect(nthreads, 10); 
  
    //for (int x : vect) 
        //cout << x << " "<<endl; 

    float average = accumulate( vect.begin(), vect.end(), 0.0)/vect.size();              
    cout << "The average is " << average << endl;

  
 	return 0;
    }
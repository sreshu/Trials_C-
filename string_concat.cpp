    #include <iostream>
    using namespace std;
     
    int main() {
    	// your code goes here
     
    	string init("cpu");
        string add(" ");
        string add1("MHz");
        string name = init.append(add).append(add1);
        cout << name << endl;
    	return 0;
    }

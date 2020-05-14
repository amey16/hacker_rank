#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
	// Complete this function
    vector<int> ab;
    stringstream ss(str);
    int a;
    char ch;
    if(ss>>a)
        ab.push_back(a);
    while(ss>>ch>>a){
        ab.push_back(a);
    }
    return ab;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}

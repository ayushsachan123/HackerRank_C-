#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
  string s1,s2;
  cin>>s1>>s2;
  int a=s1.length();
  int b=s2.length();
  cout<<a<<" "<<b<<endl;
  string c=s1+s2;
  cout<<c<<endl;
 string temp;
    temp = s1[0];
    s1[0] = s2[0];
    s2[0] = temp[0];
    std::cout << s1 << " " << s2;
    return 0;
}

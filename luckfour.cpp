#include<iostream>
using namespace std;
int main(){
  int t;
  cin >> t;
  for(int i = 0 ; i < t ; i++){
    string s;
    cin >> s;
    const char* cstr = s.c_str();
    int res = 0;
    for(int j = 0 ; j < s.size() ; j++){
      if(cstr[j] == '4')
	res++;
    }
    cout << res << endl;
  }
  return 0;
}

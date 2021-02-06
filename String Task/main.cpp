#include <iostream>
using namespace std;

int main() {
	string w,word2;
	cin>>w;
	for(int i=0;i<w.length();i++){
		w[i]=tolower(w[i]);
	}
                           	//"A", "O", "Y", "E", "U", I
	for(int i=0;i<w.length();i++){
			if(w[i]=='a'||w[i]=='o'||w[i]=='u'||w[i]=='e'||w[i]=='y'||w[i]=='i'){
				continue;


			}
			else{
				word2+='.';
				word2+=w[i];

			}



		}
	cout<<word2;
	return 0;
}

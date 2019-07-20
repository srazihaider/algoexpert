#include <iostream>
#include <vector>
using namespace std;

vector<int> getNthFib(int n ) {
  // Write your code here.
	vector <int> fabo;
	int prev1=0;
	int prev2=0;
	
	for(int i = 0 ; i<n;i++)
		{
			if(i==0) {fabo.push_back(0);}
			else if(i==1) fabo.push_back(1);
			else {
				prev1= fabo[i-1];
				prev2= fabo[i-2];
				
				fabo.push_back(prev1 + prev2);
			
			}
		
		}
		
	return fabo;
}



int main(int argc, char *argv[]) {
	std::cout <<"Fabanachi series  is :"<<endl;
	vector <int> fabovector = getNthFib(20);
	cout<< "{";
	for(int i = 0; i<fabovector.size();i++)
	{
		cout<<fabovector[i];
		if(i!=fabovector.size()-1)
		cout<<",";


	}
	cout<< "}"<<endl;
}

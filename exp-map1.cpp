#include <iostream>
#include <map>
#include <cmath>

using namespace std;

int main(){

	cout << "\e[1;1H\e[2J";

	map<int, float> f;

	f[-3] = 0.5	;		
	f.insert(pair<int, float> (2, 3.14));
	f.insert(make_pair(6, 11));
	f[0]  = -1.2;
	f[6]  = exp(1.);

	cout << "Calling an undefined element: " << f[5] << endl;

	f.erase(5);

	for (int k=0; k<10; k++) {
		cout << "The value of f[" << k << "] is ";

		if (f.count(k) > 0) {
			cout << f[k] << endl;
		}
		else {
			cout << "undefined" << endl;
		}		
	}

	cout << endl;

	cout << "There are " << f.size() << " ordered pairs held in f" << endl << "They are: ";

	map<int,float>::iterator mi; // mi is a <pair>

	for (mi = f.begin(); mi != f.end(); mi++){		
		cout << "(" << (*mi).first << ", " << (*mi).second << ") ";
	}

	cout << "\n\n";

	f.erase(f.begin(), f.find(2));

	cout << "There are " << f.size() << " ordered pairs held in f" << endl << "They are: ";

	for (mi = f.begin(); mi != f.end(); mi++){		
		cout << "(" << (*mi).first << ", " << mi->second << ") ";
	}

	cout << endl;

	/*
	
	multiset & multimap...

	*/

	return 0;
}
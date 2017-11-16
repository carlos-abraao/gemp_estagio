#include <iostream>
#include <utility> 
#include <string> 

using namespace std;
 
int main(){

    pair <string, int> g1;
    pair <string, int> g2("Teachers", 3);
    pair <string, int> g3(g2); 
    g1 = make_pair("Slaves", 40);

    g2.first = "Tests";
    g2.second = 2;
 
    cout << "This is pair g1: " << g1.first << " " << g1.second <<  endl;
 
    cout << "This is pair g2: " << g2.first << " " << g2.second <<  endl;

    cout << "This is pair g3: " << g3.first << " " << g3.second <<  endl;    

    swap(g1, g2);

    cout << "After swapping, " << "g1 has " << g1.first << " and g2 has " << g2.first << endl;
 
    return 0;
}
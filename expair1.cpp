#include <iostream>
#include <utility> 
#include <string> 

using namespace std;
 
int main(){

    cout << "\e[1;1H\e[2J";

    pair <string, int> g1;
    pair <string, int> g2("Teachers", 3);
    pair <string, int> g3(g2); 
    g1 = make_pair("Slaves", 40);

    g2.first  = "Tests";
    g2.second = 2;
 
    cout << "This is pair g1: " << g1.first << " " << g1.second <<  endl;
 
    cout << "This is pair g2: " << g2.first << " " << g2.second <<  endl;

    cout << "This is pair g3: " << g3.first << " " << g3.second <<  endl;

    swap(g1, g2);

    cout << "Depois de swap:\n" << "g1 = " << g1.first << "  g2 = " << g2.first << endl;

    //testes de comparação

    pair<int, int>pair1 = make_pair(1, 12);
    pair<int, int>pair2 = make_pair(9, 12);
 
    //sempre definidos
 
    cout << (pair1 == pair2) << endl;
    cout << (pair1 != pair2) << endl;

    //precisam de definiçõa pŕévia

    cout << (pair1 >= pair2) << endl;
    cout << (pair1 <= pair2) << endl;
    cout << (pair1 > pair2)  << endl;
    cout << (pair1 < pair2)  << endl;    
 
    return 0;
}
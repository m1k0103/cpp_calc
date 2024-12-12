#include <iostream>
#include <vector>
#include <sstream>
using namespace std;


vector<string> split(string input, char dl){ 
    stringstream s(input);
    string word;

    vector<string> output;

    int count = 0;
    while (getline(s, word, dl)){
        output.push_back(word);
    }
    //cout << typeid(output[1]).name();
    
    if (output.size() > 1){
        //cout << "second element: " << output[1] << "\n";
        //cout << "second element type: " << typeid(output[1]).name() << "\n";
        return output;
    } else{
        cout << "not enough elements in vector." << "\n";
    }
    
    return output;

}

//int main(){
//    string text = "hello world";
//    auto v = split(text, ' ');
//    
//    for (string i : v){
//        cout << &i << ' ';
//    };
//    cout << "\n";
//}

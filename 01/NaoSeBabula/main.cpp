#include <iostream>
#include <sstream>
using namespace std;

bool isVogal(char c){
    if(
        c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' ||
        c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'
    ) return true;
    
    return false;
}

int numSilabas(string s){
    int count = 0;
    
    for (int i = 0; i < (int) s.length(); i++) {
        if(i < s.length() - 1 && isVogal(s[i]) && !isVogal(s[i+1]))
            count++;
    }
    
    return count+1;
}

void printGagueira(string s){
    if(numSilabas(s) > 1){
        if(isVogal(s[0])){
                cout << s[0];
                cout << s[0];
                cout << s;
        }
        else if(isVogal(s[1]) && isVogal(s[2])){
            cout << s[0] << s[1] << s[2];
            cout << s[0] << s[1] << s[2];
            cout << s;
        }
        else if(!isVogal(s[1]) && isVogal(s[2]) && !isVogal(s[3])){
            cout << s[0] << s[1] << s[2];
            cout << s[0] << s[1] << s[2];
            cout << s;
        }
        else {
            cout << s[0] << s[1];
            cout << s[0] << s[1];
            cout << s;
        }
    } else
        cout << s;
}

int main(){
    string str;
    getline(cin, str);
    
    stringstream ss;
    ss << str;
    
    
    for (int i = 0; i < (int) str.length(); i++) {
        if(i == 0 || str[i] == ' '){
            if(i != 0)
                cout << " ";
                
            string temp;
            ss >> temp;
            printGagueira(temp);
        }
    }
}
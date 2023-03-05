#include <iostream>
#include <string>

using namespace std;
char a[5][6] =
        {
            {'A','B','C','D','E','F'},
            {'G','H','I','J','K','L'},
            {'M','N','O','P','Q','R'},
            {'S','T','U','V','W','X'},
            {'Y','Z'}
        };
void func1(string t){
    int l = 0;
    while(l < t.size()){
        for(int i = 0; i < 5; i++){
            for(int j = 0; j < 6; j ++){
                if(l >= t.size()) return ;
                if(a[i][j] == t[l]) {cout << i << j << ' '; l++;}
            }
        }
    }
}
void func2(string t){
    int i = 0, j = 1;

    while(j < t.size()){
        string  te = t.substr(i,1); string tp = t.substr(j,1);
//        cout << te << " " << tp << endl;
        int x = atoi(te.c_str()), y = atoi(tp.c_str());
        cout << a[x][y];
        i += 2;
        j += 2;
    }
}

int main(){

    string b;
    cout << "输入要加密的明文："  << endl;
    getline(cin, b);
    func1(b);

    cout << endl << "输入要解密的密文：" << endl;
    cin >> b;
    func2(b);
    return 0;
}
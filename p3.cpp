/**
 * @author  :  Soleil
 * @date    :  2023/2/15
*/
#include <iostream>
#include <string>


using namespace std;

void func1(int n, string s){

    for(char &c : s){
        if(c >= 'A' && c <= 'Z'){
            c = (c - 'A'  + n ) % 26 + 'A';
        } else{
            c = (c - 'a'  + n )% 26 + 'a';
        }
    }
    cout << s << endl;
}
void func2(int n, string s){
    for(char &c : s){
        if(c >= 'A' && c <= 'Z'){
            c = (c - 'A' - n + 26) % 26 + 'A';
        } else{
            c = (c - 'a' - n + 26) % 26 + 'a' ;
        }
    }
    cout << s << endl;
}
int main(){

    int flag = 3;
    int n;
    cout << "请选择加密还是解密，加密为1， 解密为2, 退出程序为0 ：";
    while(cin >> flag && flag != 0){

        cout << "请输入key:" ;
        cin >> n;
        string s;
        if(flag == 1){
            cout << "请输入明文:";
            cin >> s;
            cout << "加密后为:";
            func1(n,s);
        }
        else if(flag == 2){
            cout << "请输入密文: ";
            cin >> s;
            cout << "解密后为: ";
            func2(n, s);
        }
        cout << "执行完毕" << endl;
        cout << "请选择加密还是解密，加密为1， 解密为2, 退出程序为0 ：";
    }
    return 0;
}
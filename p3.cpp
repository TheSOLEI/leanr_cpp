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
    cout << "��ѡ����ܻ��ǽ��ܣ�����Ϊ1�� ����Ϊ2, �˳�����Ϊ0 ��";
    while(cin >> flag && flag != 0){

        cout << "������key:" ;
        cin >> n;
        string s;
        if(flag == 1){
            cout << "����������:";
            cin >> s;
            cout << "���ܺ�Ϊ:";
            func1(n,s);
        }
        else if(flag == 2){
            cout << "����������: ";
            cin >> s;
            cout << "���ܺ�Ϊ: ";
            func2(n, s);
        }
        cout << "ִ�����" << endl;
        cout << "��ѡ����ܻ��ǽ��ܣ�����Ϊ1�� ����Ϊ2, �˳�����Ϊ0 ��";
    }
    return 0;
}
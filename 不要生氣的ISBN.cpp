//有點沒有照要求做
//千千萬萬不要生氣
//有想到怎麼做再補
#include <iostream>
using namespace std;


int main() {
    int num1 = 0;
    int num2 = 0;
    int num3 = 0;
    int num4 = 0;
    int num5 = 0;
    int num6 = 0;
    int num7 = 0;
    int num8 = 0;
    int num9 = 0;
    cout << "第一位數";
    cin >> num1;
    cout << "第二位數";
    cin >> num2;
    cout << "第三位數";
    cin >> num3;
    cout << "第四位數";
    cin >> num4;
    cout << "第五位數";
    cin >> num5;
    cout << "第六位數";
    cin >> num6;
    cout << "第七位數";
    cin >> num7;
    cout << "第八位數";
    cin >> num8;
    cout << "第九位數";
    cin >> num9;
    int num10 = (num1 * 1  +num2 * 2 + num3 * 3 + num4 * 4 + num5*5 + num6 * 6 + num7 * 7+ num8 * 8 + num9 * 9) % 11;

    cout << num1 << num2 << num3 << num4 << num5 << num6 << num7 << num8 << num9;
    
    if (num10 == 10){
        cout << "X";
      }else{
        cout << num10;
    }
    
}

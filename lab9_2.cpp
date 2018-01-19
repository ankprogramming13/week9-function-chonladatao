#include <iostream>
#include <iomanip>

using namespace std;

double circleArea  (double r){
    double result;
    result = 3.1416 * r * r;
    return result;
}


int main() {
    /* เขียนโปรแกรมรับค่ารัศมีวงกลมจากคีย์บอร์ด และหาพื้นที่ของวงกลมเป็นทศนิยม 4 ตำแหน่ง
    โดยกำหนดให้โปรแกรมหาพื้นที่ของวงกลม จนกว่าผู้ใช้งานต้องการออกจากการทำงานของโปรแกรม
    และกำหนดให้แบ่งการทำงานเป็นโปรแกรมย่อยอย่างน้อย 1 ฟังก์ชัน
    */

    double r;

    int cmd;
     do{
               cout << "Enter R :";
               cin >> r;
               cout << "Area :";
               cout << setprecision(4) << fixed << circleArea(r) << endl;
               cout << "Enter cmd :";
               cin >> cmd;

        }while(cmd != 2);


    return 0;
}

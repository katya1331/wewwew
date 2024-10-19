// mok.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "RU");
    int arr[10]={44,2,3,4,13,7,3,77,9,54};
    int min=arr[0];
    for (int i = 1; i <10;i++) 
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    cout << min << endl;



    int arr2[6][5] = { 
    { 44,2,3,4,13, } ,
    { 44, 2, 3, 4, 54 } ,
    { 7, 3, 77, 9, 54 } ,
    { 44, 2, 77, 9, 54 },
    {3, 4, 13, 9, 54 } ,
    {3, 4, 13, 9, 4 }
    };
    for (int i = 0; i < 6; i++)
    {
        int sum = 0;
        for (int aj = 0;aj < 5; aj++) 
        {
            sum += arr2[i][aj];
        }
        cout << sum<<endl;
    }
    cout <<endl;




    //struct Data{
    //    int day;
    //    int month;
    //    int year;
    //};
    //Data my;
    //cout << "ВВедите дату" << endl;
    //cout << "ВВедите год:";
    //cin >> my.year;
    //cout << endl;
    //if (my.year <= 0 || my.year >= 2024) {
    //    cout << "!!!";
    //    return 0;
    //}
    //else {
    //    cout << "ВВедите месяц:";
    //    cin >> my.month;
    //    cout << endl;
    //    if (my.month <= 0 || my.month >= 12) {
    //        cout << "!!!";
    //        return 0;
    //    }
    //    else {
    //        cout << "ВВедите день:";
    //        cin >> my.day;
    //        if (my.day <= 0 || my.day >= 31) 
    //        {
    //            cout << "!!!";
    //            return 0;
    //        }
    //        else {
    //            if (my.month = 2 && my.day > 29) {
    //                cout << "!!!";
    //                return 0;
    //            }else  cout << "Дата введена корректно" << endl;
    //        }
    //    }
    //}



    class Rectangle {
    private:
            int width;
            int height;
    public:
        Rectangle(int width, int height)
        {
            this->width = width;
            this->height = height;
        }
        void S(int width,int height) {
            cout << "Answer:";
            cout << width*height << endl;
        }

    };
    int width, height;
    cout << "ВВедите ширину" << endl;
    cin >> width;
    cout << "ВВедите длину" << endl;
    cin >> height;
    Rectangle myRec(width,height);
    myRec.S(width, height);
    return 0;
}
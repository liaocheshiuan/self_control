#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main()
{
    ofstream Write;
    Write.open("Diary.txt",ios::app);
    int year,mouth,day;
    cout<<"今天是什么日期："<<endl;
    cin>>year>>mouth>>day;
    Write<<year<<"年"<<mouth<<"月"<<day<<"日"<<endl;
    int i=1;
    string plan;
    cout<<"今天有什么想说的吗："<<endl;
    cout<<"("<<i<<")";
    cin>>plan;
    Write<<"今日感想:"<<endl;
    while(plan!="-1")
    {
        Write<<"("<<i++<<")"<<plan<<endl;
        cout<<"("<<i<<")";
        cin>>plan;
    }
    cout<<"今天又是充实的一天！！！"<<endl;

    while(i--)Write<<endl;

    getchar();
    return 0;
}

/*
multimap ������
1��keyֵ���Զ�Ӧ���valude = ����

��˾�����۲� sale(Ա��2��)�������з��� development��1�ˣ�������
Financial��2�ˣ�
//��Ա��Ϣ�У����������䡢�绰�����ʵ���ɡ�
//ͨ��multimap���� ��Ϣ�Ĳ��롢���桢��ʾ
//�ֲ�����ʾԱ����Ϣ��

*/


#include <iostream>

#include<map>

using namespace std;

class Person{

public:

    string name;

    int age;

    string tel;

    double saly;





};

void main1201(){

    Person p1,p2,p3,p4,p5;

    p1.name = "��1";
    p1.age  = 31 ;

    p2.name = "��2";
    p2.age  = 32 ;

    p3.name = "��3";
    p3.age  = 33 ;

    p4.name = "��4";
    p4.age  = 34 ;

    p5.name = "��5";
    p5.age  = 35 ;

  multimap<string,Person>map2;

   //sale ����
    map2.insert(make_pair("sale",p1));
    map2.insert(make_pair("sale",p2));


    //development ����
    map2.insert(make_pair("development",p3));
    map2.insert(make_pair("development",p4));

    //Financial����

    map2.insert(make_pair("Financial",p5));


    for (multimap<string,Person>::iterator it = map2.begin();it!=map2.end();it++){


        cout<<it->first<<"\t"<<it->second.name<<endl;

    }

   cout<<"��������"<<endl;

   int num2 = map2.count("development");



   cout<<"developement��������==>"<<num2<<endl;

   cout<<"development ����Ա����Ϣ"<<endl;

   multimap<string,Person>::iterator it2 = map2.find("development");

   int tag = 0;

   while(it2!= map2.end()&& tag<num2){


       cout<<it2->first<<"\t"<<it2->second.name<<endl;

       it2++;

       tag++;


   }


}


//age= 32�޸ĳ�name32.

void main1202(){

    Person p1,p2,p3,p4,p5;

    p1.name = "��1";
    p1.age  = 31 ;

    p2.name = "��2";
    p2.age  = 32 ;

    p3.name = "��3";
    p3.age  = 33 ;

    p4.name = "��4";
    p4.age  = 34 ;

    p5.name = "��5";
    p5.age  = 35 ;

  multimap<string,Person>map2;

   //sale ����
    map2.insert(make_pair("sale",p1));
    map2.insert(make_pair("sale",p2));


    //development ����
    map2.insert(make_pair("development",p3));
    map2.insert(make_pair("development",p4));

    //Financial����

    map2.insert(make_pair("Financial",p5));


    cout<<"�������� �������� �����޸�"<<endl;



    for (multimap<string,Person>::iterator it = map2.begin();it!=map2.end();it++){


       // cout<<it->first<<"\t"<<it->second.name<<endl;



            if(it->second.age== 32){

                it->second.name = "name32";

    }



    }

    for (multimap<string,Person>::iterator it = map2.begin();it!=map2.end();it++){


        cout<<it->first<<"\t"<<it->second.name<<endl;


}

   int num2 = map2.count("development");



   cout<<"developement��������==>"<<num2<<endl;

   cout<<"development ����Ա����Ϣ"<<endl;

   multimap<string,Person>::iterator it2 = map2.find("development");

   int tag = 0;

   while(it2!= map2.end()&& tag<num2){


       cout<<it2->first<<"\t"<<it2->second.name<<endl;

       it2++;

       tag++;

}

}
int main()
{
    //main1201();

    main1202();




    return 0;
}


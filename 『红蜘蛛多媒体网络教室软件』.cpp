#include <windows.h>
#include <iostream>
#include <fstream>
#include <stdio.h>
#include <cstdlib>
#include <tchar.h>
#include <string>
#include <io.h>
using namespace std;
int main(){
	int c,d;
	long long a,b=1145141919810114;
	ifstream fin("data.txt");
    if (fin.is_open()) {
        fin >> b;
        fin.close();
    }
	asd3:system("color 2");
    cout<<"By NDS STUDIO MC_BE" << endl;
    cout<<"=================================================================================="<<endl;
	cout<<" __  __  ____    ____        ____    ______  __  __  ____    ______   _____      "<<endl;
	cout<<"/\\ \\/\\ \\/\\  _`\\ /\\  _`\\     /\\  _`\\ /\\__  _\\/\\ \\/\\ \\/\\  _`\\ /\\__  _\\ /\\  __`\\    "<<endl;
	cout<<"\\ \\ `\\\\ \\ \\ \\/\\ \\ \\,\\L\\_\\   \\ \\,\\L\\_\\/_/\\ \\/\\ \\ \\ \\ \\ \\ \\/\\ \\/_/\\ \\/ \\ \\ \\/\\ \\  "<<endl;
	cout<<" \\ \\ , ` \\ \\ \\ \\ \\/_\\__ \\    \\/_\\__ \\  \\ \\ \\ \\ \\ \\ \\ \\ \\ \\ \\ \\ \\ \\ \\  \\ \\ \\ \\ \\  "<<endl;
	cout<<"  \\ \\ \\`\\ \\ \\ \\_\\ \\/\\ \\L\\ \\    /\\ \\L\\ \\ \\ \\ \\ \\ \\ \\_\\ \\ \\ \\_\\ \\ \\_\\ \\__\\ \\ \\_\\ \\ "<<endl;
	cout<<"   \\ \\_\\ \\_\\ \\____/\\ `\\____\\   \\ `\\____\\ \\ \\_\\ \\ \\_____\\ \\____/ /\\_____\\\\ \\_____\\"<<endl;
	cout<<"    \\/_/\\/_/\\/___/  \\/_____/    \\/_____/  \\/_/  \\/_____/\\/___/  \\/_____/ \\/_____/"<<endl;
	cout<<"==================================================================================="<<endl;
    cout<<"请稍后" <<endl;
    cout<<"更新地址：https://github.com/MCBE-NDS/Cyber-Classroom-Killer 自行查看更新"<<endl;
    cout<<"================================================================================"<<endl;
    cout<<"免责声明："<<endl;
    cout<<"1.请勿使用本软件扰乱课堂纪律(指用本软件做出一些不正当行为)，后果自负。"<<endl;
    cout<<"2.请勿非法传播此软件，后果自负。"<<endl;
    cout<<"3.出现的任何事故都不由作者本人及其工作室负责。"<<endl;
    cout<<"================================================================================"<<endl;
    asd1:cout<<"按1关闭学生端" << endl;
	cout<<"按2关连续关闭学生端" << endl;
	cout<<"按3退出"<<endl;
	cout<<"连续关闭可能会报错，不要担心"<<endl;
	cout<<"连续关闭时请保持程序运行"<<endl;
	asd:cin >> a;
	switch(a){
		case 1:
			cout<<"请稍后"<<endl;
			system("taskkill /im 『红蜘蛛多媒体网络教室软件』");
    		goto asd1;
			break;
		case 2:
			cout<<"请稍后"<<endl;
			system("taskkill /im 『红蜘蛛多媒体网络教室软件』"); 
			for (int i = 0 ; i >= 0 ; i++)
			{
				system("taskkill /im 『红蜘蛛多媒体网络教室软件』"); 
			}
			break;
    	case 3:
    		return 0;
    		break;
    	default:
    		if(a == b)
    		{
    			asd2:system("cls");
        		cout<<"您已进入管理员菜单"<<endl;
        		cout<<"1.GitHub开源地址"<<endl;
        		cout<<"2.开发人员名单"<<endl;
        		cout<<"3.关于软件"<<endl;
        		cout<<"4.更改管理员代码,默认1145141919810114"<<endl;
        		cin>>c;
        		if(c==1)
        		{
        			cout<<"https://github.com/MCBE-NDS/Cyber-Classroom-Killer"<<endl;
					cout<<endl<<endl<<"完成"<<endl;
					cout<<"按1回到管理员界面,按2回到用户界面"<<endl;
					cin>>d;
					if(d==1)goto asd2;
					if(d==2)
					{
						system("cls");
						goto asd3;
					}
				}
				else if(c==2)
				{
					cout<<"制作：MC_BE space.bilibili.com/330600964"<<endl;
					cout<<"思路提供：N98MC_DG2 space.bilibili.com/375692760"<<endl;
					cout<<"友情链接：http://files.ndsff.top"<<endl;
					cout<<endl<<endl<<"完成"<<endl;
					cout<<"按1回到管理员界面,按2回到用户界面"<<endl;
					cin>>d;
					if(d==1)goto asd2;
					if(d==2)
					{
						system("cls");
						goto asd3;
					}
				}
				else if(c==3)
				{
					cout<<"名称:红蜘蛛多媒体网络教室软件破解器"<<endl;
					cout<<"制作MC_BE"<<endl;
					cout<<"版本：V1.0.0.0 "<<endl;
					cout<<endl<<endl<<"完成"<<endl;
					cout<<"按1回到管理员界面,按2回到用户界面"<<endl;
					cin>>d;
					if(d==1)goto asd2;
					if(d==2)
					{
						system("cls");
						goto asd3;
					}
				}
				else if(c==4)
				{
					cin>>b;
					ofstream fout("data.txt");
    				if (fout.is_open())
					{
        				fout << b << endl;
        				fout.close();
					}
					cout<<endl<<endl<<"完成"<<endl;
					cout<<"按1回到管理员界面,按2回到用户界面"<<endl;
					cin>>d;
					if(d==1)goto asd2;
					if(d==2)
					{
						system("cls");
						goto asd3;
					}
				}
				break;
    		}
    		else
			{
				cout<<"宁 可 别 给 电 脑 输 奇 怪 的 东 西 啊 ！ ！"<<endl;
				cout<<"没有精神，重来！！"<<endl;
				goto asd;
				break;
			}
			break;
	}
	system ("pause");
}

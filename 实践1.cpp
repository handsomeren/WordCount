#include<fstream>
#include<iostream>
#include<string.h>
using namespace std;

int main(int argc,char *argv[])
{
	int count=0;
	char c;

	ifstream ifs;
	ifs.open(argv[2], ios::out);
	if (!ifs.is_open())
	{
		cout << "文件打开失败" << endl;
		return 0;
	}
	if(strcmp("-c", argv[1]) == 0||strcmp("-C", argv[1]) == 0)
	{
		while ((c = ifs.get()) != EOF) {
			if(c!='.'&&c!=' '&&c!=','&&c!='!'&&c!='?')
			{
				count++;
			}
		}
			cout<<"字符数："<<count<<endl;
	}	
	else if(strcmp("-w", argv[1]) == 0||strcmp("-W", argv[1]) == 0)
	{
		while ((c = ifs.get()) != EOF) {
			if(c=='.'||c==' '||c==','||c=='!'||c=='?')
			{
				count++;
			}
		}
		cout<<"单词数："<<count<<endl;
	}

 } 

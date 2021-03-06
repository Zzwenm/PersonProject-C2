// 入门提示: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件

#ifndef PCH_H
#define PCH_H

// TODO: 添加要在此处预编译的标头

#include<iostream>
#include<fstream>
#include <algorithm> 
#include<vector>
#include<string>
using namespace std;

typedef struct {
	string word;
	int num;
}words;

vector<words> v;

ofstream result("result.txt");

class myFile {
private:
	int character;
	int word;
	int line;
	string filename;
public:
	myFile();
	myFile(string s);
	void get_character();
	void get_word();
	void get_mostword();
	void get_line();
	void get_all();
	int get_characters() { get_character(); return character; }
	int get_words() { get_word(); return word; }
	int get_lines() { get_line(); return line; }
};
bool Delimiter(char a);//分隔符检测  字母数字符号ASC码：48-57 65-122
bool ch(char a);// 空白字符检测
bool myword(char a);//单词检测
bool digit(char a);// 判断是否为数字
bool dic_word(const string &a, const string &b);//字典排序
bool set_word(const words &a, const words &b);// 单词排序
#endif //PCH_H

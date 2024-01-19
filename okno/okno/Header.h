#pragma once
#include <string>
#include <vector>
#include <cmath>
#include<string>
using namespace std;
//��������� ������������ ���������
struct Expression {
	Expression(string token, Expression a, Expression b) :token(token), args{ a,b } {}
	Expression(string token) : token(token) {}
	Expression(string token, Expression a) : token(token), args{ a } {}
	//�������������� �������
	string token;
	//������ ����������
	vector<Expression> args;
};

//����� �������� ���������
class Parser {
public:
	explicit Parser(const char* nput) { input = nput; }
	Expression parse();
private:
	//������� ���������� ������
	string parse_token();
	//������� ��������� ���������
	Expression parse_binary_Expression(int min_priority);
	//������� �������� ���������
	Expression parse_simple_Expression();
	//������� ������
	const char* input;
};
//����� ��������������
class Integrate {
public:
	Integrate(string s, double a2, double b2, int par2) { in = s, a = a2, b = b2, par = par2; };
	//��������
	string in;
	//������� ��������������
	double a, b;
	//�������� ������ ��������������
	int par;
	//������� ���������� ���������� ���������� ��������
	double l_rec( double n);
	double �_rec( double n);
	double r_rec( double n);
	double trap( double n);
	double sim( double n);
	//������� �������� �� ����������
	bool check(double num, int t);
};
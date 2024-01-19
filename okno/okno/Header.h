#pragma once
#include <string>
#include <vector>
#include <cmath>
#include<string>
using namespace std;
//Структура разобранного выражения
struct Expression {
	Expression(string token, Expression a, Expression b) :token(token), args{ a,b } {}
	Expression(string token) : token(token) {}
	Expression(string token, Expression a) : token(token), args{ a } {}
	//Математическая функция
	string token;
	//Список аргументов
	vector<Expression> args;
};

//Класс парсинга выражения
class Parser {
public:
	explicit Parser(const char* nput) { input = nput; }
	Expression parse();
private:
	//парсинг одиночного токена
	string parse_token();
	//парсинг бинарного выражения
	Expression parse_binary_Expression(int min_priority);
	//парсинг унарного выражения
	Expression parse_simple_Expression();
	//Входная строка
	const char* input;
};
//Класс интегрирования
class Integrate {
public:
	Integrate(string s, double a2, double b2, int par2) { in = s, a = a2, b = b2, par = par2; };
	//интеграл
	string in;
	//отрезки интегрирования
	double a, b;
	//Параметр метода интегрирования
	int par;
	//Функции вычисления интегралов различными методами
	double l_rec( double n);
	double с_rec( double n);
	double r_rec( double n);
	double trap( double n);
	double sim( double n);
	//Функция проверки на сходимость
	bool check(double num, int t);
};
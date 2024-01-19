#include "Header.h"

int MAXSIZE = 100, Not_number = nan("1"), FLAG=0;
long double PI = 3.14159265359, INF = 100000000000, eps = 0.001;
long double Num,l,r;
//������� ���������� ������
string Parser::parse_token() {
	if (*input <-1 || *input>255)
	{
		return "";
	}
	while (isspace(*input))
	{
		++input;
		
	}

	if (isdigit(*input)) {
		string number;
		while (isdigit(*input) || *input == '.')
		{
			number.push_back(*input);
			input++;
			if (*input < -1 || *input>255)
			{
				return number;
			}
		}
		return number;

			
		
	}

	static const string tokens[] =
	{ "+", "-", "^", "*", "/", "abs", "sin", "cos", "(", ")","ln", "x"};
	for (auto& t : tokens) {
		if (strncmp(input, t.c_str(), t.size()) == 0) {
			input += t.size();
			return t;
		}
	}
	FLAG = 1;
	return "";
}
//������� �������� ���������
Expression Parser::parse_simple_Expression() {
	auto token = parse_token();
	if (token.empty()) FLAG = 1;

	if (token == "(") {
		auto result = parse();
		if (parse_token() != ")")
		{
			FLAG = 1;
		}
		return result;
	}
	if (FLAG == 1)
	{
		return token;
	}
	if (isdigit(token[0]))
		return Expression(token);

	return Expression(token, parse_simple_Expression());
}



//��������� �������
int get_priority(const string& binary_op) {
	if (binary_op == "+") return 1;
	if (binary_op == "-") return 1;
	if (binary_op == "*") return 2;
	if (binary_op == "/") return 2;
	if (binary_op == "^") return 3;
	return 0;
}
//������� ��������� ���������
Expression Parser::parse_binary_Expression(int min_priority) {
	// ������ ������� ���������
	auto left_expr = parse_simple_Expression();

	for (;;) {
		// ������� ������� �������� ��������
		auto op = parse_token();
		auto priority = get_priority(op);
		// ������� �� ����� ���� �� ��������� ������� ����� (��� ��� �� �������� ��������)
		if (priority <= min_priority) {
			input -= op.size();// ������ ����� �������
			return left_expr; // ���������� ��������� �����
		}
		// ������ ��������� ������. ������� �������� ������ ����������� ���������
		auto right_expr = parse_binary_Expression(priority);
		left_expr = Expression(op, left_expr, right_expr); // ��������� ��������� �����
	}
}


Expression Parser::parse() {
	return parse_binary_Expression(0);
}


//���������� �������� ������������ ���������
double eval(const Expression& e) {
	switch (e.args.size()) {
	case 2: {
		auto a = eval(e.args[0]);
		auto b = eval(e.args[1]);
		if (e.token == "+") return a + b;
		if (e.token == "-") return a - b;
		if (e.token == "*") return a * b;
		if (e.token == "/") return a / b;
		if (e.token == "^")
		{
			//�������� �� ���������� ����� �������� ������� �� �������������� �����
			if (a < 0 && (int)(1/b)%2==1)
			{
				return -pow(-a, b);
			}
			else
			{
				return pow(a, b);
			}
			
		}
		FLAG = 1;
		return 0;
	}

	case 1: {
		auto a = eval(e.args[0]);
		if (e.token == "+") return +a;
		if (e.token == "-") return -a;
		if (e.token == "abs") return abs(a);
		if (e.token == "sin") return sin(a);
		if (e.token == "cos") return cos(a);
		if (e.token == "ln") return log(a);
		FLAG = 1;
		return 0;
	}

	case 0:
		return strtod(e.token.c_str(), nullptr);
	}

	FLAG = 1;
	return 0;
}
// ������� ����������� ����� � � ��������� 
double parsing(string s, double a)
{
	string  s1;
	for (int i = 0; i < s.size(); i++)
	{
		if (s[i] == 'x')
		{
			string s2 = to_string(a);
			s1 += s2;
		}
		else
		{
			s1 += s[i];
		}
	}
	char* s3 = new char[s1.size()];
	for (int i = 0; i < s1.size(); i++)
	{
		s3[i] = s1[i];
	}
	Parser p(s3);
	auto result = eval(p.parse());
	delete[] s3;
	return result;
}
/// ����� ����� ���������������
double Integrate::l_rec(double n)
{
	double control = abs(parsing(in, a));
	if (FLAG == 1)
	{
		return -1;
	}
	if (control > INF || control < -INF || (int)control == Not_number)
	{
		Num = a;
		return control;
	}
	control = abs(parsing(in, b));
	if (control > INF || control < -INF || (int)control == Not_number)
	{
		Num = b;
		return control;
	}
	double  res = 0;
	double h = (b - a) / n;
	for (double i = 0; i < n; i++)
	{
		res += parsing(in, (a + (b - a) * i / n));
		if (res > INF)
		{
			Num = a + (b - a) * i / n;
			return res;
		}
	}
	return res * h;
}
/// ����� ������� ��������������
double Integrate::�_rec(double n)
{
	//�������� �� ����� ������� � ����� ���� ��������������
	double control = abs(parsing(in, a));
	//FLAG �������� �� ������������ ����� 
	if (FLAG == 1)
	{
		return -1;
	}
	//���� � ���� ����� �������, �� �������, ��������� �����
	if (control > INF || control < -INF || (int)control == Not_number)
	{
		Num = a;
		return control;
	}
	//�������� �� ����� ������� � ������ ���� ��������������
	control = abs(parsing(in, b));
	//���� � ���� ����� �������, �� �������, ��������� �����
	if (control > INF || control < -INF || (int)control == Not_number)
	{
		Num = b;
		return control;
	}
	double  res = 0;
	double h = (b - a) / n;
	//���� � ����� �� ���� ����� ������� ��������� �������� ����
	for (double i = 0; i < n; i++)
	{
		res += parsing(in, (a + (b - a) * i / n + a + (b - a) * (i + 1) / n) / 2);
		//��������� ������ ����� �� ������. ���� ����� �������, ��������
		if (res > INF)
		{
			Num = (a + (b - a) * i / n + a + (b - a) * (i + 1) / n) / 2;
			return res;
		}
	}
	return res * h;
}

/// ����� ������ ��������������
double Integrate::r_rec( double n)
{
	double control = abs(parsing(in, a));
	if (FLAG == 1)
	{
		return -1;
	}
	if (control > INF || control < -INF || (int)control == Not_number)
	{
		Num = a;
		return control;
	}
	control = abs(parsing(in, b));
	if (control > INF || control < -INF || (int)control == Not_number)
	{
		Num = b;
		return control;
	}
	double  res = 0;
	double h = (b - a) / n;
	for (double i = 1; i <= n; i++)
	{
		res += parsing(in, a + ((b - a) * i) / (n));
		if (res > INF)
		{
			Num = a + ((b - a) * i) / (n);
			return res;
		}
	}
	return res * h;
}

/// ����� ��������
double Integrate::trap( double n)
{
	double control = abs(parsing(in, a));
	if (FLAG == 1)
	{
		return -1;
	}
	if (control > INF || control < -INF || (int)control == Not_number)
	{
		Num = a;
		return control;
	}
	control = abs(parsing(in, b));
	if (control > INF || control < -INF || (int)control == Not_number)
	{
		Num = b;
		return control;
	}
	double  res = (parsing(in, a) + parsing(in, b));
	double h = (b - a) / n;
	for (double i = 1; i < n; i++)
	{
		res += 2 * parsing(in, a + ((b - a) * i) / (n));
		if (res > INF)
		{
			Num = a + ((b - a) * i) / (n);
			return res;
		}
	}
	return res * h / 2;
}

/// ����� ��������
double Integrate::sim(double n)
{
	double control = abs(parsing(in, a));
	if (FLAG == 1)
	{
		return -1;
	}
	if (control > INF || control < -INF || (int)control == Not_number)
	{
		Num = a;
		return control;
	}
	control = abs(parsing(in, b));
	if (control > INF || control < -INF || (int)control == Not_number)
	{
		Num = b;
		return control;
	}
	double  res = (parsing(in, a) + parsing(in, b));
	double h = (b - a) / n;
	for (double i = 0; i <= n - 1; i += 1)
	{
		res += 4 * parsing(in, a + (b - a) * (2 * i + 1) / (2 * n));
		if (res > INF)
		{
			Num = a + (b - a) * (2 * i + 1) / (2 * n);
			return res;
		}
	}
	for (double i = 1; i <= n; i += 1)
	{
		res += 2 * parsing(in, a + (b - a) * (2 * i) / (2 * n));
		if (res > INF)
		{
			Num = a + (b - a) * (2 * i) / (2 * n);
			return res;
		}
	}
	return res * h / 6;
}

//�������� �� ����������
bool Integrate::check(double num, int t)
{
	if (t == 1)
	{
		double tmp = parsing(in, 0.0001);
		if (tmp < 1 / (0.0001))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	if (t == 2)
	{
		double tmp = parsing(in, 10000);
		if (tmp < pow(10000, 1))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
}
//������� ������������ ��������
void inc(double e)
{
	MAXSIZE = 100, Not_number = nan("1");
	PI = 3.14159265359, INF = 100000000000, eps = e;
	FLAG = 0,l=0,r=0;
}
//������� ������ ������ ��������������
double choice_of_method(Integrate integral, int n)
{
	
	if (integral.par == 1)
	{
		l = integral.sim(n), r = integral.sim(2 * n);
		if (l == -1 || r == -1 || FLAG==1)
		{
			return -2222;
		}
	}
	if (integral.par == 2)
	{
		l = integral.r_rec( n), r = integral.r_rec( 2 * n);
		if (l == -1 || r == -1)
		{
			return -2222;
		}
	}
	if (integral.par == 3)
	{
		l = integral.l_rec(n), r = integral.l_rec( 2 * n);
		if (l == -1 || r == -1)
		{
			return -2222;
		}
	}
	if (integral.par == 4)
	{
		l = integral.�_rec(n), r = integral.�_rec(2 * n);
		if (l == -1 || r == -1)
		{
			return -2222;
		}
	}
	if (integral.par == 5)
	{
		l = integral.trap(n), r = integral.trap(2 * n);
		if (l == -1 || r == -1)
		{
			return -2222;
		}
	}
	return 0;
}
//�������� ������� ��������������
double integrate(string ur, double a, double b, int size, double e, int par)
{
	inc(e);
	int n = 1;
	bool fl = false, fl2 = false;
	string s;
	//������ �������� �� �����
	for (int i = 0; i < size; i++)
	{
		if (ur[i] == 'P' && i!=size-1 && ur[i + 1] == 'i')
		{
			s.push_back('3');
			s.push_back('.');
			s.push_back('1');
			s.push_back('4');
			i++;
			continue;
		}
		if (ur[i] == 'e')
		{
			s.push_back('2');
			s.push_back('.');
			s.push_back('7');
			s.push_back('1');
			continue;
		}
		s.push_back(ur[i]);
	}
	Integrate integral(s,a,b,par);
	//���� ���������� ���������� ��������
	while (1)
	{
		//�� ������� ��������� �������� ������ �������
		if (n > 60000)
		{
			return -4444;
		}
		choice_of_method(integral, n);
		//�������� ����
		if (l == -1 || r == -1)
		{
			return -2222;
		}
		//�������� �������������
		if (l > INF || (int)l == Not_number)
		{
			fl = true;
			break;
		}
		if (abs(l - r) < eps)
		{
			break;
		}
		n *= 2;
	}
	if (!fl)
	{
		return r;
	}
	eps = 0.001;
	//���� �������� �������������
	if (Num == integral.a)
	{
		if (!integral.check(Num + eps, 1))
		{
			return -1111;
			fl2 = true;
		}

	}
	if (Num == integral.b)
	{
		if (!integral.check(Num - eps, 2))
		{
			return -1111;
			fl2 = true;
		}
	}
	if (!fl2)
	{
		n = 1;
		if (Num == integral.a)
		{
			integral.a += eps;
			fl = false;
		}
		if (Num == integral.b)
		{
			integral.b -= eps;
			fl = false;
		}
		if (!fl)
		{
			while (1)
			{
				if (n > 60000)
				{
					return -4444;
				}
				choice_of_method(integral, n);
				if (l > INF || (int)l == Not_number)
				{
					fl = true;
					return -2222;
				}
				if (l > INF)
				{
					fl = true;
					break;
				}
				if (abs(l - r) < eps)
				{
					break;
				}
				n *= 2;
			}
			return r;
		}
		else
		{
			double tmp = integral.b;
			//������ ����� ������� �������������� �� �����, ���� ������� ����� �������
			integral.b = Num - eps;
			double res = 0;
			//��������� �������� �� ������ ����������
			while (1)
			{
				//�� ������� ��������� ������ ��������
				if (n > 60000)
				{
					return -4444;
				}
				choice_of_method(integral, n);
				//�������� ����������� ��������
				if (abs(l - r) < eps)
				{
					res += r;
					break;
				}
				n *= 2;
			}
			n = 1;
			//������ ������ ������� �������������� �� �����, ���� ,������� ����� �������
			integral.a = Num + eps;
			integral.b = tmp;
			while (1)
			{
				//�� ������� ��������� ������ ��������
				if (n > 60000)
				{
					return -4444;
				}
				choice_of_method(integral, n);
				//�������� ����������� ��������
				if (abs(l - r) < eps)
				{
					res += r;
					break;
				}
				n *= 2;
			}
			return res;

		}
	}

}


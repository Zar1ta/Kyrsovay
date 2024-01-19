#pragma once

#include"Header.h"
#include"Header.cpp"
#include"Spravka.h"
namespace okno {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label4;

	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label5;

	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton3;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Button^ button6;

	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->button6 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(21, 181);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(107, 32);
			this->button1->TabIndex = 7;
			this->button1->Text = L"Подсчитать";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(12, 63);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(149, 22);
			this->textBox1->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(18, 44);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(129, 16);
			this->label1->TabIndex = 27;
			this->label1->Text = L"Введите функцию:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(18, 107);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(258, 16);
			this->label2->TabIndex = 26;
			this->label2->Text = L"Введите пределы интегрирования: от ";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(284, 104);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(44, 22);
			this->textBox2->TabIndex = 1;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(335, 109);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(23, 16);
			this->label3->TabIndex = 25;
			this->label3->Text = L"до";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(364, 104);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(46, 22);
			this->textBox3->TabIndex = 2;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(18, 219);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(80, 16);
			this->label4->TabIndex = 24;
			this->label4->Text = L"Результат:";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(19, 260);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(116, 35);
			this->button2->TabIndex = 9;
			this->button2->Text = L"Очистить";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(433, 109);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(75, 16);
			this->label5->TabIndex = 10;
			this->label5->Text = L"Точность: ";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"Cимпсона", L"Правых прямоугльников", L"Левых прямоугольников",
					L"Центральных прямоугольников", L"Трапеций"
			});
			this->comboBox1->Location = System::Drawing::Point(21, 151);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(271, 24);
			this->comboBox1->TabIndex = 4;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(18, 132);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(118, 16);
			this->label6->TabIndex = 23;
			this->label6->Text = L"Выберите метод:";
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Checked = true;
			this->radioButton1->Location = System::Drawing::Point(436, 132);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(45, 20);
			this->radioButton1->TabIndex = 4;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"0.1";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(500, 132);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(52, 20);
			this->radioButton2->TabIndex = 5;
			this->radioButton2->Text = L"0.01";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(436, 158);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(59, 20);
			this->radioButton3->TabIndex = 6;
			this->radioButton3->Text = L"0.001";
			this->radioButton3->UseVisualStyleBackColor = true;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(104, 219);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(0, 16);
			this->label7->TabIndex = 22;
			// 
			// chart1
			// 
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(676, 63);
			this->chart1->Name = L"chart1";
			series1->BorderWidth = 3;
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series1->Color = System::Drawing::Color::White;
			series1->Legend = L"Legend1";
			series1->LegendText = L" ";
			series1->Name = L"Series1";
			this->chart1->Series->Add(series1);
			this->chart1->Size = System::Drawing::Size(401, 300);
			this->chart1->TabIndex = 21;
			this->chart1->Text = L"chart1";

			chart1->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::chart1_MouseClick);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(676, 369);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(103, 26);
			this->button3->TabIndex = 8;
			this->button3->Text = L"Построить график";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(676, 44);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(56, 16);
			this->label8->TabIndex = 20;
			this->label8->Text = L"График";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(196, 63);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(80, 16);
			this->label9->TabIndex = 28;
			this->label9->Text = L"Константы:";
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(291, 62);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(66, 26);
			this->button4->TabIndex = 29;
			this->button4->Text = L"Pi";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(378, 63);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(66, 26);
			this->button5->TabIndex = 30;
			this->button5->Text = L"e";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
	
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->button6->Location = System::Drawing::Point(1086, 1);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(90, 29);
			this->button6->TabIndex = 33;
			this->button6->Text = L"Справка";
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientInactiveCaption;
			this->ClientSize = System::Drawing::Size(1184, 430);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->chart1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->radioButton3);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Cursor = System::Windows::Forms::Cursors::Default;
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Калькулятор интегралов";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		double a, b, h, x, y;
		bool graph = false;
		//Точность
		double eps_()
		{
			if (radioButton1->Checked) {  return 0.1; };
			if (radioButton2->Checked) {  return 0.01; };
			if (radioButton3->Checked) {  return 0.001; };
		}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->button1->Cursor = System::Windows::Forms::Cursors::AppStarting;
		//Проверка коректности ввода
		if (textBox1->Text == "" || textBox2->Text=="" || textBox3->Text=="")
		{
			label7->Text = "Неверный ввод!";
			return;
		}
		
		String^ s = System::Convert::ToString(textBox1->Text);
		char *s2=new char[s->Length];
		for (int i = 0; i<s->Length; i++)
		{
			if (s[i] == ',')
			{
				s2[i] = '.';
				continue;
			}
 			s2[i] = s[i];
		}
		int par=1;
		//иницилизация точности и метода
		String^ way = comboBox1->Text;
		double ep = eps_();
		String^ sim = "Cимпсона";
		if (way == sim)
		{
			par = 1;
		}
		if (way == "Правых прямоугльников")
		{
			par = 2;
		}
		if (way == "Левых прямоугольников")
		{
			par = 3;
		}
		if (way == "Центральных прямоугольников")
		{
			par = 4;
		}
		if (way == "Трапеций")
		{
			par = 5;
		}
		double num1, num2;
		
		//проверка коректности ввода
		try
		{
			num1 = System::Convert::ToDouble(textBox2->Text);
			num2 = System::Convert::ToDouble(textBox3->Text);
		}
		catch (...)
		{
			label7->Text = System::Convert::ToString("Неверный ввод!");
			this->button1->Cursor = System::Windows::Forms::Cursors::Default;
			return;
		}
		if (num1 > num2)
		{
			label7->Text = System::Convert::ToString("Неверный ввод!");
			this->button1->Cursor = System::Windows::Forms::Cursors::Default;
			return;
		}
		//Интегрирование
		double res=integrate(s2, num1, num2, s->Length,ep,par);
		if (res == -1111)
		{
			label7->Text = System::Convert::ToString("Интеграл расходится");
			this->button1->Cursor = System::Windows::Forms::Cursors::Default;
			return;
		}
		if (res == -2222)
		{
			label7->Text = System::Convert::ToString("Неверный ввод!");
			this->button1->Cursor = System::Windows::Forms::Cursors::Default;
			return;
		}
		if (res == -4444)
		{
			label7->Text = System::Convert::ToString("Неудалось вычислить интеграл. Попробуйте другой метод.");
			this->button1->Cursor = System::Windows::Forms::Cursors::Default;
			return;
		}
		res = res / ep;
		res = (int)res;
		res *= ep;
		label7->Text = System::Convert::ToString(res);
		delete[] s2;
		this->button1->Cursor = System::Windows::Forms::Cursors::Default;
	}

	//Загрузка форму, инициализация графика
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		Cursor->Position = Point(200, 200);
		System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea = chart1->ChartAreas[0];

		// Настройка оси OX 
		chartArea->AxisX->Enabled = System::Windows::Forms::DataVisualization::Charting::AxisEnabled::True;
		chartArea->AxisX->MajorGrid->Enabled = true;
		chartArea->AxisX->MajorGrid->LineColor = System::Drawing::Color::LightGray;
		chartArea->AxisX->MajorTickMark->Enabled = true;
		chartArea->AxisX->LineColor = System::Drawing::Color::Black;
		// Настройка оси OY 
		chartArea->AxisY->Enabled = System::Windows::Forms::DataVisualization::Charting::AxisEnabled::True;
		chartArea->AxisY->MajorGrid->Enabled = true;
		chartArea->AxisY->MajorGrid->LineColor = System::Drawing::Color::LightGray;
		chartArea->AxisY->MajorTickMark->Enabled = true;
		chartArea->AxisY->LineColor = System::Drawing::Color::Black;
		
	}
//Очистка экрана
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	label7->Text = L"";
	textBox1->Text = L"";
	textBox2->Text = L"";
	textBox3->Text = L"";
	comboBox1->Text = L"";
	label10->Text = "X: ";
	label11->Text = "Y: ";
	this->chart1->Series->Clear();
	radioButton1->Checked = true;
	graph = false;
}
//Построение графиков
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {

	//Ввод данных
	if (textBox1->Text == "")
	{
		label7->Text = "Неверный ввод!";
		return;
	}
	if (textBox2->Text == "" && textBox3->Text == "")
	{
		a = -10;
		b = 10;
	}
	else
	{
		try {
			a = System::Convert::ToDouble(textBox2->Text);
			b = System::Convert::ToDouble(textBox3->Text);
		}
		catch (...)
		{
			label7->Text = "Неверный ввод!";
			return;
		}
	}
	
	h = 0.1;
	x = a;
	//ДОбавление пока пустого графика
	int Not_number = nan("1");
	long double INF = 100000000000, eps = 0.001;
	//this->chart1->Series[0]->Points->Clear();
	System::Windows::Forms::DataVisualization::Charting::Series^  series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
	series1->LegendText = textBox1->Text;
	series1->BorderWidth = 3;
	series1->ChartArea = L"ChartArea1";
	series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
	series1->Color = System::Drawing::Color::Red;
	series1->Legend = L"Legend1";
	series1->Name = L"Series1";
	this->chart1->Series->Clear();
	double maxY=-100, minY=100;
	int i = 0;
	System::Windows::Forms::DataVisualization::Charting::Axis^ xAxis = chart1->ChartAreas[0]->AxisX;
	if (b - a > 1)
	{
		xAxis->Interval = (int)(b - a) / 5;
		xAxis->LabelStyle->Format = "0";
	}
	else
	{
		xAxis->Interval = (b - a) / 2;
		xAxis->LabelStyle->Format = "";

	}
	

	//цикл построение
	while (x <= b)
	{
		String^ s = System::Convert::ToString(textBox1->Text);
		char* s2 = new char[s->Length];
		for (int i = 0; i < s->Length; i++)
		{
			s2[i] = s[i];
		}
		string S;
		int size = s->Length;
		//Замена констант
		for (int i = 0; i < size; i++)
		{
			if (s2[i] == 'P' && i != size - 1 && s2[i + 1] == 'i')
			{
				S.push_back('3');
				S.push_back('.');
				S.push_back('1');
				S.push_back('4');
				i++;
				continue;
			}
			if (s2[i] == 'e')
			{
				S.push_back('2');
				S.push_back('.');
				S.push_back('7');
				S.push_back('1');
				continue;
			}
			S.push_back(s2[i]);
		}
		//Проверка ввода
		if (x == a)
		{
			FLAG = 0;
			parsing(S, x);
			if (FLAG == 1)
			{
				label7->Text = System::Convert::ToString("Неверный ввод!");
				graph = false;
				label10->Text = "X: ";
				label11->Text = "Y: ";
				return;
			}
			else
			{
				this->chart1->Series->Add(series1);
			}
		}
		
		y =parsing(S,x);
		if (y > maxY && y<INF)
		{
			maxY = y;
		}
		if (y < minY && y>-INF)
		{
			minY = y;
		}

		int tmp = y;
		
		if ((tmp == Not_number || abs(y) > INF))
		{
			x *= 10;
			x += 1;
			x /= 10;
			i++;
			//Добавление нового графика в случае точки разрыва
			System::Windows::Forms::DataVisualization::Charting::Series^ tmp = gcnew System::Windows::Forms::DataVisualization::Charting::Series();
			tmp->BorderWidth = 3;
			tmp->ChartArea = L"";
			tmp->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			tmp->Color = System::Drawing::Color::Red;
			tmp->LegendText = L"";
			tmp->Name = L"";
			tmp->IsVisibleInLegend = false;
			this->chart1->Series->Add (tmp);
			this->chart1->Series[i]->Points->Clear();
			
			continue;
		}
		this->chart1->Series[i]->EmptyPointStyle->Color = System::Drawing::Color::Red;
		this->chart1->Series[i]->Points->AddXY(x, y);
		
		x *= 10;
		x += 1;
		x /= 10;
		delete s2;
	}
	graph = true;
	
	
}
System::Windows::Forms::ToolTip^ tip = gcnew System::Windows::Forms::ToolTip();


//Отображение текущих координат
void chart1_MouseClick(Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
	if (e->Button == System::Windows::Forms::MouseButtons::Left && graph) {
		auto hit = chart1->HitTest(e->X, e->Y);
		if (hit->ChartElementType == System::Windows::Forms::DataVisualization::Charting::ChartElementType::DataPoint
			|| hit->ChartElementType == System::Windows::Forms::DataVisualization::Charting::ChartElementType::PlottingArea) {
			double xVal = hit->ChartArea->AxisX->PixelPositionToValue(e->X);
			double yVal = hit->ChartArea->AxisY->PixelPositionToValue(e->Y);
			String^ tooltipText = String::Format("X: {0:F2}, Y: {1:F2}", xVal, yVal);
			tip->Show(tooltipText, chart1, e->X, e->Y - 15, 2000); // Показать на 2 секунды смещенную 
		}
	}

}

//Функции добаления констант
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Text += "e";
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	
	textBox1->Text += "Pi";
}

//Интсрукция по экспулатации программы

private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {

	
	Spravka obj;
	obj.ShowDialog();
	return System::Void();
}

};
}

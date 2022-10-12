#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]
void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	winform::MyForm form;
	Application::Run(% form);
}

typedef std::vector<std::vector<double>> matrix;

matrix A, B, C;
unsigned int N_A = 0, M_A = 0, N_B = 0, M_B = 0;

System::Void winform::MyForm::toolStripMenuItemExit_Click(System::Object^ sender, System::EventArgs^ e)
{
	Application::Exit();
	return System::Void();
}

System::Void winform::MyForm::вихідToolStripMenuItemInfo_Click(System::Object^ sender, System::EventArgs^ e)
{
	MessageBox::Show("Ласкаво просимо!\nТут є інформація про матричний калькулятор.\n\nМожливості:\n-Додавання матриць;\n-Віднімання матриць;\n-Множення матриць;\n-Ділення матриць;\n-Множення матриці на число;\n-Пошук визначника матриці\n-Піднесення матриці до степеня;\n-Транспонування матриці;\n-Пошук оберненої матриці;\n-Пошук рангу матриці;\n\nПрограма зроблена Романом Мачило, як курсова робота.", "Інформація");
	return System::Void();
}

System::Void winform::MyForm::buttonAdd_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (N_A != N_B || M_A != M_B) {
		MessageBox::Show("Розміри матриць повинні співпадати!", "Увага!");
		return;
	}

	size_t count1 = CheckingDataGridViewMatrix_A();
	if (count1 > 0) {
		MessageBox::Show("Некоректні дані в матриці А!", "Увага!");
		return System::Void();
	}

	size_t count2 = CheckingDataGridViewMatrix_B();
	if (count2 > 0) {
		MessageBox::Show("Некоректні дані в матриці В!", "Увага!");
		return System::Void();
	}

	for (int i = 0; i < N_A; i++) {
		for (int j = 0; j < M_A; j++) {
			A[i][j] = Convert::ToDouble(dataGridViewMatrix_A->Rows[i]->Cells[j]->Value);
		}
	}

	for (int i = 0; i < N_B; i++) {
		for (int j = 0; j < M_B; j++) {
			B[i][j] = Convert::ToDouble(dataGridViewMatrix_B->Rows[i]->Cells[j]->Value);
		}
	}
	
	matrix Temp(N_A, std::vector<double>(M_A));
	Temp = AddMatrix(A, B, N_A, M_A);


	dataGridViewMatrix_C->RowCount = N_A;
	dataGridViewMatrix_C->ColumnCount = M_A;

	ShowC_A(Temp);

	dataGridViewMatrix_C->AutoResizeRowHeadersWidth(DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders);
	dataGridViewMatrix_C->AutoResizeColumns();

	return System::Void();
}

System::Void winform::MyForm::buttonDeduct_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (N_A != N_B || M_A != M_B) {
		MessageBox::Show("Розміри матриць повинні співпадати!", "Увага!");
		return;
	}

	size_t count1 = CheckingDataGridViewMatrix_A();
	if (count1 > 0) {
		MessageBox::Show("Некоректні дані в матриці А!", "Увага!");
		return System::Void();
	}

	size_t count2 = CheckingDataGridViewMatrix_B();
	if (count2 > 0) {
		MessageBox::Show("Некоректні дані в матриці В!", "Увага!");
		return System::Void();
	}

	for (int i = 0; i < N_A; i++) {
		for (int j = 0; j < M_A; j++) {
			A[i][j] = Convert::ToDouble(dataGridViewMatrix_A->Rows[i]->Cells[j]->Value);
		}
	}

	for (int i = 0; i < N_B; i++) {
		for (int j = 0; j < M_B; j++) {
			B[i][j] = Convert::ToDouble(dataGridViewMatrix_B->Rows[i]->Cells[j]->Value);
		}
	}

	matrix Temp(N_A, std::vector<double>(M_A));
	Temp = DeductMatrix(A, B);


	dataGridViewMatrix_C->RowCount = N_A;
	dataGridViewMatrix_C->ColumnCount = M_A;

	ShowC_A(Temp);

	dataGridViewMatrix_C->AutoResizeRowHeadersWidth(DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders);
	dataGridViewMatrix_C->AutoResizeColumns();

	return System::Void();
}

System::Void winform::MyForm::buttonMultiply_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (N_A == 0 || M_A == 0) {
		MessageBox::Show("Матриця А відсутня!", "Увага!");
		return System::Void();
	}
	if (N_B == 0 || M_B == 0) {
		MessageBox::Show("Матриця B відсутня!", "Увага!");
		return System::Void();
	}
	if (N_A != N_B || M_A != M_B) {
		MessageBox::Show("Розміри матриць повинні співпадати!", "Увага!");
		return System::Void();
	}

	size_t count1 = CheckingDataGridViewMatrix_A();
	if (count1 > 0) {
		MessageBox::Show("Некоректні дані в матриці А!", "Увага!");
		return System::Void();
	}

	size_t count2 = CheckingDataGridViewMatrix_B();
	if (count2 > 0) {
		MessageBox::Show("Некоректні дані в матриці В!", "Увага!");
		return System::Void();
	}

	for (int i = 0; i < N_A; i++) {
		for (int j = 0; j < M_A; j++) {
			A[i][j] = Convert::ToDouble(dataGridViewMatrix_A->Rows[i]->Cells[j]->Value);
		}
	}

	for (int i = 0; i < N_B; i++) {
		for (int j = 0; j < M_B; j++) {
			B[i][j] = Convert::ToDouble(dataGridViewMatrix_B->Rows[i]->Cells[j]->Value);
		}
	}

	matrix Temp(N_A, std::vector<double>(M_A));
    Temp = matrix_multiplication(A, B);
	C = Temp;

	dataGridViewMatrix_C->RowCount = N_A;
	dataGridViewMatrix_C->ColumnCount = M_A;

	ShowC_A(Temp);

	dataGridViewMatrix_C->AutoResizeRowHeadersWidth(DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders);
	dataGridViewMatrix_C->AutoResizeColumns();

	return System::Void();
}

System::Void winform::MyForm::buttonDivide_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (N_A == 0 || M_A == 0) {
		MessageBox::Show("Матриця А відсутня!", "Увага!");
		return System::Void();
	}
	if (N_B == 0 || M_B == 0) {
		MessageBox::Show("Матриця B відсутня!", "Увага!");
		return System::Void();
	}
	if (N_A != N_B || M_A != M_B) {
		MessageBox::Show("Розміри матриць повинні співпадати!", "Увага!");
		return System::Void();
	}

	size_t count1 = CheckingDataGridViewMatrix_A();
	if (count1 > 0) {
		MessageBox::Show("Некоректні дані в матриці А!", "Увага!");
		return System::Void();
	}

	size_t count2 = CheckingDataGridViewMatrix_B();
	if (count2 > 0) {
		MessageBox::Show("Некоректні дані в матриці В!", "Увага!");
		return System::Void();
	}

	if (Determinant(B, N_B, M_B) == 0) {
		MessageBox::Show("Визначник матриці В дорівнює нулю. Ділення неможливе!", "Увага!");
		return System::Void();
	}

	for (int i = 0; i < N_A; i++) {
		for (int j = 0; j < M_A; j++) {
			A[i][j] = Convert::ToDouble(dataGridViewMatrix_A->Rows[i]->Cells[j]->Value);
		}
	}

	for (int i = 0; i < N_B; i++) {
		for (int j = 0; j < M_B; j++) {
			B[i][j] = Convert::ToDouble(dataGridViewMatrix_B->Rows[i]->Cells[j]->Value);
		}
	}

	matrix inverse(N_B, std::vector<double>(M_B));
	inverse = inversion(B, N_B);
	matrix Temp(N_A, std::vector<double>(M_A));
	Temp = matrix_multiplication(A, inverse);

	dataGridViewMatrix_C->RowCount = N_A;
	dataGridViewMatrix_C->ColumnCount = M_A;

	ShowC_A(Temp);

	dataGridViewMatrix_C->AutoResizeRowHeadersWidth(DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders);
	dataGridViewMatrix_C->AutoResizeColumns();

	return System::Void();
}

System::Void winform::MyForm::buttonCreate_A_Click(System::Object^ sender, System::EventArgs^ e)
{
	N_A = Convert::ToInt32(numericUpDownN_A->Value);
	M_A = Convert::ToInt32(numericUpDownM_A->Value);

   matrix Temp(N_A, std::vector<double>(M_A));
   A = Temp;

   for (int i = 0; i < N_A; i++) {
	   for (int j = 0; j < M_A; j++) {
		   A[i][j] = 0;
	   }
   }

   dataGridViewMatrix_A->RowCount = N_A;
   dataGridViewMatrix_A->ColumnCount = M_A;

   ShowA();

   dataGridViewMatrix_A->AutoResizeRowHeadersWidth(DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders);
   dataGridViewMatrix_A->AutoResizeColumns();

	return System::Void();
}

System::Void winform::MyForm::buttonCreate_B_Click(System::Object^ sender, System::EventArgs^ e)
{
	N_B = Convert::ToInt32(numericUpDownN_B->Value);
	M_B = Convert::ToInt32(numericUpDownM_B->Value);

	matrix Temp(N_B, std::vector<double>(M_B));
	B = Temp;

	for (int i = 0; i < N_B; i++) {
		for (int j = 0; j < M_B; j++) {
			B[i][j] = 0;
		}
	}

	dataGridViewMatrix_B->RowCount = N_B;
	dataGridViewMatrix_B->ColumnCount = M_B;

	ShowB();

	dataGridViewMatrix_B->AutoResizeRowHeadersWidth(DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders);
	dataGridViewMatrix_B->AutoResizeColumns();

	return System::Void();
}

System::Void winform::MyForm::buttonMultiplyBy_A_Click(System::Object^ sender, System::EventArgs^ e)
{
	size_t count = CheckingDataGridViewMatrix_A();
	if (count > 0) {
		MessageBox::Show("Некоректні дані в матриці А!", "Увага!");
		return System::Void();
	}

	for (int i = 0; i < N_A; i++) {
		for (int j = 0; j < M_A; j++) {
			A[i][j] = Convert::ToDouble(dataGridViewMatrix_A->Rows[i]->Cells[j]->Value);
		}
	}

	size_t count2 = CheckingTextBoxA();
	if (count2 > 0) {
		MessageBox::Show("Некоректні дані для множення на число!", "Увага!");
		return System::Void();
	}

	double number = Convert::ToDouble(textBoxMultiplyBy_A->Text);

	matrix Temp(N_A, std::vector<double>(M_A));
	Temp = matrix_multiplication_by_numb(A, number);

	dataGridViewMatrix_C->RowCount = N_A;
	dataGridViewMatrix_C->ColumnCount = M_A;

	ShowC_A(Temp);

	dataGridViewMatrix_C->AutoResizeRowHeadersWidth(DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders);
	dataGridViewMatrix_C->AutoResizeColumns();

	return System::Void();
}

System::Void winform::MyForm::buttonMultiplyBy_B_Click(System::Object^ sender, System::EventArgs^ e)
{
	size_t count = CheckingDataGridViewMatrix_B();
	if (count > 0) {
		MessageBox::Show("Некоректні дані в матриці В!", "Увага!");
		return System::Void();
	}

	for (int i = 0; i < N_B; i++) {
		for (int j = 0; j < M_B; j++) {
			B[i][j] = Convert::ToDouble(dataGridViewMatrix_B->Rows[i]->Cells[j]->Value);
		}
	}


	size_t count2 = CheckingTextBoxB();
	if (count2 > 0) {
		MessageBox::Show("Некоректні дані для множення на число!", "Увага!");
		return System::Void();
	}

	double number = Convert::ToDouble(textBoxMultiplyBy_B->Text);

	matrix Temp(N_B, std::vector<double>(M_B));
	Temp = matrix_multiplication_by_numb(B, number);


	dataGridViewMatrix_C->RowCount = N_B;
	dataGridViewMatrix_C->ColumnCount = M_B;

	ShowC_B(Temp);

	dataGridViewMatrix_C->AutoResizeRowHeadersWidth(DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders);
	dataGridViewMatrix_C->AutoResizeColumns();
	return System::Void();
}

System::Void winform::MyForm::buttonDeterm_A_Click(System::Object^ sender, System::EventArgs^ e)
{
	size_t count = CheckingDataGridViewMatrix_A();
	if (count > 0) {
		MessageBox::Show("Некоректні дані в матриці А!", "Увага!");
		return System::Void();
	}

	for (int i = 0; i < N_A; i++) {
		for (int j = 0; j < M_A; j++) {
			A[i][j] = Convert::ToDouble(dataGridViewMatrix_A->Rows[i]->Cells[j]->Value);
		}
	}

	if (N_A != M_A) {
		MessageBox::Show("Матриця повинна бути квадратною!", "Увага!");
		return System::Void();
	}

	double det = Determinant(A, N_A, M_A);
    textBoxResult->Text = Convert::ToString(det);

	return System::Void();
}

System::Void winform::MyForm::buttonDeterm_B_Click(System::Object^ sender, System::EventArgs^ e)
{
	size_t count = CheckingDataGridViewMatrix_B();
	if (count > 0) {
		MessageBox::Show("Некоректні дані в матриці В!", "Увага!");
		return System::Void();
	}

	for (int i = 0; i < N_B; i++) {
		for (int j = 0; j < M_B; j++) {
			B[i][j] = Convert::ToDouble(dataGridViewMatrix_B->Rows[i]->Cells[j]->Value);
		}
	}

	if (N_B != M_B) {
		MessageBox::Show("Матриця повинна бути квадратною!", "Увага!");
		return System::Void();
	}

	double det = Determinant(B, N_B, M_B);;

	textBoxResult->Text = Convert::ToString(det);
	return System::Void();
}

System::Void winform::MyForm::buttonPower_A_Click(System::Object^ sender, System::EventArgs^ e)
{
	size_t count = CheckingDataGridViewMatrix_A();
	if (count > 0) {
		MessageBox::Show("Некоректні дані в матриці А!", "Увага!");
		return System::Void();
	}

	for (int i = 0; i < N_A; i++) {
		for (int j = 0; j < M_A; j++) {
			A[i][j] = Convert::ToDouble(dataGridViewMatrix_A->Rows[i]->Cells[j]->Value);
		}
	}

	if (N_A != M_A) {
		MessageBox::Show("Матриця повинна бути квадратною!", "Увага!");
		return System::Void();
	}

	unsigned int pow = Convert::ToInt32(numericUpDownPower_A->Value);
	matrix Temp(N_A, std::vector<double>(M_A));
	Temp = power(A, pow);

	dataGridViewMatrix_C->RowCount = N_A;
	dataGridViewMatrix_C->ColumnCount = M_A;

	ShowC_A(Temp);

	dataGridViewMatrix_C->AutoResizeRowHeadersWidth(DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders);
	dataGridViewMatrix_C->AutoResizeColumns();

	return System::Void();
}

System::Void winform::MyForm::buttonPower_B_Click(System::Object^ sender, System::EventArgs^ e)
{
	size_t count = CheckingDataGridViewMatrix_B();
	if (count > 0) {
		MessageBox::Show("Некоректні дані в матриці В!", "Увага!");
		return System::Void();
	}
	for (int i = 0; i < N_B; i++) {
		for (int j = 0; j < M_B; j++) {
			B[i][j] = Convert::ToDouble(dataGridViewMatrix_B->Rows[i]->Cells[j]->Value);
		}
	}

	if (N_B != M_B) {
		MessageBox::Show("Матриця повинна бути квадратною!", "Увага!");
		return System::Void();
	}

	unsigned int pow = Convert::ToInt32(numericUpDownPower_B->Value);
	matrix Temp(N_B, std::vector<double>(M_B));
	Temp = power(B, pow);

	dataGridViewMatrix_C->RowCount = N_B;
	dataGridViewMatrix_C->ColumnCount = M_B;

	ShowC_B(Temp);

	dataGridViewMatrix_C->AutoResizeRowHeadersWidth(DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders);
	dataGridViewMatrix_C->AutoResizeColumns();
	return System::Void();
}

System::Void winform::MyForm::buttonTranspose_A_Click(System::Object^ sender, System::EventArgs^ e)
{
	size_t count = CheckingDataGridViewMatrix_A();
	if (count > 0) {
		MessageBox::Show("Некоректні дані в матриці А!", "Увага!");
		return System::Void();
	}

	for (int i = 0; i < N_A; i++) {
		for (int j = 0; j < M_A; j++) {
			A[i][j] = Convert::ToDouble(dataGridViewMatrix_A->Rows[i]->Cells[j]->Value);
		}
	}

	matrix Temp(M_A, std::vector<double>(N_A));
	Temp = transpose(A);

	dataGridViewMatrix_C->RowCount = M_A;
	dataGridViewMatrix_C->ColumnCount = N_A;

	unsigned int t = M_A;
	M_A = N_A;
	N_A = t;

	ShowC_A(Temp);

	dataGridViewMatrix_C->AutoResizeRowHeadersWidth(DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders);
	dataGridViewMatrix_C->AutoResizeColumns();

	return System::Void();
}

System::Void winform::MyForm::buttonTranspose_B_Click(System::Object^ sender, System::EventArgs^ e)
{
	size_t count = CheckingDataGridViewMatrix_B();
	if (count > 0) {
		MessageBox::Show("Некоректні дані в матриці В!", "Увага!");
		return System::Void();
	}
	for (int i = 0; i < N_B; i++) {
		for (int j = 0; j < M_B; j++) {
			B[i][j] = Convert::ToDouble(dataGridViewMatrix_B->Rows[i]->Cells[j]->Value);
		}
	}

	matrix Temp(M_B, std::vector<double>(N_B));
	Temp = transpose(B);

	dataGridViewMatrix_C->RowCount = M_B;
	dataGridViewMatrix_C->ColumnCount = N_B;

	unsigned int t = M_B;
	M_B = N_B;
	N_B = t;

	ShowC_B(Temp);

	dataGridViewMatrix_C->AutoResizeRowHeadersWidth(DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders);
	dataGridViewMatrix_C->AutoResizeColumns();
	return System::Void();
}

System::Void winform::MyForm::buttonInverse_A_Click(System::Object^ sender, System::EventArgs^ e)
{
	size_t count = CheckingDataGridViewMatrix_A();
	if (count > 0) {
		MessageBox::Show("Некоректні дані в матриці А!", "Увага!");
		return System::Void();
	}

	for (int i = 0; i < N_A; i++) {
		for (int j = 0; j < M_A; j++) {
			A[i][j] = Convert::ToDouble(dataGridViewMatrix_A->Rows[i]->Cells[j]->Value);
		}
	}

	if (N_A != M_A) {
		MessageBox::Show("Матриця повинна бути квадратною!", "Увага!");
		return System::Void();
	}

	if(Determinant(A, N_A, M_A) == 0) {
		MessageBox::Show("Визначник матриці А дорівнює нулю. Обернена матриця не існує!", "Увага!");
		return System::Void();
	}

	matrix Temp(N_A, std::vector<double>(M_A));
	Temp = inversion(A, N_A);

	dataGridViewMatrix_C->RowCount = N_A;
	dataGridViewMatrix_C->ColumnCount = M_A;

	ShowC_A(Temp);

	dataGridViewMatrix_C->AutoResizeRowHeadersWidth(DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders);
	dataGridViewMatrix_C->AutoResizeColumns();


	return System::Void();
}

System::Void winform::MyForm::buttonInverse_B_Click(System::Object^ sender, System::EventArgs^ e)
{
	size_t count = CheckingDataGridViewMatrix_B();
	if (count > 0) {
		MessageBox::Show("Некоректні дані в матриці В!", "Увага!");
		return System::Void();
	}
	for (int i = 0; i < N_B; i++) {
		for (int j = 0; j < M_B; j++) {
			B[i][j] = Convert::ToDouble(dataGridViewMatrix_B->Rows[i]->Cells[j]->Value);
		}
	}

	if (N_B != M_B) {
		MessageBox::Show("Матриця повинна бути квадратною!", "Увага!");
		return System::Void();
	}

	if (Determinant(B, N_B, M_B) == 0) {
		MessageBox::Show("Визначник матриці В дорівнює нулю. Обернена матриця не існує!", "Увага!");
		return System::Void();
	}

	matrix Temp(N_B, std::vector<double>(M_B));
	Temp = inversion(B, N_B);

	dataGridViewMatrix_C->RowCount = N_B;
	dataGridViewMatrix_C->ColumnCount = M_B;

	ShowC_B(Temp);

	dataGridViewMatrix_C->AutoResizeRowHeadersWidth(DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders);
	dataGridViewMatrix_C->AutoResizeColumns();

	return System::Void();
}

System::Void winform::MyForm::buttonRank_A_Click(System::Object^ sender, System::EventArgs^ e)
{
	size_t count = CheckingDataGridViewMatrix_A();
	if (count > 0) {
		MessageBox::Show("Некоректні дані в матриці А!", "Увага!");
		return System::Void();
	}

	for (int i = 0; i < N_A; i++) {
		for (int j = 0; j < M_A; j++) {
			A[i][j] = Convert::ToDouble(dataGridViewMatrix_A->Rows[i]->Cells[j]->Value);
		}
	}

	if (N_A != M_A) {
		MessageBox::Show("Матриця повинна бути квадратною!", "Увага!");
		return System::Void();
	}

	int Rank = Matrix_Rank(A, N_A, M_A);
	textBoxResult->Text = Convert::ToString(Rank);

	return System::Void();
}

System::Void winform::MyForm::buttonRank_B_Click(System::Object^ sender, System::EventArgs^ e)
{
	size_t count = CheckingDataGridViewMatrix_B();
	if (count > 0) {
		MessageBox::Show("Некоректні дані в матриці В!", "Увага!");
		return System::Void();
	}

	for (int i = 0; i < N_B; i++) {
		for (int j = 0; j < M_B; j++) {
			B[i][j] = Convert::ToDouble(dataGridViewMatrix_B->Rows[i]->Cells[j]->Value);
		}
	}

	if (N_B != M_B) {
		MessageBox::Show("Матриця повинна бути квадратною!", "Увага!");
		return;
	}

	int Rank = Matrix_Rank(B, N_B, M_B);
	textBoxResult->Text = Convert::ToString(Rank);

	return System::Void();
}

void winform::MyForm::ShowA()
{
	for (int i = 0; i < N_A; i++) {
		for (int j = 0; j < M_A; j++) {
			dataGridViewMatrix_A->TopLeftHeaderCell->Value = "Матриця А";
			dataGridViewMatrix_A->Columns[j]->HeaderCell->Value = Convert::ToString(j + 1);
			dataGridViewMatrix_A->Rows[i]->HeaderCell->Value = Convert::ToString(i + 1);
			dataGridViewMatrix_A->Rows[i]->Cells[j]->Value = A[i][j];
		}
	}
}

void winform::MyForm::ShowB()
{
	for (int i = 0; i < N_B; i++) {
		for (int j = 0; j < M_B; j++) {
			dataGridViewMatrix_B->TopLeftHeaderCell->Value = "Матриця B";
			dataGridViewMatrix_B->Columns[j]->HeaderCell->Value = Convert::ToString(j + 1);
			dataGridViewMatrix_B->Rows[i]->HeaderCell->Value = Convert::ToString(i + 1);
			dataGridViewMatrix_B->Rows[i]->Cells[j]->Value = B[i][j];
		}
	}
}

void winform::MyForm::ShowC_A(matrix T)
{
	for (int i = 0; i < N_A; i++) {
		for (int j = 0; j < M_A; j++) {
			dataGridViewMatrix_C->TopLeftHeaderCell->Value = "Матриця C";
			dataGridViewMatrix_C->Columns[j]->HeaderCell->Value = Convert::ToString(j + 1);
			dataGridViewMatrix_C->Rows[i]->HeaderCell->Value = Convert::ToString(i + 1);
			dataGridViewMatrix_C->Rows[i]->Cells[j]->Value = T[i][j];
		}
	}
}

void winform::MyForm::ShowC_B(matrix T)
{
	for (int i = 0; i < N_B; i++) {
		for (int j = 0; j < M_B; j++) {
			dataGridViewMatrix_C->TopLeftHeaderCell->Value = "Матриця C";
			dataGridViewMatrix_C->Columns[j]->HeaderCell->Value = Convert::ToString(j + 1);
			dataGridViewMatrix_C->Rows[i]->HeaderCell->Value = Convert::ToString(i + 1);
			dataGridViewMatrix_C->Rows[i]->Cells[j]->Value = T[i][j];
		}
	}
}

size_t winform::MyForm::CheckingTextBoxA() {
	// Checking data from textBox
	size_t count = 0, count2 = 0, count3 = 0;
	System::String^ check = Convert::ToString(textBoxMultiplyBy_A->Text);

	if (!check->Contains("0") && !check->Contains("1") && !check->Contains("2") && !check->Contains("3") && !check->Contains("4") &&
		!check->Contains("5") && !check->Contains("6") && !check->Contains("7") && !check->Contains("8") && !check->Contains("9") &&
		!check->Contains(",") && !check->Contains("-") && !(check->StartsWith("0") && !check->Contains(",")) || check->EndsWith(",")
		|| check->StartsWith(",") || check == "" || (!check->StartsWith("-") && check->Contains("-")))
		count++;


	System::String^ check2 = Convert::ToString(textBoxMultiplyBy_A->Text);
	std::string converted_check2 = msclr::interop::marshal_as< std::string >(check2);
	for (int i = 0; i < converted_check2.size(); i++) {
		if (converted_check2.at(i) != '0' && converted_check2.at(i) != '1' && converted_check2.at(i) != '2' && converted_check2.at(i) !=
			'3' && converted_check2.at(i) != '4' &&
			converted_check2.at(i) != '5' && converted_check2.at(i) != '6' && converted_check2.at(i) != '7' && converted_check2.at(i) !=
			'8' && converted_check2.at(i) != '9' &&
			converted_check2.at(i) != '-' && converted_check2.at(i) != ',')
			count++;
		if (converted_check2.at(i) == ',') {
			count2++;
		}
		if (converted_check2.at(i) == '-') {
			count3++;
		}
	}
	if (count2 > 1) count++;
	if (count3 > 1) count++;
	return count;
}

size_t winform::MyForm::CheckingTextBoxB() {
	// Checking data from textBox
	size_t count = 0, count2 = 0, count3 = 0;
	System::String^ check = Convert::ToString(textBoxMultiplyBy_B->Text);

	if (!check->Contains("0") && !check->Contains("1") && !check->Contains("2") && !check->Contains("3") && !check->Contains("4") &&
		!check->Contains("5") && !check->Contains("6") && !check->Contains("7") && !check->Contains("8") && !check->Contains("9") &&
		!check->Contains(",") && !check->Contains("-") && !(check->StartsWith("0") && !check->Contains(",")) || check->EndsWith(",")
		|| check->StartsWith(",") || check == "" || (!check->StartsWith("-") && check->Contains("-")))
		count++;


	System::String^ check2 = Convert::ToString(textBoxMultiplyBy_B->Text);
	std::string converted_check2 = msclr::interop::marshal_as< std::string >(check2);
	for (int i = 0; i < converted_check2.size(); i++) {
		if (converted_check2.at(i) != '0' && converted_check2.at(i) != '1' && converted_check2.at(i) != '2' && converted_check2.at(i) !=
			'3' && converted_check2.at(i) != '4' &&
			converted_check2.at(i) != '5' && converted_check2.at(i) != '6' && converted_check2.at(i) != '7' && converted_check2.at(i) !=
			'8' && converted_check2.at(i) != '9' &&
			converted_check2.at(i) != '-' && converted_check2.at(i) != ',')
			count++;
		if (converted_check2.at(i) == ',') {
			count2++;
		}
		if (converted_check2.at(i) == '-') {
			count3++;
		}
	}
	if (count2 > 1) count++;
	if (count3 > 1) count++;
	return count;
}

size_t winform::MyForm::CheckingDataGridViewMatrix_A() {
	// Checking data from DataGridView
	size_t count = 0, count2 = 0, count3 = 0;
	for (int n = 0; n < N_A; n++) {
		for (int m = 0; m < M_A; m++) {
			count2 = 0;
			count3 = 0;
			System::String^ check = Convert::ToString(dataGridViewMatrix_A->Rows[n]->Cells[m]->Value);

			if (!check->Contains("0") && !check->Contains("1") && !check->Contains("2") && !check->Contains("3") && !check->Contains("4") &&
				!check->Contains("5") && !check->Contains("6") && !check->Contains("7") && !check->Contains("8") && !check->Contains("9") &&
				!check->Contains(",") && !check->Contains("-") && !(check->StartsWith("0") && !check->Contains(",")) || check->EndsWith(",")
				|| check->StartsWith(",") || check == "" || (!check->StartsWith("-") && check->Contains("-")))
				count++;


			System::String^ check2 = Convert::ToString(dataGridViewMatrix_A->Rows[n]->Cells[m]->Value);
			std::string converted_check2 = msclr::interop::marshal_as< std::string >(check2);
			for (int i = 0; i < converted_check2.size(); i++) {
				if (converted_check2.at(i) != '0' && converted_check2.at(i) != '1' && converted_check2.at(i) != '2' && converted_check2.at(i) !=
					'3' && converted_check2.at(i) != '4' &&
					converted_check2.at(i) != '5' && converted_check2.at(i) != '6' && converted_check2.at(i) != '7' && converted_check2.at(i) !=
					'8' && converted_check2.at(i) != '9' &&
					converted_check2.at(i) != '-' && converted_check2.at(i) != ',')
					count++;
				if (converted_check2.at(i) == ',') {
					count2++;
				}
				if (converted_check2.at(i) == '-') {
					count3++;
				}
			}
			if (count2 > 1) count++;
			if (count3 > 1) count++;
		}
	}
	return count;
}

size_t winform::MyForm::CheckingDataGridViewMatrix_B() {
	// Checking data from DataGridView
	size_t count = 0, count2 = 0, count3 = 0;
	for (int n = 0; n < N_B; n++) {
		for (int m = 0; m < M_B; m++) {
			count2 = 0;
			count3 = 0;
			System::String^ check = Convert::ToString(dataGridViewMatrix_B->Rows[n]->Cells[m]->Value);

			if (!check->Contains("0") && !check->Contains("1") && !check->Contains("2") && !check->Contains("3") && !check->Contains("4") &&
				!check->Contains("5") && !check->Contains("6") && !check->Contains("7") && !check->Contains("8") && !check->Contains("9") &&
				!check->Contains(",") && !check->Contains("-") && !(check->StartsWith("0") && !check->Contains(",")) || check->EndsWith(",")
				|| check->StartsWith(",") || check == "" || (!check->StartsWith("-") && check->Contains("-")))
				count++;


			System::String^ check2 = Convert::ToString(dataGridViewMatrix_B->Rows[n]->Cells[m]->Value);
			std::string converted_check2 = msclr::interop::marshal_as< std::string >(check2);
			for (int i = 0; i < converted_check2.size(); i++) {
				if (converted_check2.at(i) != '0' && converted_check2.at(i) != '1' && converted_check2.at(i) != '2' && converted_check2.at(i) !=
					'3' && converted_check2.at(i) != '4' &&
					converted_check2.at(i) != '5' && converted_check2.at(i) != '6' && converted_check2.at(i) != '7' && converted_check2.at(i) !=
					'8' && converted_check2.at(i) != '9' &&
					converted_check2.at(i) != '-' && converted_check2.at(i) != ',')
					count++;
				if (converted_check2.at(i) == ',') {
					count2++;
				}
				if (converted_check2.at(i) == '-') {
					count3++;
				}
			}
			if (count2 > 1) count++;
			if (count3 > 1) count++;
		}
	}
	return count;
}



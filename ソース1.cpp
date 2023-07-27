#include <iostream>
#include <algorithm>
#include<fstream>
#include<vector>
#include<random>
using namespace std;
random_device engine;

class Answer {
	string number;
	string correction;
public:
	void setNumber(const string& newNumber) { number = newNumber; }
	void setCorrection(const string& newCorrection) { correction = newCorrection; }
	void result() {
		cout << number << " " << correction << endl;
	}
};

template<typename T>
int total(T first, T last) {
	int sum = 0;
	for (T x = first; x != last; ++x) sum += *x;
	return sum;
}

uniform_int_distribution<unsigned>dist1(1, 300);
uniform_int_distribution<unsigned>dist2(1, 300);
uniform_int_distribution<unsigned>dist3(1, 300);
uniform_int_distribution<unsigned>dist4(1, 300);
uniform_int_distribution<unsigned>dist5(1, 300);
uniform_int_distribution<unsigned>dist6(1, 300);
uniform_int_distribution<unsigned>dist7(1, 300);
uniform_int_distribution<unsigned>dist8(1, 300);
uniform_int_distribution<unsigned>dist9(1, 300);
uniform_int_distribution<unsigned>dist10(1, 300);

int main() {
	ofstream outfile("ans.txt", ios_base::out);
	vector<int>point;

	cout << "�悤�����I\n�����ł͉Ȋw�A����A�G�w�ȂǗl�X�ȃW�������̃N�C�Y�ɓ������܂��B��ނ͑S����30��ނ���A���̒�����10���3���N�C�Y���o�肳��܂��B\n";
	cout << "��␳�������10point�ŁA�ő�100point�ł��B1�C2�C3�̃L�[�������ē����Ă��������B�ڎw���S�␳���I\n";

	int y1= dist1(engine);
	if (0 <= y1 && y1 <= 100) {
		cout << "\n1��ځF���{��1�ԑ����c���͍����ł����A2�Ԗڂɑ����c���́H\n" << " " << "1.���" << " " << "2.�c��" << " " << "3.�R�c\n";
		int a;
		cin >> a;

		if (a == 1) {
			cout << "����\n" << endl;
			outfile << "1���" << " " << "�Z\n" << endl;
			point.push_back(10);
		}
		else if (a == 2) {
			cout << "�s����" << " " << "������1�̗��\n" << endl;
			outfile << "1���" << " " << "�~\n" << endl;
			point.push_back(0);
		}
		else if (a == 3) {
			cout << "�s����" << " " << "������1�̗��\n" << endl;
			outfile << "1���" << " " << "�~\n" << endl;
			point.push_back(0);
		}
	}
	if (100 < y1 &&y1 <= 200) {
		cout << "\n1��ځF�g�����v��K(�L���O)�͉��l�AQ(�N�C�[��)�͏����ł��B�ł́AJ(�W���b�N)�́H\n" << " " << "1.���q" << " " << "2.���g��" << " " << "3.���m\n";
		int a;
		cin >> a;

		if (a == 1) {
			cout << "�s����"<<" " << "������2�̏��g��\n" << endl;
			outfile << "1���" << " " << "�~\n" << endl;
			point.push_back(0);
		}
		else if (a == 2) {
			cout << "����\n" << endl;
			outfile << "1���" << " " << "�Z\n" << endl;
			point.push_back(10);
		}
		else if (a == 3) {
			cout << "�s����" << " " << "������2�̏��g��\n" << endl;
			outfile << "1���" << " " << "�~\n" << endl;
			point.push_back(0);
		}
	}
	if (200 < y1 && y1 <= 300) {
		cout << "\n1��ځF�C�^���A�ŕs�g�Ƃ���Ă��鐔���́H\n" << " " << "1.13" << " " << "2.17" << " " << "3.9\n";
		int a;
		cin >> a;

		if (a == 1) {
			cout << "�s����" << " " << "������2��17\n" << endl;
			outfile << "1���" << " " << "�~\n" << endl;
			point.push_back(0);
		}
		else if (a == 2) {
			cout << "����\n" << endl;
			outfile << "1���" << " " << "�Z\n" << endl;
			point.push_back(10);
		}
		else if (a == 3) {
			cout << "�s����" << " " << "������2��17\n" << endl;
			outfile << "1���" << " " << "�~\n" << endl;
			point.push_back(0);
		}
	}

	int y2 = dist2(engine);
	if (0 <= y2 && y2 <= 100) {
		cout << "2��ځF���E�ň�Ԕ���Ă���Ԃ̐F�́H\n" << " " << "1.��" << " " << "2.��" << " " << "3.��\n";
		int b;
		cin >> b;
		if (b == 1) {
			cout << "�s����" << " " << "������2�̔�\n" << endl;
			outfile << "2���" << " " << "�~\n" << endl;
			point.push_back(0);
		}
		else if (b == 2) {
			cout << "����\n" << endl;
			outfile << "2���" << " " << "�Z\n" << endl;
			point.push_back(10);
		}
		else if (b == 3) {
			cout << "�s����" << " " << "������2�̔�\n" << endl;
			outfile << "2���" << " " << "�~\n" << endl;
			point.push_back(0);
		}
	}
	if (100 < y2 && y2 <= 200) {
		cout << "2��ځF�u�e�B���~�X�v�̓C�^���A��ł����A���̈Ӗ��́H\n" << " " << "1.�����܂���" << " " << "2.����������" << " " << "3.�E�C���o����\n";
		int b;
		cin >> b;
		if (b == 1) {
			cout << "����" << endl;
			outfile << "2���" << " " << "�Z\n" << endl;
			point.push_back(10);
		}
		else if (b == 2) {
			cout << "�s����" <<" "<<"������1�́u�����܂��āv\n"<< endl;
			outfile << "2���" << " " << "�~\n" << endl;
			point.push_back(0);
		}
		else if (b == 3) {
			cout << "�s����" << " " << "������1�́u�����܂��āv\n" << endl;
			outfile << "2���" << " " << "�~\n" << endl;
			point.push_back(0);
		}
	}
	if (200 < y2 && y2 <= 300) {
		cout << "2��ځF1882�N�ɓ��{�ɊJ�������ŏ��̓������́H\n" << " " << "1.���R������" << " " << "2.��쓮����" << " " << "3.�V����������\n";
		int b;
		cin >> b;
		if (b == 1) {
			cout << "�s����" << " " << "������2�̏�쓮����\n" << endl;
			outfile << "2���" << " " << "�~\n" << endl;
			point.push_back(0);
		}
		else if (b == 2) {
			cout << "����\n" << endl;
			outfile << "2���" << " " << "�Z\n" << endl;
			point.push_back(10);
		}
		else if (b == 3) {
			cout << "�s����" << " " << "������2�̏�쓮����\n" << endl;
			outfile << "2���" << " " << "�~\n" << endl;
			point.push_back(0);
		}
	}
	

	int y3 = dist3(engine);
	if (0 <= y3 && y3 <= 100) {
		cout << "3��ځF�Q�������J�͂ǂ̒��x�ł�މJ���w���H\n" << " " << "1.10��" << " " << "2.30��" << " " << "3.1����\n";
		int c;
		cin >> c;
		if (c == 1) {
			cout << "�s����" << " " << "������3��1����\n" << endl;
			outfile << "3���" << " " << "�~\n" << endl;
			point.push_back(0);
		}
		else if (c == 2) {
			cout << "�s����" << " " << "������3��1����\n" << endl;
			outfile << "3���" << " " << "�~\n" << endl;
			point.push_back(0);
		}
		else if (c == 3) {
			cout << "����\n" << endl;
			outfile << "3���" << " " << "�Z\n" << endl;
			point.push_back(10);
		}
	}
	if (100 < y3 && y3 <= 200) {
		cout << "3��ځF���{��L�����l�́H\n" << " " << "1.���捻�u" << " " << "2.�����X���u" << " " << "3.���c�����u\n";
		int c;
		cin >> c;
		if (c == 1) {
			cout << "�s����" << " " << "������2�̉����X���u\n" << endl;
			outfile << "3���" << " " << "�~\n" << endl;
			point.push_back(0);
		}
		else if (c == 2) {
			cout << "����\n" << endl;
			outfile << "3���" << " " << "�Z\n" << endl;
			point.push_back(10);
		}
		else if (c == 3) {
			cout << "�s����" <<" "<<"������2�̉����X���u\n"<< endl;
			outfile << "3���" << " " << "�~\n" << endl;
			point.push_back(0);
		}
	}
	if (200 < y3 && y3 <= 300) {
		cout << "3��ځF�I�����_�̎�s�́H\n" << " " << "1.�A���X�e���_��" << " " << "2.���w�[���e" << " " << "3.�I�^��\n";
		int c;
		cin >> c;
		if (c == 1) {
			cout << "����\n" <<  endl;
			outfile << "3���" << " " << "�Z\n" << endl;
			point.push_back(10);
		}
		else if (c == 2) {
			cout << "�s����" <<" "<<"������1�̃A���X�e���_��"<< endl;
			outfile << "3���" << " " << "�~\n" << endl;
			point.push_back(0);
		}
		else if (c == 3) {
			cout << "�s����" << " " << "������1�̃A���X�e���_��\n" << endl;
			outfile << "3���" << " " << "�~\n" << endl;
			point.push_back(0);
		}
	}

	int y4 = dist4(engine);
	if (0 <= y4 && y4 <= 100) {
		cout << "4��ځF���̂�����؂ɕ��ނ������̂͂ǂ�H\n" << " " << "1.�݂���" << " " << "2.�C�`�S" << " " << "3.�U�N��\n";
		int d;
		cin >> d;
		if (d == 1) {
			cout << "�s����" << " " << "������2�̃C�`�S\n" << endl;
			outfile << "4���" << " " << "�~\n" << endl;
			point.push_back(0);
		}
		else if (d == 2) {
			cout << "����\n" << endl;
			outfile << "4���" << " " << "�Z\n" << endl;
			point.push_back(10);
		}
		else if (d == 3) {
			cout << "�s����" << " " << "������2�̃C�`�S\n" << endl;
			outfile << "4���" << " " << "�~\n" << endl;
			point.push_back(0);
		}
	}
	if (100 < y4 && y4 <= 200) {
		cout << "4��ځF���E��Y�o�^�����E�ꑽ�����́H\n" << " " << "1.�A�����J" << " " << "2.�C�^���A" << " " << "3.�t�����X\n";
		int d;
		cin >> d;
		if (d == 1) {
			cout << "�s����" << " " << "������2�̃C�^���A\n" << endl;
			outfile << "4���" << " " << "�~\n" << endl;
			point.push_back(0);
		}
		else if (d == 2) {
			cout << "����\n" << endl;
			outfile << "4���" << " " << "�Z\n" << endl;
			point.push_back(10);
		}
		else if (d == 3) {
			cout << "�s����" << " " << "������2�̃C�^���A\n" << endl;
			outfile << "4���" << " " << "�~\n" << endl;
			point.push_back(0);
		}
	}
	if (200 < y4 && y4 <= 300) {
		cout << "4��ځF�����S�����}���ɗ�₷�Ƃǂ��Ȃ�H\n" << " " << "1.�u�n����v" << " " << "2.�u�_�炩���Ȃ�v" << " " << "3.�u��������v\n";
		int d;
		cin >> d;
		if (d == 1) {
			cout << "�s����" << " " << "������3�́u��������v\n" << endl;
			outfile << "4���" << " " << "�~\n" << endl;
			point.push_back(0);
		}
		else if (d == 2) {
			cout << "�s����" <<" "<<"������3�́u��������v\n"<< endl;
			outfile << "4���" << " " << "�~\n" << endl;
			point.push_back(0);
		}
		else if (d == 3) {
			cout << "����\n"  << endl;
			outfile << "4���" << " " << "�Z\n" << endl;
			point.push_back(10);
		}
	}

	int y5 = dist5(engine);
	if (0 <= y5 && y5 <= 100) {
		cout << "5��ځF�u�����ǂ��v�̈Ӗ��́H\n" << " " << "1.�x�X�g�^�C�~���O" << " " << "2.������" << " " << "3.�ʂ��\n";
		int e;
		cin >> e;
		if (e == 1) {
			cout << "����\n" << endl;
			outfile << "5���" << " " << "�Z\n" << endl;
			point.push_back(10);
		}
		else if (e == 2) {
			cout << "�s����" << " " << "������1�̃x�X�g�^�C�~���O\n" << endl;
			outfile << "5���" << " " << "�~\n" << endl;
			point.push_back(0);
		}
		else if (e == 3) {
			cout << "�s����" << " " << "������1�̃x�X�g�^�C�~���O\n" << endl;
			outfile << "5���" << " " << "�~\n" << endl;
			point.push_back(0);
		}
	}
	if (100 < y5 && y5 <= 200) {
		cout << "5��ځF�o�i�i�̐��Y��No1�͂ǂ��H\n" << " " << "1.�C���h" << " " << "2.�t�B���s��" << " " << "3.�u���W��\n";
		int e;
		cin >> e;
		if (e == 1) {
			cout << "����\n" << endl;
			outfile << "5���" << " " << "�Z\n" << endl;
			point.push_back(10);
		}
		else if (e == 2) {
			cout << "�s����" << " " << "������1�̃C���h\n" << endl;
			outfile << "5���" << " " << "�~\n" << endl;
			point.push_back(0);
		}
		else if (e == 3) {
			cout << "�s����" << " " << "������1�̃C���h\n" << endl;
			outfile << "5���" << " " << "�~\n" << endl;
			point.push_back(0);
		}
	}
	if (200 < y5 && y5 <= 300) {
		cout << "5��ځF�C�����̌��]�����́H\n" << " " << "1. 64.8�N" << " " << "2. 164.8�N" << " " << "3. 326.2�N\n";
		int e;
		cin >> e;
		if (e == 1) {
			cout << "�s����\n"<<" "<< "������2��164.8�N\n" << endl;
			outfile << "5���" << " " << "�~\n" << endl;
			point.push_back(0);
		}
		else if (e == 2) {
			cout << "����\n" << endl;
			outfile << "5���" << " " << "�Z\n" << endl;
			point.push_back(10);
		}
		else if (e == 3) {
			cout << "�s����\n" << " " << "������2��164.8�N\n" << endl;
			outfile << "5���" << " " << "�~\n" << endl;
			point.push_back(0);
		}
	}

	int y6 = dist6(engine);
	if (0 <= y6 && y6 <= 100) {
		cout << "6��ځF�T�C�̊p�͉��łł��Ă���H\n" << " " << "1.��" << " " << "2.��" << " " << "3.��\n";
		int f;
		cin >> f;
		if (f == 1) {
			cout << "�s����" << " " << "������2�̖�\n" << endl;
			outfile << "6���" << " " << "�~\n" << endl;
			point.push_back(0);
		}
		else if (f == 2) {
			cout << "����\n" << endl;
			outfile << "6���" << " " << "�Z\n" << endl;
			point.push_back(10);
		}
		else if (f == 3) {
			cout << "�s����" << " " << "������2�̖�\n" << endl;
			outfile << "6���" << " " << "�~\n" << endl;
			point.push_back(0);
		}
	}
	if (100 < y6 && y6 <= 200) {
		cout << "6��ځF�₽�����̂�H�ׂ��Ƃ��ɋN���铪�ɂ̐������̂́H\n" << " " << "1.�V���[�x�b�g����" << " " << "2.�A�C�X�N���[������" << " " << "3.�����X����\n";
		int f;
		cin >> f;
		if (f == 1) {
			cout << "�s����" << " " << "������2�̃A�C�X�N���[������\n" << endl;
			outfile << "6���" << " " << "�~\n" << endl;
			point.push_back(0);
		}
		else if (f == 2) {
			cout << "����\n" << endl;
			outfile << "6���" << " " << "�Z\n" << endl;
			point.push_back(10);
		}
		else if (f == 3) {
			cout << "�s����" << " " << "������2�̃A�C�X�N���[������\n" << endl;
			outfile << "6���" << " " << "�~\n" << endl;
			point.push_back(0);
		}
	}
	if (200 < y6 && y6 <= 300) {
		cout << "6��ځF�t�O���c��ނƂ��ɖc��܂���튯�́H\n" << " " << "1.��" << " " << "2.�j" << " " << "3.�x\n";
		int f;
		cin >> f;
		if (f == 1) {
			cout << "����\n" << endl;
			outfile << "6���" << " " << "�Z\n" << endl;
			point.push_back(10);
		}
		else if (f == 2) {
			cout << "�s����" <<" "<<"������1�̈�\n"<< endl;
			outfile << "6���" << " " << "�~\n" << endl;
			point.push_back(0);
		}
		else if (f == 3) {
			cout << "�s����" << " " << "������1�̈�\n" << endl;
			outfile << "6���" << " " << "�~\n" << endl;
			point.push_back(0);
		}
	}

	int y7 = dist7(engine);
	if (0 <= y7 && y7 <= 100) {
		cout << "7��ځF�T�̎����͂ǂ̂��炢�H\n" << " " << "1.��100�N" << " " << "2.��200�N" << " " << "3.��300�N\n";
		int g;
		cin >> g;
		if (g == 1) {
			cout << "�s����" << " " << "������2�̖�200�N\n" << endl;
			outfile << "7���" << " " << "�~\n" << endl;
			point.push_back(0);
		}
		else if (g == 2) {
			cout << "����\n" << endl;
			outfile << "7���" << " " << "�Z\n" << endl;
			point.push_back(10);
		}
		else if (g == 3) {
			cout << "�s����" << " " << "������2�̖�200�N\n" << endl;
			outfile << "7���" << " " << "�~\n" << endl;
			point.push_back(0);
		}
	}
	if (100 < y7 && y7 <= 200) {
		cout << "7��ځF�J���I�P�͗��ꂾ���A�������̂́H\n" << " " << "1.�J���[�I�P�[�V����" << " " << "2.��I�[�P�X�g��" << " " << "3.�J���I�P�[�V����\n";
		int g;
		cin >> g;
		if (g == 1) {
			cout << "�s����" << " " << "������2�̋�I�[�P�X�g��\n" << endl;
			outfile << "7���" << " " << "�~\n" << endl;
			point.push_back(0);
		}
		else if (g == 2) {
			cout << "����\n" << endl;
			outfile << "7���" << " " << "�Z\n" << endl;
			point.push_back(10);
		}
		else if (g == 3) {
			cout << "�s����" << " " << "������2�̋�I�[�P�X�g��\n" << endl;
			outfile << "7���" << " " << "�~\n" << endl;
			point.push_back(0);
		}
	}
	if (200 < y7 && y7 <= 300) {
		cout << "7��ځF���͌����ŗp����C���^�̊̖��O�́H\n" << " " << "1.�W���x�X�g��" << " " << "2.�G���f���g��" << " " << "3.�����h���g��\n";
		int g;
		cin >> g;
		if (g == 1) {
			cout << "�s����" << " " << "������2�̃����h���g��\n" << endl;
			outfile << "7���" << " " << "�~\n" << endl;
			point.push_back(0);
		}
		else if (g == 2) {
			cout << "�s����" <<" "<<"������2�̃����h���g��\n"<< endl;
			outfile << "7���" << " " << "�~\n" << endl;
			point.push_back(0);
		}
		else if (g == 3) {
			cout << "����\n" << endl;
			outfile << "7���" << " " << "�Z\n" << endl;
			point.push_back(10);
		}
	}

	int y8 = dist8(engine);
	if (0 <= y8 && y8 <= 100) {
		cout << "8��ځF�C��ł͉��F�������ɂ����H\n" << " " << "1.��" << " " << "2.��" << " " << "3.��\n";
		int h;
		cin >> h;
		if (h == 1) {
			cout << "�s����" << " " << "������3�̐�\n" << endl;
			outfile << "8���" << " " << "�~\n" << endl;
			point.push_back(0);
		}
		else if (h == 2) {
			cout << "�s����" << " " << "������3�̐�\n" << endl;
			outfile << "8���" << " " << "�~\n" << endl;
			point.push_back(0);
		}
		else if (h == 3) {
			cout << "����\n" << endl;
			outfile << "8���" << " " << "�Z\n" << endl;
			point.push_back(10);
		}
	}
	if (100 < y8 && y8 <= 200) {
		cout << "8��ځF�n���Z���{���̐j�̐��́H\n" << " " << "1. 100�{" << " " << "2. 200�{" << " " << "3. 400�{\n";
		int h;
		cin >> h;
		if (h == 1) {
			cout << "�s����" << " " << "������3��400�{\n" << endl;
			outfile << "8���" << " " << "�~\n" << endl;
			point.push_back(0);
		}
		else if (h == 2) {
			cout << "�s����" << " " << "������3��400�{\n" << endl;
			outfile << "8���" << " " << "�~\n" << endl;
			point.push_back(0);
		}
		else if (h == 3) {
			cout << "����\n" << endl;
			outfile << "8���" << " " << "�Z\n" << endl;
			point.push_back(10);
		}
	}
	if (200 < y8 && y8 <= 300) {
		cout << "8��ځF����񂯂�́u�ŏ��̓O�[�v�����߂Č������l�́H\n" << " " << "1. ���ΉƂ����" << " " << "2. �u������" << " " << "3. �r�[�g������\n";
		int h;
		cin >> h;
		if (h == 1) {
			cout << "�s����" << " " << "������2�̎u������\n" << endl;
			outfile << "8���" << " " << "�~\n" << endl;
			point.push_back(0);
		}
		else if (h == 2) {
			cout << "����\n" << endl;
			outfile << "8���" << " " << "�Z\n" << endl;
			point.push_back(10);
		}
		else if (h == 3) {
			cout << "�s����"<<" "<<"������2�̎u������\n" << endl;
			outfile << "8���" << " " << "�~\n" << endl;
			point.push_back(0);
		}
	}

	int y9 = dist9(engine);
	if (0 <= y9 && y9 <= 100) {
		cout << "9��ځF�̗̂X�փ|�X�g�ő��݂����F�́H\n" << " " << "1.��" << " " << "2.��" << " " << "3.��\n";
		int i;
		cin >> i;
		if (i == 1) {
			cout << "�s����" << " " << "������2�̍�\n" << endl;
			outfile << "9���" << " " << "�~\n" << endl;
			point.push_back(0);
		}
		else if (i == 2) {
			cout << "����\n" << endl;
			outfile << "9���" << " " << "�Z\n" << endl;
			point.push_back(10);
		}
		else if (i == 3) {
			cout << "�s����" << " " << "������2�̍�\n" << endl;
			outfile << "9���" << " " << "�~\n" << endl;
			point.push_back(0);
		}
	}
	if (100 < y9 && y9 <= 200) {
		cout << "9��ځF���{�ōŏ��Ɋ��������W��d�g���́H\n" << " " << "1.���É��e���r��" << " " << "2.�����ۂ�e���r��" << " " << "3.�����^���[\n";
		int i;
		cin >> i;
		if (i == 1) {
			cout << "����\n" << endl;
			outfile << "9���" << " " << "�Z\n" << endl;
			point.push_back(10);
		}
		else if (i == 2) {
			cout << "�s����"<<" "<<"������1�̖��É��e���r��\n" << endl;
			outfile << "9���" << " " << "�~\n" << endl;
			point.push_back(0);
		}
		else if (i == 3) {
			cout << "�s����" << " " << "������1�̖��É��e���r��\n" << endl;
			outfile << "9���" << " " << "�~\n" << endl;
			point.push_back(0);
		}
	}
	if (200 < y9 && y9 <= 300) {
		cout << "9��ځF���{�ň�ԏ�~�q���������w�́H\n" << " " << "1.�V�h�w" << " " << "2.�����w" << " " << "3.�a�J�w\n";
		int i;
		cin >> i;
		if (i == 1) {
			cout << "����\n" << endl;
			outfile << "9���" << " " << "�Z\n" << endl;
			point.push_back(10);
		}
		else if (i == 2) {
			cout << "�s����" << " " << "������1�̐V�h�w\n" << endl;
			outfile << "9���" << " " << "�~\n" << endl;
			point.push_back(0);
		}
		else if (i == 3) {
			cout << "�s����" << " " << "������1�̐V�h�w\n" << endl;
			outfile << "9���" << " " << "�~\n" << endl;
			point.push_back(0);
		}
	}

	int y10 = dist10(engine);
	if (0 <= y10&&y10 <= 100) {
		cout << "10��ځF��l�̏������o�Y�����l���̃M�l�X�L�^�͉��l�H\n" << " " << "1. 35�l" << " " << "2. 57�l" << " " << "3. 69�l\n";
		int j;
		cin >> j;
		if (j == 1) {
			cout << "�s����" << " " << "������3��69�l\n" << endl;
			outfile << "10���" << " " << "�~\n" << endl;
			point.push_back(0);
		}
		else if (j == 2) {
			cout << "�s����" << " " << "������3��69�l\n" << endl;
			outfile << "10���" << " " << "�~\n" << endl;
			point.push_back(0);
		}
		else if (j == 3) {
			cout << "����\n" << endl;
			outfile << "10���" << " " << "�Z\n" << endl;
			point.push_back(10);
		}
	}
	if (100 < y10&&y10 <= 200) {
		cout << "10��ځF��1�񃏁[���h�J�b�v�̗D�����́H\n" << " " << "1.�E���O�A�C" << " " << "2.�X�E�F�[�f��" << " " << "3.�u���W��\n";
		int j;
		cin >> j;
		if (j == 1) {
			cout << "����\n" << endl;
			outfile << "10���" << " " << "�Z\n" << endl;
			point.push_back(10);
		}
		else if (j == 2) {
			cout << "�s����" << " " << "������1�̃E���O�A�C\n" << endl;
			outfile << "10���" << " " << "�~\n" << endl;
			point.push_back(0);
		}
		else if (j == 3) {
			cout << "�s����"<<" "<<"������1�̃E���O�A�C\n" << endl;
			outfile << "10���" << " " << "�~\n" << endl;
			point.push_back(0);
		}
	}
	if (200 < y10&&y10 <= 300) {
		cout << "10��ځF���{�̕S�~�d�݂ɕ`����Ă���Ԃ́H\n" << " " << "1.�e" << " " << "2.��" << " " << "3.���O\n";
		int j;
		cin >> j;
		if (j == 1) {
			cout << "�s����" << " " << "������2����\n" << endl;
			outfile << "10���" << " " << "�~\n" << endl;
			point.push_back(0);
		}
		else if (j == 2) {
			cout << "����\n" << endl;
			outfile << "10���" << " " << "�Z\n" << endl;
			point.push_back(10);
		}
		else if (j == 3) {
			cout << "�s����"<<" "<<"������2�̍�\n" << endl;
			outfile << "10���" << " " << "�~\n" << endl;
			point.push_back(0);
		}
	}
	outfile.close();
	cout << "����ꂳ�܂ł����B�uOK�v�Ɠ��͂���ƌ��ʂ������܂��B" << endl;

	ifstream infile("ans.txt");
	vector<Answer>v1;
	string NUMBER;
	string CORRECTION;
	while (infile >> NUMBER >> CORRECTION) {
		v1.emplace_back();
		v1[v1.size() - 1].setNumber(NUMBER);
		v1[v1.size() - 1].setCorrection(CORRECTION);
	}
	infile.close();

	string k;
	cin >> k;
	if (k=="OK") {

		cout << "���Ȃ��̐��т́c\n";
		for (int i = 0; i < v1.size(); i++) v1[i].result();
		cout << "\n����āA���Ȃ���point�́c\n";

		for (auto i = point.cbegin(); i != point.end(); ++i) {
			cout << "[" << *i << "]" << endl;
		}
		int finalpoint = total(point.begin(), point.end());
		cout << "\n���v���_�́A" << finalpoint << "�_�ł��B" << endl;

		if (finalpoint <= 30) {
			cout << "���Ȃ��͂܂��܂��m����������I�撣���Ă��������I" << endl;
		}
		if (30 < finalpoint && finalpoint <= 70) {
			cout << "���Ȃ��͂��Ȃ�̕��m��ł��I���̒��q�Ŋ撣���Ă��������I" << endl;
		}
		if (70 < finalpoint && finalpoint <= 90) {
			cout << "���Ȃ��͂��Ȃ�̒m�����������ł��I�f���炵���I" << endl;
		}
		if (90 < finalpoint && finalpoint == 100) {
			cout << "�������I���Ȃ������N�C�Y���̏̍��ɂӂ��킵���ł��I" << endl;
		}
	}
}


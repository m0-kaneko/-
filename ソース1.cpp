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

	cout << "ようこそ！\nここでは科学、国語、雑学など様々なジャンルのクイズに答えられます。種類は全部で30種類あり、その中から10題の3択クイズが出題されます。\n";
	cout << "一問正解すると10pointで、最大100pointです。1，2，3のキーを押して答えてください。目指せ全問正解！\n";

	int y1= dist1(engine);
	if (0 <= y1 && y1 <= 100) {
		cout << "\n1問目：日本で1番多い苗字は佐藤ですが、2番目に多い苗字は？\n" << " " << "1.鈴木" << " " << "2.田中" << " " << "3.山田\n";
		int a;
		cin >> a;

		if (a == 1) {
			cout << "正解\n" << endl;
			outfile << "1問目" << " " << "〇\n" << endl;
			point.push_back(10);
		}
		else if (a == 2) {
			cout << "不正解" << " " << "正解は1の鈴木\n" << endl;
			outfile << "1問目" << " " << "×\n" << endl;
			point.push_back(0);
		}
		else if (a == 3) {
			cout << "不正解" << " " << "正解は1の鈴木\n" << endl;
			outfile << "1問目" << " " << "×\n" << endl;
			point.push_back(0);
		}
	}
	if (100 < y1 &&y1 <= 200) {
		cout << "\n1問目：トランプのK(キング)は王様、Q(クイーン)は女王です。では、J(ジャック)は？\n" << " " << "1.王子" << " " << "2.召使い" << " " << "3.兵士\n";
		int a;
		cin >> a;

		if (a == 1) {
			cout << "不正解"<<" " << "正解は2の召使い\n" << endl;
			outfile << "1問目" << " " << "×\n" << endl;
			point.push_back(0);
		}
		else if (a == 2) {
			cout << "正解\n" << endl;
			outfile << "1問目" << " " << "〇\n" << endl;
			point.push_back(10);
		}
		else if (a == 3) {
			cout << "不正解" << " " << "正解は2の召使い\n" << endl;
			outfile << "1問目" << " " << "×\n" << endl;
			point.push_back(0);
		}
	}
	if (200 < y1 && y1 <= 300) {
		cout << "\n1問目：イタリアで不吉とされている数字は？\n" << " " << "1.13" << " " << "2.17" << " " << "3.9\n";
		int a;
		cin >> a;

		if (a == 1) {
			cout << "不正解" << " " << "正解は2の17\n" << endl;
			outfile << "1問目" << " " << "×\n" << endl;
			point.push_back(0);
		}
		else if (a == 2) {
			cout << "正解\n" << endl;
			outfile << "1問目" << " " << "〇\n" << endl;
			point.push_back(10);
		}
		else if (a == 3) {
			cout << "不正解" << " " << "正解は2の17\n" << endl;
			outfile << "1問目" << " " << "×\n" << endl;
			point.push_back(0);
		}
	}

	int y2 = dist2(engine);
	if (0 <= y2 && y2 <= 100) {
		cout << "2問目：世界で一番売れている車の色は？\n" << " " << "1.黒" << " " << "2.白" << " " << "3.青\n";
		int b;
		cin >> b;
		if (b == 1) {
			cout << "不正解" << " " << "正解は2の白\n" << endl;
			outfile << "2問目" << " " << "×\n" << endl;
			point.push_back(0);
		}
		else if (b == 2) {
			cout << "正解\n" << endl;
			outfile << "2問目" << " " << "〇\n" << endl;
			point.push_back(10);
		}
		else if (b == 3) {
			cout << "不正解" << " " << "正解は2の白\n" << endl;
			outfile << "2問目" << " " << "×\n" << endl;
			point.push_back(0);
		}
	}
	if (100 < y2 && y2 <= 200) {
		cout << "2問目：「ティラミス」はイタリア語ですが、その意味は？\n" << " " << "1.私を励まして" << " " << "2.落ち着いて" << " " << "3.勇気を出そう\n";
		int b;
		cin >> b;
		if (b == 1) {
			cout << "正解" << endl;
			outfile << "2問目" << " " << "〇\n" << endl;
			point.push_back(10);
		}
		else if (b == 2) {
			cout << "不正解" <<" "<<"正解は1の「私を励まして」\n"<< endl;
			outfile << "2問目" << " " << "×\n" << endl;
			point.push_back(0);
		}
		else if (b == 3) {
			cout << "不正解" << " " << "正解は1の「私を励まして」\n" << endl;
			outfile << "2問目" << " " << "×\n" << endl;
			point.push_back(0);
		}
	}
	if (200 < y2 && y2 <= 300) {
		cout << "2問目：1882年に日本に開園した最初の動物園は？\n" << " " << "1.東山動物園" << " " << "2.上野動物園" << " " << "3.天王寺動物園\n";
		int b;
		cin >> b;
		if (b == 1) {
			cout << "不正解" << " " << "正解は2の上野動物園\n" << endl;
			outfile << "2問目" << " " << "×\n" << endl;
			point.push_back(0);
		}
		else if (b == 2) {
			cout << "正解\n" << endl;
			outfile << "2問目" << " " << "〇\n" << endl;
			point.push_back(10);
		}
		else if (b == 3) {
			cout << "不正解" << " " << "正解は2の上野動物園\n" << endl;
			outfile << "2問目" << " " << "×\n" << endl;
			point.push_back(0);
		}
	}
	

	int y3 = dist3(engine);
	if (0 <= y3 && y3 <= 100) {
		cout << "3問目：ゲリラ豪雨はどの程度でやむ雨を指す？\n" << " " << "1.10分" << " " << "2.30分" << " " << "3.1時間\n";
		int c;
		cin >> c;
		if (c == 1) {
			cout << "不正解" << " " << "正解は3の1時間\n" << endl;
			outfile << "3問目" << " " << "×\n" << endl;
			point.push_back(0);
		}
		else if (c == 2) {
			cout << "不正解" << " " << "正解は3の1時間\n" << endl;
			outfile << "3問目" << " " << "×\n" << endl;
			point.push_back(0);
		}
		else if (c == 3) {
			cout << "正解\n" << endl;
			outfile << "3問目" << " " << "〇\n" << endl;
			point.push_back(10);
		}
	}
	if (100 < y3 && y3 <= 200) {
		cout << "3問目：日本一広い砂浜は？\n" << " " << "1.鳥取砂丘" << " " << "2.猿ヶ森砂丘" << " " << "3.中田島砂丘\n";
		int c;
		cin >> c;
		if (c == 1) {
			cout << "不正解" << " " << "正解は2の猿ヶ森砂丘\n" << endl;
			outfile << "3問目" << " " << "×\n" << endl;
			point.push_back(0);
		}
		else if (c == 2) {
			cout << "正解\n" << endl;
			outfile << "3問目" << " " << "〇\n" << endl;
			point.push_back(10);
		}
		else if (c == 3) {
			cout << "不正解" <<" "<<"正解は2の猿ヶ森砂丘\n"<< endl;
			outfile << "3問目" << " " << "×\n" << endl;
			point.push_back(0);
		}
	}
	if (200 < y3 && y3 <= 300) {
		cout << "3問目：オランダの首都は？\n" << " " << "1.アムステルダム" << " " << "2.メヘーンテ" << " " << "3.オタワ\n";
		int c;
		cin >> c;
		if (c == 1) {
			cout << "正解\n" <<  endl;
			outfile << "3問目" << " " << "〇\n" << endl;
			point.push_back(10);
		}
		else if (c == 2) {
			cout << "不正解" <<" "<<"正解は1のアムステルダム"<< endl;
			outfile << "3問目" << " " << "×\n" << endl;
			point.push_back(0);
		}
		else if (c == 3) {
			cout << "不正解" << " " << "正解は1のアムステルダム\n" << endl;
			outfile << "3問目" << " " << "×\n" << endl;
			point.push_back(0);
		}
	}

	int y4 = dist4(engine);
	if (0 <= y4 && y4 <= 100) {
		cout << "4問目：次のうち野菜に分類されるものはどれ？\n" << " " << "1.みかん" << " " << "2.イチゴ" << " " << "3.ザクロ\n";
		int d;
		cin >> d;
		if (d == 1) {
			cout << "不正解" << " " << "正解は2のイチゴ\n" << endl;
			outfile << "4問目" << " " << "×\n" << endl;
			point.push_back(0);
		}
		else if (d == 2) {
			cout << "正解\n" << endl;
			outfile << "4問目" << " " << "〇\n" << endl;
			point.push_back(10);
		}
		else if (d == 3) {
			cout << "不正解" << " " << "正解は2のイチゴ\n" << endl;
			outfile << "4問目" << " " << "×\n" << endl;
			point.push_back(0);
		}
	}
	if (100 < y4 && y4 <= 200) {
		cout << "4問目：世界遺産登録が世界一多い国は？\n" << " " << "1.アメリカ" << " " << "2.イタリア" << " " << "3.フランス\n";
		int d;
		cin >> d;
		if (d == 1) {
			cout << "不正解" << " " << "正解は2のイタリア\n" << endl;
			outfile << "4問目" << " " << "×\n" << endl;
			point.push_back(0);
		}
		else if (d == 2) {
			cout << "正解\n" << endl;
			outfile << "4問目" << " " << "〇\n" << endl;
			point.push_back(10);
		}
		else if (d == 3) {
			cout << "不正解" << " " << "正解は2のイタリア\n" << endl;
			outfile << "4問目" << " " << "×\n" << endl;
			point.push_back(0);
		}
	}
	if (200 < y4 && y4 <= 300) {
		cout << "4問目：消しゴムを急激に冷やすとどうなる？\n" << " " << "1.「溶ける」" << " " << "2.「柔らかくなる」" << " " << "3.「爆発する」\n";
		int d;
		cin >> d;
		if (d == 1) {
			cout << "不正解" << " " << "正解は3の「爆発する」\n" << endl;
			outfile << "4問目" << " " << "×\n" << endl;
			point.push_back(0);
		}
		else if (d == 2) {
			cout << "不正解" <<" "<<"正解は3の「爆発する」\n"<< endl;
			outfile << "4問目" << " " << "×\n" << endl;
			point.push_back(0);
		}
		else if (d == 3) {
			cout << "正解\n"  << endl;
			outfile << "4問目" << " " << "〇\n" << endl;
			point.push_back(10);
		}
	}

	int y5 = dist5(engine);
	if (0 <= y5 && y5 <= 100) {
		cout << "5問目：「しおどき」の意味は？\n" << " " << "1.ベストタイミング" << " " << "2.引き際" << " " << "3.別れ際\n";
		int e;
		cin >> e;
		if (e == 1) {
			cout << "正解\n" << endl;
			outfile << "5問目" << " " << "〇\n" << endl;
			point.push_back(10);
		}
		else if (e == 2) {
			cout << "不正解" << " " << "正解は1のベストタイミング\n" << endl;
			outfile << "5問目" << " " << "×\n" << endl;
			point.push_back(0);
		}
		else if (e == 3) {
			cout << "不正解" << " " << "正解は1のベストタイミング\n" << endl;
			outfile << "5問目" << " " << "×\n" << endl;
			point.push_back(0);
		}
	}
	if (100 < y5 && y5 <= 200) {
		cout << "5問目：バナナの生産量No1はどこ？\n" << " " << "1.インド" << " " << "2.フィリピン" << " " << "3.ブラジル\n";
		int e;
		cin >> e;
		if (e == 1) {
			cout << "正解\n" << endl;
			outfile << "5問目" << " " << "〇\n" << endl;
			point.push_back(10);
		}
		else if (e == 2) {
			cout << "不正解" << " " << "正解は1のインド\n" << endl;
			outfile << "5問目" << " " << "×\n" << endl;
			point.push_back(0);
		}
		else if (e == 3) {
			cout << "不正解" << " " << "正解は1のインド\n" << endl;
			outfile << "5問目" << " " << "×\n" << endl;
			point.push_back(0);
		}
	}
	if (200 < y5 && y5 <= 300) {
		cout << "5問目：海王星の公転周期は？\n" << " " << "1. 64.8年" << " " << "2. 164.8年" << " " << "3. 326.2年\n";
		int e;
		cin >> e;
		if (e == 1) {
			cout << "不正解\n"<<" "<< "正解は2の164.8年\n" << endl;
			outfile << "5問目" << " " << "×\n" << endl;
			point.push_back(0);
		}
		else if (e == 2) {
			cout << "正解\n" << endl;
			outfile << "5問目" << " " << "〇\n" << endl;
			point.push_back(10);
		}
		else if (e == 3) {
			cout << "不正解\n" << " " << "正解は2の164.8年\n" << endl;
			outfile << "5問目" << " " << "×\n" << endl;
			point.push_back(0);
		}
	}

	int y6 = dist6(engine);
	if (0 <= y6 && y6 <= 100) {
		cout << "6問目：サイの角は何でできている？\n" << " " << "1.歯" << " " << "2.毛" << " " << "3.骨\n";
		int f;
		cin >> f;
		if (f == 1) {
			cout << "不正解" << " " << "正解は2の毛\n" << endl;
			outfile << "6問目" << " " << "×\n" << endl;
			point.push_back(0);
		}
		else if (f == 2) {
			cout << "正解\n" << endl;
			outfile << "6問目" << " " << "〇\n" << endl;
			point.push_back(10);
		}
		else if (f == 3) {
			cout << "不正解" << " " << "正解は2の毛\n" << endl;
			outfile << "6問目" << " " << "×\n" << endl;
			point.push_back(0);
		}
	}
	if (100 < y6 && y6 <= 200) {
		cout << "6問目：冷たいものを食べたときに起こる頭痛の正式名称は？\n" << " " << "1.シャーベット頭痛" << " " << "2.アイスクリーム頭痛" << " " << "3.かき氷頭痛\n";
		int f;
		cin >> f;
		if (f == 1) {
			cout << "不正解" << " " << "正解は2のアイスクリーム頭痛\n" << endl;
			outfile << "6問目" << " " << "×\n" << endl;
			point.push_back(0);
		}
		else if (f == 2) {
			cout << "正解\n" << endl;
			outfile << "6問目" << " " << "〇\n" << endl;
			point.push_back(10);
		}
		else if (f == 3) {
			cout << "不正解" << " " << "正解は2のアイスクリーム頭痛\n" << endl;
			outfile << "6問目" << " " << "×\n" << endl;
			point.push_back(0);
		}
	}
	if (200 < y6 && y6 <= 300) {
		cout << "6問目：フグが膨らむときに膨らませる器官は？\n" << " " << "1.胃" << " " << "2.頬" << " " << "3.肺\n";
		int f;
		cin >> f;
		if (f == 1) {
			cout << "正解\n" << endl;
			outfile << "6問目" << " " << "〇\n" << endl;
			point.push_back(10);
		}
		else if (f == 2) {
			cout << "不正解" <<" "<<"正解は1の胃\n"<< endl;
			outfile << "6問目" << " " << "×\n" << endl;
			point.push_back(0);
		}
		else if (f == 3) {
			cout << "不正解" << " " << "正解は1の胃\n" << endl;
			outfile << "6問目" << " " << "×\n" << endl;
			point.push_back(0);
		}
	}

	int y7 = dist7(engine);
	if (0 <= y7 && y7 <= 100) {
		cout << "7問目：亀の寿命はどのくらい？\n" << " " << "1.約100年" << " " << "2.約200年" << " " << "3.約300年\n";
		int g;
		cin >> g;
		if (g == 1) {
			cout << "不正解" << " " << "正解は2の約200年\n" << endl;
			outfile << "7問目" << " " << "×\n" << endl;
			point.push_back(0);
		}
		else if (g == 2) {
			cout << "正解\n" << endl;
			outfile << "7問目" << " " << "〇\n" << endl;
			point.push_back(10);
		}
		else if (g == 3) {
			cout << "不正解" << " " << "正解は2の約200年\n" << endl;
			outfile << "7問目" << " " << "×\n" << endl;
			point.push_back(0);
		}
	}
	if (100 < y7 && y7 <= 200) {
		cout << "7問目：カラオケは略語だが、正式名称は？\n" << " " << "1.カラーオケーション" << " " << "2.空オーケストラ" << " " << "3.カラオケーション\n";
		int g;
		cin >> g;
		if (g == 1) {
			cout << "不正解" << " " << "正解は2の空オーケストラ\n" << endl;
			outfile << "7問目" << " " << "×\n" << endl;
			point.push_back(0);
		}
		else if (g == 2) {
			cout << "正解\n" << endl;
			outfile << "7問目" << " " << "〇\n" << endl;
			point.push_back(10);
		}
		else if (g == 3) {
			cout << "不正解" << " " << "正解は2の空オーケストラ\n" << endl;
			outfile << "7問目" << " " << "×\n" << endl;
			point.push_back(0);
		}
	}
	if (200 < y7 && y7 <= 300) {
		cout << "7問目：視力検査で用いるC字型の環の名前は？\n" << " " << "1.ジンベスト環" << " " << "2.エンデルト環" << " " << "3.ランドルト環\n";
		int g;
		cin >> g;
		if (g == 1) {
			cout << "不正解" << " " << "正解は2のランドルト環\n" << endl;
			outfile << "7問目" << " " << "×\n" << endl;
			point.push_back(0);
		}
		else if (g == 2) {
			cout << "不正解" <<" "<<"正解は2のランドルト環\n"<< endl;
			outfile << "7問目" << " " << "×\n" << endl;
			point.push_back(0);
		}
		else if (g == 3) {
			cout << "正解\n" << endl;
			outfile << "7問目" << " " << "〇\n" << endl;
			point.push_back(10);
		}
	}

	int y8 = dist8(engine);
	if (0 <= y8 && y8 <= 100) {
		cout << "8問目：海底では何色が見えにくい？\n" << " " << "1.青" << " " << "2.黒" << " " << "3.赤\n";
		int h;
		cin >> h;
		if (h == 1) {
			cout << "不正解" << " " << "正解は3の赤\n" << endl;
			outfile << "8問目" << " " << "×\n" << endl;
			point.push_back(0);
		}
		else if (h == 2) {
			cout << "不正解" << " " << "正解は3の赤\n" << endl;
			outfile << "8問目" << " " << "×\n" << endl;
			point.push_back(0);
		}
		else if (h == 3) {
			cout << "正解\n" << endl;
			outfile << "8問目" << " " << "〇\n" << endl;
			point.push_back(10);
		}
	}
	if (100 < y8 && y8 <= 200) {
		cout << "8問目：ハリセンボンの針の数は？\n" << " " << "1. 100本" << " " << "2. 200本" << " " << "3. 400本\n";
		int h;
		cin >> h;
		if (h == 1) {
			cout << "不正解" << " " << "正解は3の400本\n" << endl;
			outfile << "8問目" << " " << "×\n" << endl;
			point.push_back(0);
		}
		else if (h == 2) {
			cout << "不正解" << " " << "正解は3の400本\n" << endl;
			outfile << "8問目" << " " << "×\n" << endl;
			point.push_back(0);
		}
		else if (h == 3) {
			cout << "正解\n" << endl;
			outfile << "8問目" << " " << "〇\n" << endl;
			point.push_back(10);
		}
	}
	if (200 < y8 && y8 <= 300) {
		cout << "8問目：じゃんけんの「最初はグー」を初めて言った人は？\n" << " " << "1. 明石家さんま" << " " << "2. 志村けん" << " " << "3. ビートたけし\n";
		int h;
		cin >> h;
		if (h == 1) {
			cout << "不正解" << " " << "正解は2の志村けん\n" << endl;
			outfile << "8問目" << " " << "×\n" << endl;
			point.push_back(0);
		}
		else if (h == 2) {
			cout << "正解\n" << endl;
			outfile << "8問目" << " " << "〇\n" << endl;
			point.push_back(10);
		}
		else if (h == 3) {
			cout << "不正解"<<" "<<"正解は2の志村けん\n" << endl;
			outfile << "8問目" << " " << "×\n" << endl;
			point.push_back(0);
		}
	}

	int y9 = dist9(engine);
	if (0 <= y9 && y9 <= 100) {
		cout << "9問目：昔の郵便ポストで存在した色は？\n" << " " << "1.白" << " " << "2.黒" << " " << "3.黄\n";
		int i;
		cin >> i;
		if (i == 1) {
			cout << "不正解" << " " << "正解は2の黒\n" << endl;
			outfile << "9問目" << " " << "×\n" << endl;
			point.push_back(0);
		}
		else if (i == 2) {
			cout << "正解\n" << endl;
			outfile << "9問目" << " " << "〇\n" << endl;
			point.push_back(10);
		}
		else if (i == 3) {
			cout << "不正解" << " " << "正解は2の黒\n" << endl;
			outfile << "9問目" << " " << "×\n" << endl;
			point.push_back(0);
		}
	}
	if (100 < y9 && y9 <= 200) {
		cout << "9問目：日本で最初に完成した集約電波塔は？\n" << " " << "1.名古屋テレビ塔" << " " << "2.さっぽろテレビ塔" << " " << "3.東京タワー\n";
		int i;
		cin >> i;
		if (i == 1) {
			cout << "正解\n" << endl;
			outfile << "9問目" << " " << "〇\n" << endl;
			point.push_back(10);
		}
		else if (i == 2) {
			cout << "不正解"<<" "<<"正解は1の名古屋テレビ塔\n" << endl;
			outfile << "9問目" << " " << "×\n" << endl;
			point.push_back(0);
		}
		else if (i == 3) {
			cout << "不正解" << " " << "正解は1の名古屋テレビ塔\n" << endl;
			outfile << "9問目" << " " << "×\n" << endl;
			point.push_back(0);
		}
	}
	if (200 < y9 && y9 <= 300) {
		cout << "9問目：日本で一番乗降客数が多い駅は？\n" << " " << "1.新宿駅" << " " << "2.東京駅" << " " << "3.渋谷駅\n";
		int i;
		cin >> i;
		if (i == 1) {
			cout << "正解\n" << endl;
			outfile << "9問目" << " " << "〇\n" << endl;
			point.push_back(10);
		}
		else if (i == 2) {
			cout << "不正解" << " " << "正解は1の新宿駅\n" << endl;
			outfile << "9問目" << " " << "×\n" << endl;
			point.push_back(0);
		}
		else if (i == 3) {
			cout << "不正解" << " " << "正解は1の新宿駅\n" << endl;
			outfile << "9問目" << " " << "×\n" << endl;
			point.push_back(0);
		}
	}

	int y10 = dist10(engine);
	if (0 <= y10&&y10 <= 100) {
		cout << "10問目：一人の女性が出産した人数のギネス記録は何人？\n" << " " << "1. 35人" << " " << "2. 57人" << " " << "3. 69人\n";
		int j;
		cin >> j;
		if (j == 1) {
			cout << "不正解" << " " << "正解は3の69人\n" << endl;
			outfile << "10問目" << " " << "×\n" << endl;
			point.push_back(0);
		}
		else if (j == 2) {
			cout << "不正解" << " " << "正解は3の69人\n" << endl;
			outfile << "10問目" << " " << "×\n" << endl;
			point.push_back(0);
		}
		else if (j == 3) {
			cout << "正解\n" << endl;
			outfile << "10問目" << " " << "〇\n" << endl;
			point.push_back(10);
		}
	}
	if (100 < y10&&y10 <= 200) {
		cout << "10問目：第1回ワールドカップの優勝国は？\n" << " " << "1.ウルグアイ" << " " << "2.スウェーデン" << " " << "3.ブラジル\n";
		int j;
		cin >> j;
		if (j == 1) {
			cout << "正解\n" << endl;
			outfile << "10問目" << " " << "〇\n" << endl;
			point.push_back(10);
		}
		else if (j == 2) {
			cout << "不正解" << " " << "正解は1のウルグアイ\n" << endl;
			outfile << "10問目" << " " << "×\n" << endl;
			point.push_back(0);
		}
		else if (j == 3) {
			cout << "不正解"<<" "<<"正解は1のウルグアイ\n" << endl;
			outfile << "10問目" << " " << "×\n" << endl;
			point.push_back(0);
		}
	}
	if (200 < y10&&y10 <= 300) {
		cout << "10問目：日本の百円硬貨に描かれている花は？\n" << " " << "1.菊" << " " << "2.桜" << " " << "3.牡丹\n";
		int j;
		cin >> j;
		if (j == 1) {
			cout << "不正解" << " " << "正解は2桜の\n" << endl;
			outfile << "10問目" << " " << "×\n" << endl;
			point.push_back(0);
		}
		else if (j == 2) {
			cout << "正解\n" << endl;
			outfile << "10問目" << " " << "〇\n" << endl;
			point.push_back(10);
		}
		else if (j == 3) {
			cout << "不正解"<<" "<<"正解は2の桜\n" << endl;
			outfile << "10問目" << " " << "×\n" << endl;
			point.push_back(0);
		}
	}
	outfile.close();
	cout << "お疲れさまでした。「OK」と入力すると結果が見られます。" << endl;

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

		cout << "あなたの成績は…\n";
		for (int i = 0; i < v1.size(); i++) v1[i].result();
		cout << "\nよって、あなたのpointは…\n";

		for (auto i = point.cbegin(); i != point.end(); ++i) {
			cout << "[" << *i << "]" << endl;
		}
		int finalpoint = total(point.begin(), point.end());
		cout << "\n合計得点は、" << finalpoint << "点です。" << endl;

		if (finalpoint <= 30) {
			cout << "あなたはまだまだ知識をつけられる！頑張ってください！" << endl;
		}
		if (30 < finalpoint && finalpoint <= 70) {
			cout << "あなたはかなりの物知りです！この調子で頑張ってください！" << endl;
		}
		if (70 < finalpoint && finalpoint <= 90) {
			cout << "あなたはかなりの知識をお持ちです！素晴らしい！" << endl;
		}
		if (90 < finalpoint && finalpoint == 100) {
			cout << "すごい！あなたこそクイズ王の称号にふさわしいです！" << endl;
		}
	}
}


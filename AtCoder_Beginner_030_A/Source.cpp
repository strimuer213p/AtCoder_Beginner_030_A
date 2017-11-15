/*
問題文
野球のAtCoderリーグのシーズンが終了しました。チーム高橋は A 試合中 B 回勝ち、チーム青木は C 試合中 D 回勝ちました。AtCoderリーグでは勝率の高い順に高い順位が与えられます。チーム高橋とチーム青木のどちらが勝率で勝っているか答えるプログラムを作成してください。
*/

#include<iostream>

int main() {
	double totalgame_t, wingame_t, totalgame_a, wingame_a;
	std::cin >> totalgame_t >> wingame_t >> totalgame_a >> wingame_a;

	if ((wingame_t / totalgame_t) == (wingame_a / totalgame_a)) {
		std::cout << "DRAW" << std::endl;
	}else if ((wingame_t / totalgame_t) > (wingame_a / totalgame_a)) {
		std::cout << "TAKAHASHI" << std::endl;
	}
	else {
		std::cout << "AOKI" << std::endl;
	}

	return 0;
}
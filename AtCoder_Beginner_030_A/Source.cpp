/*
��蕶
�싅��AtCoder���[�O�̃V�[�Y�����I�����܂����B�`�[�������� A ������ B �񏟂��A�`�[���؂� C ������ D �񏟂��܂����BAtCoder���[�O�ł͏����̍������ɍ������ʂ��^�����܂��B�`�[�������ƃ`�[���؂̂ǂ��炪�����ŏ����Ă��邩������v���O�������쐬���Ă��������B
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
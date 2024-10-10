#include "Stage.h"

const int WIDTH = 12;
const int HEIGHT = 8;
const int CHIP_SIZE = 40;
int map[HEIGHT][WIDTH] = {
	{ 1, 1, 1 ,1,1,1 ,1,1,1,1,1,1},
	{ 1,0,1,1,0,0,0,1,1,1,1,1, },
	{ 1, 0, 1, 1, 0, 0, 0, 1,1,1,1,1 },
	{ 1, 0, 1, 1, 0, 0, 0, 1 ,1,1,1,1},
	{ 1, 0, 1, 1, 0, 0, 0, 1.1,1,1,1},
	{ 1, 0, 1, 1, 0, 0, 0, 1 ,1,1,1,1},
	{ 1, 0, 1, 1, 0, 0, 0, 1 ,1,1,1,1},
	{ 1, 1, 1, 1, 1, 1, 1, 1 ,1,1,1,1},
};
Stage::Stage()
{
	hImage = LoadGraph("data/image/parts.png");
}

Stage::~Stage()
{
}

void Stage::Draw()
{
	for (int j = 0; j < HEIGHT; j++) {
		int y = j * 40 + 100;
		for (int i = 0; i < WIDTH; i++) {
			int x = i * 40 + 100;
			if (map[j][i] == 1) {
			DrawRectGraph(100 + i * 40, 100+j*40, 0, 40, 40, 40, hImage, TRUE);
		}
	}
}
}

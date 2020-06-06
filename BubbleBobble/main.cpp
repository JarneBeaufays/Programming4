#pragma once
#include "Minigin.h"

int main(int, char* []) {
	dae::Minigin* engine = new dae::Minigin{};
	engine->Run();
	return 0;
}
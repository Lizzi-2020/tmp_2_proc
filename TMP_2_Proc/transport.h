#pragma once
#include "bus.h"
#include "truck.h"
#include "car.h"
#include <fstream>
enum key { BUS, TRUCK, CAR};
struct transport {
	key k; // ключ
	int powerEngine;
	union { // используем прямое включение
		bus b;
		truck t;
		car c;
	};
};
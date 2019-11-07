#pragma once
#include "framework.h"
#include "Events/Event.h"

using namespace EventSystem;

class InputManager
{
public:
	InputManager();

private:
	void OnEvent(Event& e);
};


#pragma once
#include "Events/Event.h"

using namespace EventSystem;

class Button 
{
public:
	using EventCallbackFn = std::function<void(Event&)>;

	void OnButtonPressedEvent();

private:
	EventCallbackFn callbackFn;
};

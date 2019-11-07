#include "InputManager.h"
#include "Events/KeyEvent.h"

InputManager::InputManager()
{
}

void InputManager::OnEvent(Event& e)
{
	EventDispatcher dispatcher(e);
	/*dispatcher.Dispatch().........
	dispatcher.Dispatch().........
	dispatcher.Dispatch().........*/
}

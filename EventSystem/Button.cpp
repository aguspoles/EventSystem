#include "Button.h"
#include "framework.h"
#include "Events/KeyEvent.h"


void Button::OnButtonPressedEvent()
{
	KeyPressedEvent event(65, 1);
	callbackFn(event);
}

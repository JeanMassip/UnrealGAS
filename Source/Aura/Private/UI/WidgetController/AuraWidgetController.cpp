


#include "UI/WidgetController/AuraWidgetController.h"

void UAuraWidgetController::SetWidgetControllersParams(const FWidgetControllerParams Params)
{
	PlayerController = Params.PlayerController;
	PlayerState = Params.PlayerState;
	AbilitySystemComponent = Params.AbilitySystemComponent;
	AttributeSet = Params.AttributeSet;
}

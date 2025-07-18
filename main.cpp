#include "Ez.h"

Ez::Ez()
{
	CtrlLayout(*this, "Ez");
	Sizeable().MinimizeBox().MaximizeBox();
}

GUI_APP_MAIN
{
	Ez().Run();
}

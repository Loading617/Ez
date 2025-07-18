#ifndef _Ez_Ez_h
#define _Ez_Ez_h

#include <CtrlLib/CtrlLib.h>

using namespace Upp;

#define LAYOUTFILE <Ez/Ez.lay>
#include <CtrlCore/lay.h>

class Ez : public WithEzLayout<TopWindow> {
public:
	Ez();
};

#endif

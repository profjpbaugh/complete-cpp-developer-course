#ifndef WARPDRIVE_H
#define WARPDRIVE_H

#include <stdexcept>
using namespace std;

class WarpDriveOverheating : public overflow_error
{
	public:
		WarpDriveOverheating() : overflow_error("Warp drive has exceeded safe temperature tolerance")
		{
		}
};

#endif 

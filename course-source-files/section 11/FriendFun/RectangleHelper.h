#ifndef RECTANGLE_HELPER_H
#define RECTANGLE_HELPER_H

#include "Rectangle.h"

class RectangleHelper
{
	public:
		void modifyRectangle(Rectangle& rect)
		{
			rect.length = 500;
			rect.width = 500;
		}
};

#endif 
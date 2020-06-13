#ifndef CIRCLE_H
#define CIRCLE_H


class Circle
{
	public:
		Circle();
		Circle(double radius);
		double getRadius() const;
		void setRadius(double radius);
		double circumference() const;
		double area() const;

	private:
		double radius;
		const double MY_PI;
};
#endif 

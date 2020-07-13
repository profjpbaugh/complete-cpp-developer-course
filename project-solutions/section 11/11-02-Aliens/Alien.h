#ifndef ALIEN_H
#define ALIEN_H

class Alien
{
	public:
		Alien(int weight, int height, char gender);
		int getWeight() const;
		int getHeight() const;
		char getGender() const;
		int getPrestige() const;

		bool operator==(Alien& other) const;
		bool operator!=(Alien& other) const;
		bool operator>(Alien& other) const;
		bool operator>=(Alien& other) const;
		bool operator<(Alien& other) const;
		bool operator<=(Alien& other) const;
		Alien operator+(Alien& other) const;
		void operator=(Alien& other);

	private:
		int weight;
		int height;
		char gender;
};

#endif 
#include <iostream>
using namespace std;
class Shapes
{
protected:
	float length;
	float width;
	
public:
	Shapes()
	{
		cout << "Enter length: ";
		float l; cin >> l;
		length = l;
		cout << "Enter width: ";
		float w; cin >> w;
		width = w;
	}
	Shapes(float l, float w)
	{
		length = l;
		width = w;
	}
	virtual float GetLength() = 0;
	virtual float GetWidth() = 0;
	
	virtual float Area() = 0;
};
class Shapes2D : public Shapes
{
public:
	virtual float Area() = 0;
};
class Circle : public Shapes2D
{
protected:
	float radius;
	char color;
public:
	Circle()
	{
		cout << "Enter Radius: ";
		float r; cin >> r;
		radius = r;
		cout << "Enter color (w, r, b, g): ";
		char c; cin >> c;
		color = c;
	}
	Circle(float r, char c)
	{
		radius = r;
		color = c;
	}
	Circle(float l, float w, float r, char c)
	{
		length = l;
		width = w;
		radius = r;
		color = c;
	}
	float Area()
	{
		float area = 3.142 * radius * radius;
		return area;
	}
	void SetRadius(float r)
	{
		radius = r;
	}
	void SetColor(char c)
	{
		color = c;
	}
	float GetRadius()
	{
		return radius;
	}
	char GetColour()
	{
		return color;
	}
	float GetLength()
	{
		return length;
	}
	float GetWidth()
	{
		return width;
	}
};
class Square : public Shapes2D
{
protected:
	float side;
	int color;
public:
	Square()
	{
			cout << "Enter Side: ";
			float s; cin >> s;
			side = s;
			cout << "Enter color (w, r, b, g): ";
			char c; cin >> c;
			color = c;
		
	}
	Square(float s, char c)
	{
		side = s;
		color = c;
	}
	Square(float l, float w, float s, char c)
	{
		length = l;
		width = w;
		side = s;
		color = c;
	}
	float Area()
	{
		float area = side * side;
		return area;
	}
	void SetSide(float s)
	{
		side = s;
	}
	void SetColor(char c)
	{
		color = c;
	}
	float GetSide()
	{
		return side;
	}
	char GetColour()
	{
		return color;
	}
	float GetLength()
	{
		return length;
	}
	float GetWidth()
	{
		return width;
	}
};
class Shapes3D : public Shapes
{
public:
	virtual float Area() = 0;
	virtual float Volume() = 0;
};
class Cube : public Shapes3D
{
protected: 
	float height;
public:
	Cube() //technically cuboid
	{
		cout << "Enter height: ";
		float h; cin >> h;
		height = h;
	}
	Cube(float h)
	{
		height= h;
	}
	Cube(float l, float w, float h)
	{
		length = l;
		width = w;
		height = h;
	}
	float GetHeight()
	{
		return height;
	}
	float GetLength()
	{
		return length;
	}
	float GetWidth()
	{
		return width;
	}
	float Area()
	{
		float area;
		area = length * width;
		return area;
	}
	float Volume()
	{
		float volume;
		volume = length * width * height;
		return volume;
	}
};
class Pyramid : public Shapes3D
{
protected:
	float height;
public:
	Pyramid()
	{
		cout << "Enter height: ";
		float h; cin >> h;
		height = h;
	}
	Pyramid(float h)
	{
		height = h;
	}
	Pyramid(float l, float w, float h)
	{
		length = l;
		width = w;
		height = h;
	}
	void Base() // in case of a base shape apart from square or rectangle, add options to the constructor to select the base shape then find area and volume accordingly
	{
		cout << "Length of base is: " << length;
		cout << "Width of base is: " << width;
		cout << "Area of base is: " << length * width; //for rectangle or square
	}
	float GetHeight()
	{
		return height;
	}
	float GetLength()
	{
		return length;
	}
	float GetWidth()
	{
		return width;
	}
	float Area()
	{
		float area;
		area = length * width;
		return area;
	}
	float Volume()
	{
		float volume;
		volume = 1/3 * (length * width * height);
		return volume;
	}
};
void menu()
{
	cout << "Menu" << endl;
	cout << "1. 2D Shape" << endl;
	cout << "2. 3D Shape" << endl;
	cout << "0. Exit" << endl;
	cout << "Choose any option: ";
}
void menu2D()
{
	cout << "1. Circle" << endl;
	cout << "2. Square" << endl;
	cout << "0. Exit" << endl;
}
void menu3D()
{
	cout << "1. Cube" << endl;
	cout << "2. Pyramid" << endl;
	cout << "0. Exit" << endl;
}
void option2D()
{
	cout << "1. Side or Radius" << endl;
	cout << "2. Area" << endl;
	cout << "3. Colour" << endl;
	cout << "0. Exit" << endl;
}
void option3D()
{
	cout << "1. Side or Base" << endl;
	cout << "2. Area of Base" << endl;
	cout << "3. Volume" << endl;
	cout << "0. Exit" << endl;
}
int main()
{
	Shapes2D* Two;
	Shapes3D* Three;
	int x;
	do
	{
		menu();
		cin >> x;
		if (x == 1)
		{
			menu2D();
			int n;
			cout << "Enter option: ";
			cin >> n;
			
				if (n == 1)
				{
					Circle C;
					Two = &C;
					option2D();
					cout << "Enter any option: ";
					int a;
					
					do {
						option2D();
						cin >> a;
						if (a == 1)
						{
							float x = C.GetRadius();
							cout << "Radius of Circle is: " << x << endl;
						}
						else if (a == 2)
						{
							float x = Two->Area();
							cout << "Area of Circle is: " << x << endl;
						}
						else if (a == 3)
						{
							char c = C.GetColour();
							cout << "Colour of Circle is: " << c << endl;
						}
						else if (a == 0)
						{
							break;
						}
						else 
						{
					cout << "Enter valid option: ";
						}
					} while (a != 0);
				}
				else if (n == 2)
				{
					Square C;
					Two = &C;
					option2D();
					cout << "Enter any option: ";
					int a;
					do {
						option2D();
						cin >> a;
						if (a == 1)
						{
							float x = C.GetSide();
							cout << "Side of Square is: " << x << endl;
						}
						else if (a == 2)
						{
							float x = Two->Area();
							cout << "Area of Square is: " << x << endl;
						}
						else if (a == 3)
						{
							char c = C.GetColour();
							cout << "Colour of Square is: " << c << endl;
						}
						else if (a == 0)
						{
							break;
						}
						else
						{
							cout << "Enter valid option: ";
						}
					} while (a != 0);
				}
				else if (n == 0)
				{
					break;
				}
				else
				{
					cout << "Enter valid option: ";
				}
		}
		else if (x == 2)
		{
			menu3D();
			int n;
			cout << "Enter option: ";
			cin >> n;
			if (n == 1)
			{
				Cube C;
				Three = &C;
				option3D();
				cout << "Enter any option: ";
				int a;
				do
				{
					option3D();
					cin >> a;
					if (a == 1)
					{
						float x = C.GetLength();
						cout << "Side of Cube is: " << x << endl;
					}
					else if (a == 2)
					{
						float x = Three->Area();
						cout << "Area of Cube is: " << x << endl;
					}
					else if (a == 3)
					{
						float c = Three->Volume();
						cout << "Volume of Cube is: " << c << endl;
					}
					else if (a == 0)
					{
						break;
					}
					else
					{
						cout << "Enter valid option: ";
					}

				} while (a != 0);
			}
			else if (n == 2)
			{
				Pyramid C;
				Three = &C;
				option3D();
				cout << "Enter any option: ";
				int a;
				do
				{
					option3D();
					cin >> a;
					if (a == 1)
					{
						C.Base();
					}
					else if (a == 2)
					{
						float x = Three->Area();
						cout << "Area of Cube is: " << x << endl;
					}
					else if (a == 3)
					{
						float c = Three->Volume();
						cout << "Volume of Cube is: " << c << endl;
					}
					else if (a == 0)
					{
						break;
					}
					else
					{
						cout << "Enter valid option: ";
					}

				} while (a != 0);
			}
		}
		else if (x == 0)
		{
			break;
		}
		else
		{
			cout << "Enter valid option: ";
		}

	} while (x != 0);
}
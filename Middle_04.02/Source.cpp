
#include <iostream>

//===========================================
//video 4

//class Parent
//{
//
//public:
//	virtual ~Parent()
//	{
//		std::cout << "CAlling ~Parent()" << std::endl;
//	}
//
//};
//
//class Child : public Parent
//{
//private:
//	int* m_array;
//
//public:
//	Child(int lenth)
//	{
//		m_array = new int[lenth];
//	}
//
//	virtual ~Child()
//	{
//		std::cout << "CAlling ~Child()" << std::endl;
//		delete[] m_array;
//	}
//};
//
//int main()
//{
//	Child* child = new Child(7);
//	Parent* parent = child;
//	delete parent;
//
//	return 0;
//}

class Parent
	{
	protected:
		~Parent() = default;
	public:
		virtual const char* getName() { return "Parent"; }
	
	};
	
class Child : public Parent
	{
	
	public:

		//virtual const char* getName() { return "Child"; }
		// or
		const char* getName() override { return "Child"; }
	};
	
int main()
	{
		Child child;
		Parent& parent = child;
		std::cout << parent.getName() << std::endl;
		std::cout << parent.Parent::getName() << std::endl;
	
		return 0;
	}
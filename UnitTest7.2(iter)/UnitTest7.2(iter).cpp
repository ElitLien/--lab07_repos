#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest72iter
{
	TEST_CLASS(UnitTest72iter)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int a;
			a[3][3] = { {1,2,3,
					 4,5,6,
					 7,8,9} };
		}
	};
}

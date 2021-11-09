#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Student\PR6.4\PR6.4\PR6.4.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest4
{
	TEST_CLASS(UnitTest4)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int a[3] = { -1, -2, 3 };
			int S = Sum(a, 3);
			Assert::AreEqual(S, -3);
		}
	};
}

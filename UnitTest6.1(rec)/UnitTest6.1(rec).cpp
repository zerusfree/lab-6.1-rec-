#include "pch.h"
#include "CppUnitTest.h"
#include "../6.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest61rec
{
	TEST_CLASS(UnitTest61rec)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int a;
			const int k = 6;
			int z[k] = { -22, 11, 11 };
			a = Sum(z, k, 0);
			Assert::AreEqual(a, 0);

		}
	};
}

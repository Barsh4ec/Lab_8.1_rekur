#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_8.1 rekur/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			char str[] = "a-d=+dn";
			int k = Count(str, 1);
			Assert::AreEqual(3, k);
		}
	};
}